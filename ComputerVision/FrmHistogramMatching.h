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
	/// Summary for FrmHistogramMatching
	/// </summary>
	public ref class FrmHistogramMatching : public System::Windows::Forms::Form
	{
	public:
		FrmHistogramMatching(void)
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
		~FrmHistogramMatching()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox3;
	protected:
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  picbxProcessedHistogram;

	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  picbxProcessedImg;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  picbxTemplateHistogram;

	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  picbxTemplateImg;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  picbxOriginHistogram;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  picbxOriginImg;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Button^  btnLoadOriginImg;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnClose;

	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnLoadTemplateImg;
	private: System::Windows::Forms::Button^  btnMatch;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: IplImage* originImg;
	private: IplImage* templateImg;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmHistogramMatching::typeid));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedHistogram = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->picbxProcessedImg = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->picbxTemplateHistogram = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->picbxTemplateImg = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picbxOriginHistogram = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picbxOriginImg = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnMatch = (gcnew System::Windows::Forms::Button());
			this->btnLoadTemplateImg = (gcnew System::Windows::Forms::Button());
			this->btnLoadOriginImg = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox3->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImg))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxTemplateHistogram))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxTemplateImg))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginHistogram))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginImg))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->panel7);
			this->groupBox3->Controls->Add(this->picbxProcessedHistogram);
			this->groupBox3->Controls->Add(this->panel8);
			this->groupBox3->Controls->Add(this->picbxProcessedImg);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(604, 78);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(302, 565);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Processed image";
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
			// picbxProcessedHistogram
			// 
			this->picbxProcessedHistogram->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedHistogram->Location = System::Drawing::Point(3, 290);
			this->picbxProcessedHistogram->Name = L"picbxProcessedHistogram";
			this->picbxProcessedHistogram->Size = System::Drawing::Size(296, 236);
			this->picbxProcessedHistogram->TabIndex = 2;
			this->picbxProcessedHistogram->TabStop = false;
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
			// picbxProcessedImg
			// 
			this->picbxProcessedImg->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxProcessedImg->Location = System::Drawing::Point(3, 18);
			this->picbxProcessedImg->Name = L"picbxProcessedImg";
			this->picbxProcessedImg->Size = System::Drawing::Size(296, 236);
			this->picbxProcessedImg->TabIndex = 0;
			this->picbxProcessedImg->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->panel5);
			this->groupBox2->Controls->Add(this->picbxTemplateHistogram);
			this->groupBox2->Controls->Add(this->panel6);
			this->groupBox2->Controls->Add(this->picbxTemplateImg);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox2->Location = System::Drawing::Point(302, 78);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(302, 565);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Template image";
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
			// picbxTemplateHistogram
			// 
			this->picbxTemplateHistogram->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxTemplateHistogram->Location = System::Drawing::Point(3, 290);
			this->picbxTemplateHistogram->Name = L"picbxTemplateHistogram";
			this->picbxTemplateHistogram->Size = System::Drawing::Size(296, 236);
			this->picbxTemplateHistogram->TabIndex = 2;
			this->picbxTemplateHistogram->TabStop = false;
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
			// picbxTemplateImg
			// 
			this->picbxTemplateImg->Dock = System::Windows::Forms::DockStyle::Top;
			this->picbxTemplateImg->Location = System::Drawing::Point(3, 18);
			this->picbxTemplateImg->Name = L"picbxTemplateImg";
			this->picbxTemplateImg->Size = System::Drawing::Size(296, 236);
			this->picbxTemplateImg->TabIndex = 0;
			this->picbxTemplateImg->TabStop = false;
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
			this->groupBox1->TabIndex = 7;
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
			// panel2
			// 
			this->panel2->Controls->Add(this->btnMatch);
			this->panel2->Controls->Add(this->btnLoadTemplateImg);
			this->panel2->Controls->Add(this->btnLoadOriginImg);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 36);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(906, 42);
			this->panel2->TabIndex = 6;
			// 
			// btnMatch
			// 
			this->btnMatch->FlatAppearance->BorderSize = 0;
			this->btnMatch->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnMatch->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnMatch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMatch->Location = System::Drawing::Point(356, 5);
			this->btnMatch->Name = L"btnMatch";
			this->btnMatch->Size = System::Drawing::Size(84, 31);
			this->btnMatch->TabIndex = 2;
			this->btnMatch->Text = L"Match";
			this->btnMatch->UseVisualStyleBackColor = true;
			this->btnMatch->Click += gcnew System::EventHandler(this, &FrmHistogramMatching::btnMatch_Click);
			// 
			// btnLoadTemplateImg
			// 
			this->btnLoadTemplateImg->FlatAppearance->BorderSize = 0;
			this->btnLoadTemplateImg->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnLoadTemplateImg->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnLoadTemplateImg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLoadTemplateImg->Location = System::Drawing::Point(169, 5);
			this->btnLoadTemplateImg->Name = L"btnLoadTemplateImg";
			this->btnLoadTemplateImg->Size = System::Drawing::Size(181, 31);
			this->btnLoadTemplateImg->TabIndex = 1;
			this->btnLoadTemplateImg->Text = L"Load template image";
			this->btnLoadTemplateImg->UseVisualStyleBackColor = true;
			this->btnLoadTemplateImg->Click += gcnew System::EventHandler(this, &FrmHistogramMatching::btnLoadTemplateImg_Click);
			// 
			// btnLoadOriginImg
			// 
			this->btnLoadOriginImg->FlatAppearance->BorderSize = 0;
			this->btnLoadOriginImg->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnLoadOriginImg->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnLoadOriginImg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLoadOriginImg->Location = System::Drawing::Point(6, 5);
			this->btnLoadOriginImg->Name = L"btnLoadOriginImg";
			this->btnLoadOriginImg->Size = System::Drawing::Size(157, 31);
			this->btnLoadOriginImg->TabIndex = 0;
			this->btnLoadOriginImg->Text = L"Load origin image";
			this->btnLoadOriginImg->UseVisualStyleBackColor = true;
			this->btnLoadOriginImg->Click += gcnew System::EventHandler(this, &FrmHistogramMatching::btnLoadOriginImg_Click);
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
			this->panel1->TabIndex = 5;
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
			this->btnClose->Click += gcnew System::EventHandler(this, &FrmHistogramMatching::btnClose_Click);
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
			this->btnBack->Click += gcnew System::EventHandler(this, &FrmHistogramMatching::btnBack_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// FrmHistogramMatching
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
			this->Name = L"FrmHistogramMatching";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmHistogramMatching";
			this->groupBox3->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedHistogram))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxProcessedImg))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxTemplateHistogram))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxTemplateImg))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginHistogram))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbxOriginImg))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Void btnLoadOriginImg_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					string tmp = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
					const char* imgPath = tmp.c_str();
					originImg = cvLoadImage(imgPath, 0);

					showGrayImage(originImg, picbxOriginImg);
					showHistogram(originImg, picbxOriginHistogram);
				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		Void btnLoadTemplateImg_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					string tmp = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
					const char* imgPath = tmp.c_str();
					templateImg = cvLoadImage(imgPath, 0);

					showGrayImage(templateImg, picbxTemplateImg);
					showHistogram(templateImg, picbxTemplateHistogram);
				}
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		Void btnMatch_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				if (originImg == NULL)
				{
					throw gcnew System::Exception("No origin image found!");
				}
				if (templateImg == NULL)
				{
					throw gcnew System::Exception("No template image found!");
				}

				IplImage* resultImg = cvCreateImage(cvGetSize(originImg), originImg->depth, originImg->nChannels);
				matchHistogram(originImg, templateImg, resultImg);
				showGrayImage(resultImg, picbxProcessedImg);
				showHistogram(resultImg, picbxProcessedHistogram);
			}
			catch (System::Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

		Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}

		Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
	};
}
