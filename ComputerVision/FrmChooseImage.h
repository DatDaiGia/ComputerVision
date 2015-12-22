#pragma once
#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <string>
#include <msclr\marshal_cppstd.h>

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
	/// Summary for FrmChooseImage
	/// </summary>
	public ref class FrmChooseImage : public System::Windows::Forms::Form
	{
	public:
		FrmChooseImage(void)
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
		~FrmChooseImage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  picbxTemplate;
	protected:

	private: System::Windows::Forms::Button^  btnChooseImg;

	public: System::Windows::Forms::Button^  btnOk;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: IplImage* templateImg;
	public:
	private:


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
			this->picbxTemplate = (gcnew System::Windows::Forms::PictureBox());
			this->btnChooseImg = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxTemplate))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 39);
			this->panel1->TabIndex = 0;
			// 
			// picbxTemplate
			// 
			this->picbxTemplate->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxTemplate->Location = System::Drawing::Point(0, 39);
			this->picbxTemplate->Name = L"picbxTemplate";
			this->picbxTemplate->Size = System::Drawing::Size(397, 269);
			this->picbxTemplate->TabIndex = 1;
			this->picbxTemplate->TabStop = false;
			// 
			// btnChooseImg
			// 
			this->btnChooseImg->Location = System::Drawing::Point(53, 316);
			this->btnChooseImg->Name = L"btnChooseImg";
			this->btnChooseImg->Size = System::Drawing::Size(106, 37);
			this->btnChooseImg->TabIndex = 2;
			this->btnChooseImg->Text = L"Chọn ảnh";
			this->btnChooseImg->UseVisualStyleBackColor = true;
			this->btnChooseImg->Click += gcnew System::EventHandler(this, &FrmChooseImage::btnChooseImg_Click);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(248, 316);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(106, 37);
			this->btnOk->TabIndex = 3;
			this->btnOk->Text = L"Ok";
			this->btnOk->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// FrmChooseImage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 363);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnChooseImg);
			this->Controls->Add(this->picbxTemplate);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FrmChooseImage";
			this->Text = L"FrmChooseImage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxTemplate))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Void btnChooseImg_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					string tmp = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
					const char* imgPath = tmp.c_str();
					templateImg = cvLoadImage(imgPath, 0);
					showGrayImage(templateImg, picbxTemplate);
				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Alo", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		Void showGrayImage(IplImage* img, PictureBox^ pictureBox) {
			Mat colorImg(img);
			cvtColor(colorImg, colorImg, CV_GRAY2RGB);
			showMatImage(colorImg, pictureBox);
		}

		Void showMatImage(Mat image, PictureBox^ pictureBox)
		{
			System::Drawing::Graphics^ graphics = pictureBox->CreateGraphics();
			System::IntPtr ptr(image.ptr());
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(image.cols, image.rows, image.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			System::Drawing::RectangleF rect(0, 0, pictureBox->Width, pictureBox->Height);
			graphics->DrawImage(b, rect);
		}

		public:
			IplImage* GetTemplateImage() {
				return templateImg;
			}
	};
}
