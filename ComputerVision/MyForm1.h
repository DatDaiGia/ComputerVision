#pragma once
#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include "FrmChooseImage.h"

namespace ComputerVision {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	using namespace cv;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btnMatching;

	private: System::Windows::Forms::Button^  btnEqualization;

	private: System::Windows::Forms::Button^  btnLoadImage;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  picbxOriginHistogram;


	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  picbxOriginImage;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  picbxProcessedHistogram1;

	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  picbxProcessedImage1;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  picbxProcessedHistogram2;

	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  picbxProcessedImage2;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label7;

	private: IplImage* originImg;
	private: FrmChooseImage^ frmChooseImg;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnMatching = (gcnew System::Windows::Forms::Button());
			this->btnEqualization = (gcnew System::Windows::Forms::Button());
			this->btnLoadImage = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picbxOriginHistogram = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picbxOriginImage = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedHistogram1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedImage1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedHistogram2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedImage2 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginHistogram))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginImage))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram1))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImage1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram2))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImage2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(792, 32);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->btnMatching);
			this->panel2->Controls->Add(this->btnEqualization);
			this->panel2->Controls->Add(this->btnLoadImage);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 32);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(792, 32);
			this->panel2->TabIndex = 1;
			// 
			// btnMatching
			// 
			this->btnMatching->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnMatching->FlatAppearance->BorderSize = 0;
			this->btnMatching->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMatching->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMatching->Location = System::Drawing::Point(329, 0);
			this->btnMatching->Name = L"btnMatching";
			this->btnMatching->Size = System::Drawing::Size(188, 32);
			this->btnMatching->TabIndex = 2;
			this->btnMatching->Text = L"Histogram matching";
			this->btnMatching->UseVisualStyleBackColor = true;
			this->btnMatching->Click += gcnew System::EventHandler(this, &MyForm1::btnMatching_Click);
			// 
			// btnEqualization
			// 
			this->btnEqualization->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnEqualization->FlatAppearance->BorderSize = 0;
			this->btnEqualization->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEqualization->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqualization->Location = System::Drawing::Point(121, 0);
			this->btnEqualization->Name = L"btnEqualization";
			this->btnEqualization->Size = System::Drawing::Size(208, 32);
			this->btnEqualization->TabIndex = 1;
			this->btnEqualization->Text = L"Histogram equalization";
			this->btnEqualization->UseVisualStyleBackColor = true;
			this->btnEqualization->Click += gcnew System::EventHandler(this, &MyForm1::btnEqualization_Click);
			// 
			// btnLoadImage
			// 
			this->btnLoadImage->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnLoadImage->FlatAppearance->BorderSize = 0;
			this->btnLoadImage->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLoadImage->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoadImage->Location = System::Drawing::Point(0, 0);
			this->btnLoadImage->Name = L"btnLoadImage";
			this->btnLoadImage->Size = System::Drawing::Size(121, 32);
			this->btnLoadImage->TabIndex = 0;
			this->btnLoadImage->Text = L"Load image";
			this->btnLoadImage->UseVisualStyleBackColor = true;
			this->btnLoadImage->Click += gcnew System::EventHandler(this, &MyForm1::btnLoadImage_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel4);
			this->groupBox1->Controls->Add(this->picbxOriginHistogram);
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Controls->Add(this->picbxOriginImage);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox1->Location = System::Drawing::Point(0, 64);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(264, 526);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ảnh gốc";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(3, 494);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(258, 32);
			this->panel4->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(83, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Histogram";
			// 
			// picbxOriginHistogram
			// 
			this->picbxOriginHistogram->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxOriginHistogram->Location = System::Drawing::Point(3, 271);
			this->picbxOriginHistogram->Name = L"picbxOriginHistogram";
			this->picbxOriginHistogram->Size = System::Drawing::Size(258, 223);
			this->picbxOriginHistogram->TabIndex = 2;
			this->picbxOriginHistogram->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(3, 239);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(258, 32);
			this->panel3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(96, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ảnh";
			// 
			// picbxOriginImage
			// 
			this->picbxOriginImage->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxOriginImage->Location = System::Drawing::Point(3, 16);
			this->picbxOriginImage->Name = L"picbxOriginImage";
			this->picbxOriginImage->Size = System::Drawing::Size(258, 223);
			this->picbxOriginImage->TabIndex = 0;
			this->picbxOriginImage->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->panel5);
			this->groupBox2->Controls->Add(this->picbxProcessedHistogram1);
			this->groupBox2->Controls->Add(this->panel6);
			this->groupBox2->Controls->Add(this->picbxProcessedImage1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox2->Location = System::Drawing::Point(264, 64);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(264, 526);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Biến đổi thường";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label3);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(3, 494);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(258, 32);
			this->panel5->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(83, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Histogram";
			// 
			// picbxProcessedHistogram1
			// 
			this->picbxProcessedHistogram1->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedHistogram1->Location = System::Drawing::Point(3, 271);
			this->picbxProcessedHistogram1->Name = L"picbxProcessedHistogram1";
			this->picbxProcessedHistogram1->Size = System::Drawing::Size(258, 223);
			this->picbxProcessedHistogram1->TabIndex = 6;
			this->picbxProcessedHistogram1->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label4);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(3, 239);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(258, 32);
			this->panel6->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(97, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ảnh";
			// 
			// picbxProcessedImage1
			// 
			this->picbxProcessedImage1->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedImage1->Location = System::Drawing::Point(3, 16);
			this->picbxProcessedImage1->Name = L"picbxProcessedImage1";
			this->picbxProcessedImage1->Size = System::Drawing::Size(258, 223);
			this->picbxProcessedImage1->TabIndex = 4;
			this->picbxProcessedImage1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->panel7);
			this->groupBox3->Controls->Add(this->picbxProcessedHistogram2);
			this->groupBox3->Controls->Add(this->panel8);
			this->groupBox3->Controls->Add(this->picbxProcessedImage2);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(528, 64);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(264, 526);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Biển đổi dùng hàm openCV";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label5);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(3, 494);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(258, 32);
			this->panel7->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(83, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Histogram";
			// 
			// picbxProcessedHistogram2
			// 
			this->picbxProcessedHistogram2->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedHistogram2->Location = System::Drawing::Point(3, 271);
			this->picbxProcessedHistogram2->Name = L"picbxProcessedHistogram2";
			this->picbxProcessedHistogram2->Size = System::Drawing::Size(258, 223);
			this->picbxProcessedHistogram2->TabIndex = 6;
			this->picbxProcessedHistogram2->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label6);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(3, 239);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(258, 32);
			this->panel8->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(106, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ảnh";
			// 
			// picbxProcessedImage2
			// 
			this->picbxProcessedImage2->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedImage2->Location = System::Drawing::Point(3, 16);
			this->picbxProcessedImage2->Name = L"picbxProcessedImage2";
			this->picbxProcessedImage2->Size = System::Drawing::Size(258, 223);
			this->picbxProcessedImage2->TabIndex = 4;
			this->picbxProcessedImage2->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(541, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"label7";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 590);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginHistogram))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginImage))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram1))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImage1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram2))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImage2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Void btnLoadImage_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					string tmp = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
					const char* imgPath = tmp.c_str();
					originImg = cvLoadImage(imgPath, 0);
					showGrayImage(originImg, picbxOriginImage);

					showHistogram(originImg, picbxOriginHistogram);
				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Alo", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		Void showMatImage(Mat image, PictureBox^ pictureBox)
		{
			System::Drawing::Graphics^ graphics = pictureBox->CreateGraphics();
			System::IntPtr ptr(image.ptr());
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(image.cols, image.rows, image.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			System::Drawing::RectangleF rect(0, 0, pictureBox->Width, pictureBox->Height);
			graphics->DrawImage(b, rect);
		}

		Void showIplImage(IplImage* image, PictureBox^ pictureBox) {
			pictureBox->Image = gcnew System::Drawing::Bitmap
				(pictureBox->Width, pictureBox->Height, image->widthStep,
				System::Drawing::Imaging::PixelFormat::Format8bppIndexed, (System::IntPtr) image->imageData);
			pictureBox->Refresh();
		}

		Void btnEqualization_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				if (originImg == NULL)
				{
					throw gcnew System::Exception("Chưa có ảnh!");
				}
				else
				{
					// Histogram equaliztion without using opencv functions
					IplImage* image1 = cvCreateImage(cvGetSize(originImg), originImg->depth, originImg->nChannels);
					equalizeHistogram(originImg, image1);

					showGrayImage(image1, picbxProcessedImage1);

					showHistogram(image1, picbxProcessedHistogram1);

					// Histogram equaliztion using opencv functions
					IplImage* image2 = cvCreateImage(cvGetSize(originImg), originImg->depth, originImg->nChannels);
					cvEqualizeHist(originImg, image2);

					showGrayImage(image2, picbxProcessedImage2);

					showHistogram(image2, picbxProcessedHistogram2);
				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Alo", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		Void btnMatching_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				if (originImg == NULL)
				{
					throw gcnew System::Exception("Chưa có ảnh!");
				}
				else
				{
					frmChooseImg = gcnew FrmChooseImage();
					frmChooseImg->Show();
					frmChooseImg->btnOk->Click += gcnew System::EventHandler(this, &ComputerVision::MyForm1::OnClick);
				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Alo", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		Void equalizeHistogram(IplImage* originImg, IplImage* processedImg) {
			float LUT[256];
			int MN = 0;
			int step = originImg->widthStep;
			int channels = originImg->nChannels;
			uchar* input = (uchar *)originImg->imageData;
			uchar* output = (uchar *)processedImg->imageData;

			for (int i = 0; i < 256; i++) {
				LUT[i] = 0.0;
			}

			for (int i = 0; i < originImg->height; i++) {
				for (int j = 0; j < originImg->width; j++) {
					LUT[input[i*step + j*channels]] += 1;
				}
			}

			MN = originImg->width*originImg->height;

			for (int i = 1; i < 256; i++) {
				LUT[i] += LUT[i - 1];
			}

			for (int i = 0; i < 256; i++) {
				LUT[i] = (LUT[i] / MN) * 255;
			}

			for (int i = 0; i < originImg->height; i++) {
				for (int j = 0; j < originImg->width; j++) {
					output[i*step + j*channels] = LUT[input[i*step + j*channels]];
				}
			}
		}

		Void matchHistogram(IplImage* originImg, IplImage* processedImg) {

		}

		Void showHistogram(IplImage* img, PictureBox^ pictureBox) {
			IplImage* histogramImage = cvCreateImage(cvSize(pictureBox->Width, pictureBox->Height), 8, 1);
			cvSet(histogramImage, cvScalarAll(255), 0);
			createHistogram(img, histogramImage);
			showIplImage(histogramImage, pictureBox);
		}

		Void showGrayImage(IplImage* img, PictureBox^ pictureBox) {
			Mat colorImg(img);
			cvtColor(colorImg, colorImg, CV_GRAY2RGB);
			showMatImage(colorImg, pictureBox);
		}

		Void createHistogram(IplImage* img, IplImage* histImg) {
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

		Void OnClick(System::Object ^sender, System::EventArgs ^e) {
			IplImage* templateImg = frmChooseImg->GetTemplateImage();
			frmChooseImg->Close();
			IplImage* image2 = cvCreateImage(cvGetSize(originImg), originImg->depth, originImg->nChannels);
			cvMatchTemplate(originImg, templateImg, image2, CV_TM_CCORR);
			showGrayImage(image2, picbxProcessedImage2);
		}
};
}