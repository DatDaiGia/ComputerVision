#ifndef _HistogramProcessing_H
#define _HistogramProcessing_H

#include <opencv\cv.h>
#include <opencv\highgui.h>

System::Void equalizeHistogram(IplImage* originImg, IplImage* resultImg);

System::Void matchHistogram(IplImage* originImg, IplImage* templateImg, IplImage* resultImg);

System::Void showHistogram(IplImage* img, System::Windows::Forms::PictureBox^ pictureBox);

System::Void showGrayImage(IplImage* img, System::Windows::Forms::PictureBox^ pictureBox);

System::Void calculateS(IplImage* img, float s[]);

System::Void createHistogram(IplImage* img, IplImage* histImg);

System::Void showMatImage(cv::Mat image, System::Windows::Forms::PictureBox^ pictureBox);

System::Void showIplImage(IplImage* image, System::Windows::Forms::PictureBox^ pictureBox);
#endif
