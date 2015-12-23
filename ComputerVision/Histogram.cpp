#include "Histogram.h"
System::Void equalizeHistogram(IplImage* originImg, IplImage* resultImg) {
	float LUT[256];
	int step = originImg->widthStep;
	int channels = originImg->nChannels;
	uchar* input = (uchar *)originImg->imageData;
	uchar* output = (uchar *)resultImg->imageData;

	calculateS(originImg, LUT);

	for (int i = 0; i < originImg->height; i++) {
		for (int j = 0; j < originImg->width; j++) {
			output[i*step + j*channels] = LUT[input[i*step + j*channels]];
		}
	}
}

System::Void matchHistogram(IplImage* originImg, IplImage* templateImg, IplImage* resultImg) {
	float s[256];
	float g[256];
	float LUT[256];

	uchar* originData = (uchar *)originImg->imageData;
	uchar* processedData = (uchar *)resultImg->imageData;

	int step = originImg->widthStep;
	int channels = originImg->nChannels;

	for (int i = 0; i < 256; i++){
		LUT[i] = 0.0;
	}

	calculateS(originImg, s);
	calculateS(templateImg, g);

	// matching
	int currentIndex = 0;
	for (int i = 0; i < 256; i++) {
		bool matched = false;
		while (!matched)
		{
			if (s[i] <= g[currentIndex]) {
				LUT[i] = currentIndex;
				matched = true;
			}
			else {
				currentIndex++;
				if (currentIndex > 255) {
					break;
				}
			}
		}
	}

	// make image
	for (int i = 0; i < originImg->height; i++) {
		for (int j = 0; j < originImg->width; j++) {
			processedData[i*step + j*channels] = LUT[originData[i*step + j*channels]];
		}
	}
}

System::Void showHistogram(IplImage* img, System::Windows::Forms::PictureBox^ pictureBox) {
	IplImage* histogramImage = cvCreateImage(cvSize(pictureBox->Width, pictureBox->Height), 8, 1);
	cvSet(histogramImage, cvScalarAll(255), 0);
	createHistogram(img, histogramImage);
	showIplImage(histogramImage, pictureBox);
}

System::Void showGrayImage(IplImage* img, System::Windows::Forms::PictureBox^ pictureBox) {
	cv::Mat colorImg(img);
	cvtColor(colorImg, colorImg, CV_GRAY2RGB);
	showMatImage(colorImg, pictureBox);
}

System::Void calculateS(IplImage* img, float s[]) {
	int step = img->widthStep;
	int channels = img->nChannels;
	uchar* input = (uchar *)img->imageData;

	for (int i = 0; i < 256; i++) {
		s[i] = 0.0;
	}

	for (int i = 0; i < img->height; i++) {
		for (int j = 0; j < img->width; j++) {
			s[input[i*step + j*channels]] += 1;
		}
	}

	int MN = img->width*img->height;

	for (int i = 1; i < 256; i++) {
		s[i] += s[i - 1];
	}

	for (int i = 0; i < 256; i++) {
		s[i] = (s[i] / MN) * 255;
	}
}

System::Void createHistogram(IplImage* img, IplImage* histImg) {
	CvHistogram *hist;
	int histSize = 256;
	float range[] = { 0, 256 };
	float* ranges[] = { range };
	float maxValue = 0.0;
	float wScale = 0.0000000;

	hist = cvCreateHist(1, &histSize, CV_HIST_ARRAY, ranges, 1);
	cvCalcHist(&img, hist, 0, NULL);
	cvGetMinMaxHistValue(hist, 0, &maxValue, 0, 0);
	cvScale(hist->bins, hist->bins, ((float)histImg->height) / maxValue, 0);
	wScale = ((float)histImg->width) / histSize;

	for (int i = 0; i < histSize; i++) {
		cvRectangle(histImg, cvPoint((int)i*wScale, histImg->height), cvPoint((int)(i + 1)*wScale, histImg->height - cvRound(cvGetReal1D(hist->bins, i))), cvScalar(0), -1, 8, 0);
	}
}

System::Void showMatImage(cv::Mat image, System::Windows::Forms::PictureBox^ pictureBox)
{
	System::Drawing::Graphics^ graphics = pictureBox->CreateGraphics();
	System::IntPtr ptr(image.ptr());
	System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(image.cols, image.rows, image.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, pictureBox->Width, pictureBox->Height);
	graphics->DrawImage(b, rect);
}

System::Void showIplImage(IplImage* image, System::Windows::Forms::PictureBox^ pictureBox) {
	pictureBox->Image = gcnew System::Drawing::Bitmap
		(pictureBox->Width, pictureBox->Height, image->widthStep,
		System::Drawing::Imaging::PixelFormat::Format8bppIndexed, (System::IntPtr) image->imageData);
	pictureBox->Refresh();
}