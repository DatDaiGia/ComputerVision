#pragma once
#include "FrmHistogramEqualisation.h"
#include "FrmHistogramMatching.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Histogram.h"

namespace ComputerVision {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for FrmMain
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
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
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:

	private: System::Windows::Forms::Button^  btnHistogramMatching;
	private: System::Windows::Forms::Button^  btnHistogramEqualisation;

	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: FrmHistogramEqualisation^ frmHistogramEqualisation;
	private: FrmHistogramMatching^ frmHistogramMatching;
	private: System::Windows::Forms::Label^  label1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmMain::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnHistogramMatching = (gcnew System::Windows::Forms::Button());
			this->btnHistogramEqualisation = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnClose);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(269, 36);
			this->panel1->TabIndex = 0;
			// 
			// btnClose
			// 
			this->btnClose->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(233, 0);
			this->btnClose->Margin = System::Windows::Forms::Padding(4);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(36, 36);
			this->btnClose->TabIndex = 2;
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &FrmMain::btnClose_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// btnHistogramMatching
			// 
			this->btnHistogramMatching->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnHistogramMatching->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnHistogramMatching->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHistogramMatching->Location = System::Drawing::Point(41, 157);
			this->btnHistogramMatching->Name = L"btnHistogramMatching";
			this->btnHistogramMatching->Size = System::Drawing::Size(194, 51);
			this->btnHistogramMatching->TabIndex = 2;
			this->btnHistogramMatching->Text = L"Histogram matching";
			this->btnHistogramMatching->UseVisualStyleBackColor = true;
			this->btnHistogramMatching->Click += gcnew System::EventHandler(this, &FrmMain::btnHistogramMatching_Click);
			// 
			// btnHistogramEqualisation
			// 
			this->btnHistogramEqualisation->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnHistogramEqualisation->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnHistogramEqualisation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHistogramEqualisation->Location = System::Drawing::Point(41, 62);
			this->btnHistogramEqualisation->Name = L"btnHistogramEqualisation";
			this->btnHistogramEqualisation->Size = System::Drawing::Size(194, 51);
			this->btnHistogramEqualisation->TabIndex = 1;
			this->btnHistogramEqualisation->Text = L"Histogram equalisation";
			this->btnHistogramEqualisation->UseVisualStyleBackColor = true;
			this->btnHistogramEqualisation->Click += gcnew System::EventHandler(this, &FrmMain::btnHistogramEqualisation_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Computer Vision";
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(269, 243);
			this->Controls->Add(this->btnHistogramMatching);
			this->Controls->Add(this->btnHistogramEqualisation);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FrmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmMain";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:

		Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
			Application::Exit();
		}

		Void btnHistogramEqualisation_Click(System::Object^  sender, System::EventArgs^  e) {
			frmHistogramEqualisation = gcnew FrmHistogramEqualisation();
			this->Visible = false;
			frmHistogramEqualisation->Show();
			frmHistogramEqualisation->Closed += gcnew System::EventHandler(this, &ComputerVision::FrmMain::OnClosed);
		}

		Void btnHistogramMatching_Click(System::Object^  sender, System::EventArgs^  e) {
			frmHistogramMatching = gcnew FrmHistogramMatching();
			this->Visible = false;
			frmHistogramMatching->Show();
			frmHistogramMatching->Closed += gcnew System::EventHandler(this, &ComputerVision::FrmMain::OnClosed);
		}

		void OnClosed(System::Object ^sender, System::EventArgs ^e) {
			this->Visible = true;
		}
	};
}
