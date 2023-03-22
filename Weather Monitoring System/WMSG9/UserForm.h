#pragma once
#define CURL_STATICLIB
#include <iostream>
#include <string>
#include<cmath>
#include<vector>
#include<thread>
#include "curl/curl.h"
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
using namespace std;

void sleepcp(int milliseconds);

void sleepcp(int milliseconds) // Cross-platform sleep function
{
#ifdef _WIN32
	Sleep(milliseconds);
#else
	usleep(milliseconds * 1000);
#endif 
	// _WIN32

}
#endif

static size_t my_writ(void* buffer, size_t size, size_t nmemb, void* param)
{
	std::string& text = *static_cast<std::string*>(param);
	size_t totalsize = size * nmemb;
	text.append(static_cast<char*>(buffer), totalsize);
	return totalsize;
}

namespace WMSG9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net::Mail;
	using namespace std;

	/// <summary>
	/// Summary for UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		Form^ object;
		UserForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//timer1->Start();
			//mainFunction();
			
		}
		UserForm(Form^ obj)
		{
			this->object = obj;
			InitializeComponent();
			timer2->Start();
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
			//delete t1;// delete
		}

	protected:















	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ Analysis;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Timer^ timer2;
















	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Analysis = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(187, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(517, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Welcome to Ecobliss Weather Monitoring System";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label2->Location = System::Drawing::Point(186, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 32);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Dashboard";
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(0, 341);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 61);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Logout";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UserForm::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(3, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 61);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Print";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserForm::button2_Click);
			// 
			// Analysis
			// 
			this->Analysis->FlatAppearance->BorderSize = 0;
			this->Analysis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Analysis->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Analysis->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->Analysis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Analysis.Image")));
			this->Analysis->Location = System::Drawing::Point(3, 141);
			this->Analysis->Name = L"Analysis";
			this->Analysis->Size = System::Drawing::Size(186, 61);
			this->Analysis->TabIndex = 2;
			this->Analysis->Text = L"Analytics";
			this->Analysis->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->Analysis->UseVisualStyleBackColor = true;
			this->Analysis->Click += gcnew System::EventHandler(this, &UserForm::Analysis_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(60, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(63, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(186, 144);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(3, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Authorized User";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->Analysis);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 415);
			this->panel1->TabIndex = 3;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(126, 38);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(63, 23);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Close";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &UserForm::checkBox2_CheckedChanged);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FloralWhite;
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->textBox2);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Location = System::Drawing::Point(455, 50);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(220, 81);
			this->panel7->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 34);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(98, 19);
			this->textBox1->TabIndex = 0;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(4, 54);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 19);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Minimum:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(78, 54);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(98, 19);
			this->textBox2->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(0, 34);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 19);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Maximum:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(3, 10);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 19);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Set Values:";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Gainsboro;
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->radioButton6);
			this->panel8->Controls->Add(this->radioButton5);
			this->panel8->Controls->Add(this->radioButton4);
			this->panel8->Controls->Add(this->radioButton3);
			this->panel8->Location = System::Drawing::Point(6, 50);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(220, 81);
			this->panel8->TabIndex = 12;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(3, 10);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(112, 19);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Select Condition:";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(126, 55);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(91, 23);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Dew Point";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &UserForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(126, 32);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(81, 23);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Humidity";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &UserForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(7, 55);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(79, 23);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Pressure";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &UserForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(7, 32);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(103, 23);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Temperature";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &UserForm::radioButton3_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(7, 38);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(63, 23);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Away";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &UserForm::checkBox1_CheckedChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(3, 10);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(90, 19);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Select Mode:";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::GhostWhite;
			this->panel9->Controls->Add(this->checkBox2);
			this->panel9->Controls->Add(this->checkBox1);
			this->panel9->Controls->Add(this->label16);
			this->panel9->Location = System::Drawing::Point(232, 50);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(217, 81);
			this->panel9->TabIndex = 11;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::SteelBlue;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Gainsboro;
			this->label17->Location = System::Drawing::Point(7, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(122, 32);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Set Alert";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::SteelBlue;
			this->panel10->Controls->Add(this->pictureBox6);
			this->panel10->Controls->Add(this->label17);
			this->panel10->Controls->Add(this->panel7);
			this->panel10->Controls->Add(this->panel8);
			this->panel10->Controls->Add(this->panel9);
			this->panel10->Location = System::Drawing::Point(192, 250);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(711, 152);
			this->panel10->TabIndex = 14;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(132, -6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(91, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &UserForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &UserForm::timer1_Tick);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label11->Location = System::Drawing::Point(9, 130);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 26);
			this->label11->TabIndex = 1;
			this->label11->Text = L"1042";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Khaki;
			this->label10->Location = System::Drawing::Point(3, 7);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 25);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Pressure";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(8, 35);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(135, 88);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(732, 81);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(174, 163);
			this->panel6->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label9->Location = System::Drawing::Point(9, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 26);
			this->label9->TabIndex = 1;
			this->label9->Text = L"64";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Khaki;
			this->label8->Location = System::Drawing::Point(3, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Humidity";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(8, 35);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(135, 88);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Location = System::Drawing::Point(552, 80);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(174, 163);
			this->panel5->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label7->Location = System::Drawing::Point(9, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 26);
			this->label7->TabIndex = 1;
			this->label7->Text = L"33";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Khaki;
			this->label6->Location = System::Drawing::Point(3, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Temperature";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(8, 35);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(135, 88);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Location = System::Drawing::Point(372, 81);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(174, 163);
			this->panel4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label5->Location = System::Drawing::Point(9, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 26);
			this->label5->TabIndex = 1;
			this->label5->Text = L"21";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Khaki;
			this->label4->Location = System::Drawing::Point(3, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Dew Point";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(8, 35);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(135, 88);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(192, 81);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(174, 163);
			this->panel3->TabIndex = 9;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(662, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(33, 13);
			this->label18->TabIndex = 15;
			this->label18->Text = L"Date:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(823, 9);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(33, 13);
			this->label19->TabIndex = 15;
			this->label19->Text = L"Time:";
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &UserForm::timer2_Tick);
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ClientSize = System::Drawing::Size(912, 415);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void SplitString(string s, vector<string>& v) {

			string temp = "";
			for (int i = 0; i <= 42; ++i) {

				if (s[i] == ' ' || s[i]== ')') {
					v.push_back(temp);
					temp = "";
				}
				else {
					temp.push_back(s[i]);
				}

			}
			v.push_back(temp);

		}


		

		//string formRequest() {		// function for forming request
		//	static int number = 2300;
		//	string original = "https://www.ecobliss.co.za/get_row.php?row=";
		//	//number = inc(number);
		//	string portion = to_string(number);
		//	string request = original + portion;
		//	number++;
		//	return request;
		//}

		string GetHttp() {		//sfunction for sending request
			//string request = formRequest();
			static int id = 10193;
			string result;
			string original = "https://www.ecobliss.co.za/get_row.php?row=";
			string temp = to_string(id);
			string right = original + temp;
			const char* request = right.c_str();
			CURL* curl;
			CURLcode res;
			//char const* request = temp.c_str();
			//char u[] = { "https://www.ecobliss.co.za/get_row.php?row=" };
			//strcat_s(u, 48, request);
			curl_global_init(CURL_GLOBAL_DEFAULT);
			curl = curl_easy_init();

			if (curl) {
				curl_easy_setopt(curl, CURLOPT_URL, request);
				curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_writ);
				curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);
				//curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
				res = curl_easy_perform(curl);
				curl_easy_cleanup(curl);
				if (CURLE_OK != res) {
					std::cerr << "CURL error: " << res << '\n';
				}
			}
			curl_global_cleanup();
			//std::cout << result << "\n\n";
			id++;
			return result;
		}


		//The following functions extract data of interest
		void ExtractDate(vector<string>& v) {
			string date = v[2];
			//cout << date << endl;
		}

		void ExtractTime(vector<string>& v) {
			string time_t = v[3];
			//cout << time_t << endl;
		}

		double ExtractTemp(vector<string>& v) {
			string temp = v[4];
			double temperature = stod(temp);
			String^ press = gcnew String(v[4].data());
			label7->Text = press;
			//label7->Text = System::Convert::ToString(temperature);
			return temperature;
		}
		double ExtractHumidity(vector<string>& v) {
			string humid = v[5];
			double humidity = stod(humid);
			label9->Text = System::Convert::ToString(humidity);
			 //= press;
			//cout << humidity << endl;
			return humidity;
		}

		void ExtractPressure(vector<string>& v) {
			String ^press = gcnew String(v[6].data());
			label11->Text = press;
			//double pressure = stod(press);
			//cout << pressure << endl;
		}

	
		double calculateDewPoint(double temp, double humidity) {
			double var = (temp * 17.625) / (243.04 + temp);
			double var2 = log(humidity / 100);
			double step2 = var + var2;
			double dewpoint = ((step2 * 243.04) / (17.25 - step2));

			double g = (int)(dewpoint * 100 + 0.5);
			double num=(double)g/ 100;

			String^ press = System::Convert::ToString(num);
			label5->Text = press;
			//cout << dewpoint << endl;
			return num;
		}
		//end of functions
		//void Analytics(string temp, string humid, string press, double dewpoint) {

		//}
		void mainFunction() {
			vector<string> myData;
			//while (true) {
				string response = GetHttp();
				SplitString(response, myData);
				ExtractDate(myData);
				ExtractTime(myData);
				double temperature = ExtractTemp(myData);
				double humidity = ExtractHumidity(myData);
				ExtractPressure(myData);
				double dew = calculateDewPoint(temperature, humidity);
				//Analytics(myData[4].data(), myData[5].data(), myData[6].data(), dew);
				Sleep(5000);
				myData.clear();
				//cout << "*******************" << endl;
			//}
		}

	private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {

		//timer1->Start();
		mainFunction();

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	object->Show();
}
 
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	//Away mode for temperature
	double max = System::Convert::ToDouble(textBox1->Text);
	double minimum = System::Convert::ToDouble(textBox2->Text);
	int temp = System::Convert::ToDouble(label7->Text);
	if (radioButton3->Checked && checkBox1->Checked==true && temp<max && temp<minimum) {
		MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", "219078106@stu.ukzn.ac.za", "Low Temperature Alert", "Temperature is too low.");
		SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
		client->EnableSsl = true;
		client->Send(mail);
	}
	if (radioButton3->Checked && checkBox1->Checked == true && temp > max && temp > minimum) {
		MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", "219078106@stu.ukzn.ac.za", "High Temperature Alert", "Temperature is too high.");
		SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
		client->EnableSsl = true;
		client->Send(mail);
	}
	if (radioButton3->Checked && checkBox2->Checked == true && temp < max && temp < minimum) {
		for (int i = 0; i <= 5; i++) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Student//source//repos//WMSG9//mixkit-alarm-clock-beep-988.wav");
			player->Load();
			player->PlaySync();
			Sleep(500);

		}
	}
	if (radioButton3->Checked && checkBox2->Checked == true && temp > max && temp > minimum) {
		for (int i = 0; i <= 5; i++) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Student//source//repos//WMSG9//mixkit-emergency-alert-alarm-1007.wav");
			player->Load();
			player->PlaySync();
			Sleep(500);
		}
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	//close mode
	if (checkBox2->Checked == true) {
		textBox1->ReadOnly = true;
		textBox2->ReadOnly = true;
	}
	else {
		textBox1->ReadOnly = false;
		textBox2->ReadOnly = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;
		radioButton5->Checked = false;
		radioButton6->Checked = false;
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // print button
	printPreviewDialog1->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {//print handling
	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Times New Roman", 18, FontStyle::Regular);
	e->Graphics->DrawString("Welcome To Ecobliss Weather Monitoring System\nThe Current weather conditions are:\n"+"Temperature: "+label7->Text+"\nDew Point: "+label5->Text+"\nRelative Humidity: "+label9->Text+"\nPressure: "+label11->Text, fntString, Brushes::Black, 120, 120);
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	//humidity trigger
	double max = System::Convert::ToDouble(textBox1->Text);
	double minimum = System::Convert::ToDouble(textBox2->Text);
	int temp = System::Convert::ToDouble(label9->Text);
	if (radioButton5->Checked && checkBox1->Checked == true && temp < max && temp < minimum) {
		MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", "219078106@stu.ukzn.ac.za", "Low Humidity Alert", "Humidity is too low.");
		SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
		client->EnableSsl = true;
		client->Send(mail);
	}
	if (radioButton5->Checked && checkBox1->Checked == true && temp > max && temp > minimum) {
		MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", "219078106@stu.ukzn.ac.za", "High Humidity Alert", "Humidity is too high.");
		SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
		client->EnableSsl = true;
		client->Send(mail);
	}
	if (radioButton5->Checked && checkBox2->Checked == true && temp < max && temp < minimum) {
		for (int i = 0; i <= 5; i++) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Student//source//repos//WMSG9//mixkit-alarm-clock-beep-988.wav");
			player->Load();
			player->PlaySync();
			Sleep(500);
		}

	}
	if (radioButton5->Checked && checkBox2->Checked == true && temp > max && temp > minimum) {
		for (int i = 0; i <= 5; i++) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Student//source//repos//WMSG9//mixkit-emergency-alert-alarm-1007.wav");
			player->Load();
			player->PlaySync();
			Sleep(500);
		}
	}
		
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {		//timer handle
	//while (1) {
		//mainFunction();
		//Sleep(5000);
	//}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true) {
		textBox1->ReadOnly = true;
		textBox2->ReadOnly = true;
	}
	else {
		textBox1->ReadOnly = false;
		textBox2->ReadOnly = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;
		radioButton5->Checked = false;
		radioButton6->Checked = false;
	}
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {		//Pressure trigger
	double max = System::Convert::ToDouble(textBox1->Text);
	double minimum = System::Convert::ToDouble(textBox2->Text);
	int temp = System::Convert::ToDouble(label11->Text);
	if (radioButton4->Checked && checkBox1->Checked == true && temp < max && temp < minimum) {
		MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", "219078106@stu.ukzn.ac.za", "Low Pressure Alert", "Pressure level is too low.");
		SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
		client->EnableSsl = true;
		client->Send(mail);
	}
	if (radioButton4->Checked && checkBox1->Checked == true && temp > max && temp > minimum) {
		MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", "219078106@stu.ukzn.ac.za", "High Pressure Alert", "Pressure level is too high.");
		SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
		client->EnableSsl = true;
		client->Send(mail);
	}
	if (radioButton4->Checked && checkBox2->Checked == true && temp < max && temp < minimum) {
		for (int i = 0; i <= 5; i++) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Student//source//repos//WMSG9//mixkit-alarm-clock-beep-988.wav");
			player->Load();
			player->PlaySync();
			Sleep(500);
		}

	}
	if (radioButton4->Checked && checkBox2->Checked == true && temp > max && temp > minimum) {
		for (int i = 0; i <= 5; i++) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Student//source//repos//WMSG9//mixkit-emergency-alert-alarm-1007.wav");
			player->Load();
			player->PlaySync();
			Sleep(500);
		}
	}
}
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	//Dewpoint trigger
	double max = System::Convert::ToDouble(textBox1->Text);
	double minimum = System::Convert::ToDouble(textBox2->Text);
	int temp = System::Convert::ToDouble(label5->Text);
	if (radioButton6->Checked && checkBox1->Checked == true && temp < max && temp < minimum) {
		MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", "219078106@stu.ukzn.ac.za", "Low Dewpoint Alert", "Dewpoint is too low.");
		SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
		client->EnableSsl = true;
		client->Send(mail);
	}
	if (radioButton6->Checked && checkBox1->Checked == true && temp > max && temp > minimum) {
		MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", "219078106@stu.ukzn.ac.za", "High Dewpoint Alert", "Dewpoint level is too high.");
		SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
		client->Port = 587;
		client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
		client->EnableSsl = true;
		client->Send(mail);
	}
	if (radioButton6->Checked && checkBox2->Checked == true && temp < max && temp < minimum) {
		for (int i = 0; i <= 5; i++) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Student//source//repos//WMSG9//mixkit-alarm-clock-beep-988.wav");
			player->Load();
			player->PlaySync();
			Sleep(500);
		}

	}
	if (radioButton6->Checked && checkBox2->Checked == true && temp > max && temp > minimum) {
		for (int i = 0; i <= 5; i++) {
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Student//source//repos//WMSG9//mixkit-emergency-alert-alarm-1007.wav");
			player->Load();
			player->PlaySync();
			Sleep(500);
		}
	}
}
private: System::Void Analysis_Click(System::Object^ sender, System::EventArgs^ e) {
	//timer1->Start();
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime dt = DateTime::Now;
	DateTime da = DateTime::Now;
	label19->Text = dt.Now.ToLongTimeString();
	label18->Text = dt.Now.ToLongDateString();
}
};
}
