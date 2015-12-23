#pragma once

#include "Histogram.h"
#include <string>
#include <msclr\marshal_cppstd.h>

namespace ComputerVision {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for FrmHistogramEqualisation
	/// </summary>
	public ref class FrmHistogramEqualisation : public System::Windows::Forms::Form
	{
	public:
		FrmHistogramEqualisation(void)
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
		~FrmHistogramEqualisation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnBack;

	private:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btnLoadImg;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::PictureBox^  picbxOriginHistogram;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  picbxOriginImg;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  picbxProcessedHistogram1;

	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  picbxProcessedImg1;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  picbxProcessedHistogram2;

	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  picbxProcessedImg2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: IplImage* originImg;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmHistogramEqualisation::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnLoadImg = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picbxOriginHistogram = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picbxOriginImg = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedHistogram1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedImg1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedHistogram2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedImg2 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginHistogram))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginImg))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram1))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImg1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram2))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImg2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnClose);
			this->panel1->Controls->Add(this->btnBack);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(906, 36);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(332, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Histogram Equalisation";
			// 
			// btnClose
			// 
			this->btnClose->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(870, 0);
			this->btnClose->Margin = System::Windows::Forms::Padding(4);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(36, 36);
			this->btnClose->TabIndex = 1;
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &FrmHistogramEqualisation::btnClose_Click);
			// 
			// btnBack
			// 
			this->btnBack->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(0, 0);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(36, 36);
			this->btnBack->TabIndex = 0;
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &FrmHistogramEqualisation::btnBack_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnLoadImg);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 36);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(906, 42);
			this->panel2->TabIndex = 1;
			// 
			// btnLoadImg
			// 
			this->btnLoadImg->FlatAppearance->BorderSize = 0;
			this->btnLoadImg->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnLoadImg->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnLoadImg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLoadImg->Location = System::Drawing::Point(6, 5);
			this->btnLoadImg->Name = L"btnLoadImg";
			this->btnLoadImg->Size = System::Drawing::Size(112, 31);
			this->btnLoadImg->TabIndex = 0;
			this->btnLoadImg->Text = L"Load image";
			this->btnLoadImg->UseVisualStyleBackColor = true;
			this->btnLoadImg->Click += gcnew System::EventHandler(this, &FrmHistogramEqualisation::btnLoadImg_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel4);
			this->groupBox1->Controls->Add(this->picbxOriginHistogram);
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Controls->Add(this->picbxOriginImg);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox1->Location = System::Drawing::Point(0, 78);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(302, 565);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Origin image";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label3);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(3, 526);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(296, 36);
			this->panel4->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Histogram";
			// 
			// picbxOriginHistogram
			// 
			this->picbxOriginHistogram->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxOriginHistogram->Location = System::Drawing::Point(3, 290);
			this->picbxOriginHistogram->Name = L"picbxOriginHistogram";
			this->picbxOriginHistogram->Size = System::Drawing::Size(296, 236);
			this->picbxOriginHistogram->TabIndex = 2;
			this->picbxOriginHistogram->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(3, 254);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(296, 36);
			this->panel3->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Image";
			// 
			// picbxOriginImg
			// 
			this->picbxOriginImg->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxOriginImg->Location = System::Drawing::Point(3, 18);
			this->picbxOriginImg->Name = L"picbxOriginImg";
			this->picbxOriginImg->Size = System::Drawing::Size(296, 236);
			this->picbxOriginImg->TabIndex = 0;
			this->picbxOriginImg->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->panel5);
			this->groupBox2->Controls->Add(this->picbxProcessedHistogram1);
			this->groupBox2->Controls->Add(this->panel6);
			this->groupBox2->Controls->Add(this->picbxProcessedImg1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox2->Location = System::Drawing::Point(302, 78);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(302, 565);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Processed image";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label4);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(3, 526);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(296, 36);
			this->panel5->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(103, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Histogram";
			// 
			// picbxProcessedHistogram1
			// 
			this->picbxProcessedHistogram1->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedHistogram1->Location = System::Drawing::Point(3, 290);
			this->picbxProcessedHistogram1->Name = L"picbxProcessedHistogram1";
			this->picbxProcessedHistogram1->Size = System::Drawing::Size(296, 236);
			this->picbxProcessedHistogram1->TabIndex = 2;
			this->picbxProcessedHistogram1->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label5);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(3, 254);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(296, 36);
			this->panel6->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(112, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Image";
			// 
			// picbxProcessedImg1
			// 
			this->picbxProcessedImg1->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedImg1->Location = System::Drawing::Point(3, 18);
			this->picbxProcessedImg1->Name = L"picbxProcessedImg1";
			this->picbxProcessedImg1->Size = System::Drawing::Size(296, 236);
			this->picbxProcessedImg1->TabIndex = 0;
			this->picbxProcessedImg1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->panel7);
			this->groupBox3->Controls->Add(this->picbxProcessedHistogram2);
			this->groupBox3->Controls->Add(this->panel8);
			this->groupBox3->Controls->Add(this->picbxProcessedImg2);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(604, 78);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(302, 565);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Processed image using opencv";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label6);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(3, 526);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(296, 36);
			this->panel7->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(103, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Histogram";
			// 
			// picbxProcessedHistogram2
			// 
			this->picbxProcessedHistogram2->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedHistogram2->Location = System::Drawing::Point(3, 290);
			this->picbxProcessedHistogram2->Name = L"picbxProcessedHistogram2";
			this->picbxProcessedHistogram2->Size = System::Drawing::Size(296, 236);
			this->picbxProcessedHistogram2->TabIndex = 2;
			this->picbxProcessedHistogram2->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label7);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(3, 254);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(296, 36);
			this->panel8->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(112, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 16);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Image";
			// 
			// picbxProcessedImg2
			// 
			this->picbxProcessedImg2->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedImg2->Location = System::Drawing::Point(3, 18);
			this->picbxProcessedImg2->Name = L"picbxProcessedImg2";
			this->picbxProcessedImg2->Size = System::Drawing::Size(296, 236);
			this->picbxProcessedImg2->TabIndex = 0;
			this->picbxProcessedImg2->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// FrmHistogramEqualisation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(906, 643);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FrmHistogramEqualisation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmHistogramEqualisation";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginHistogram))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginImg))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram1))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImg1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram2))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImg2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:

		Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}

		Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}

		Void btnLoadImg_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					string tmp = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
					const char* imgPath = tmp.c_str();
					originImg = cvLoadImage(imgPath, 0);

					showGrayImage(originImg, picbxOriginImg);
					showHistogram(originImg, picbxOriginHistogram);

					IplImage* resultImg1 = cvCreateImage(cvGetSize(originImg), originImg->depth, originImg->nChannels);
					equalizeHistogram(originImg, resultImg1);
					showGrayImage(resultImg1, picbxProcessedImg1);
					showHistogram(resultImg1, picbxProcessedHistogram1);

					IplImage* resultImg2 = cvCreateImage(cvGetSize(originImg), originImg->depth, originImg->nChannels);
					cvEqualizeHist(originImg, resultImg2);
					showGrayImage(resultImg2, picbxProcessedImg2);
					showHistogram(resultImg2, picbxProcessedHistogram2);
				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Alo", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	};
}
