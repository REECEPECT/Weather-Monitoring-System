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
static size_t my_write(void* buffer, size_t size, size_t nmemb, void* param)
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
	using namespace MySql::Data::MySqlClient;
	using namespace std;

	/// <summary>
	/// Summary for AdminHeader
	/// </summary>
	public ref class AdminHeader : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlComd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox4;
		   MySqlDataReader^ sqlRd;
	private: System::Windows::Forms::Timer^ timer1;


	private: System::Windows::Forms::Timer^ timer2;


	public:
		Form^ obj;
		AdminHeader(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			timer2->Start();//need to fix
			Users();
		}
		AdminHeader(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();

			//Users();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminHeader()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Analysis;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminHeader::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Analysis = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(186, 607);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(-3, 534);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 61);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Logout";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminHeader::button3_Click);
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
			this->button2->Location = System::Drawing::Point(3, 208);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 61);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Print";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = true;
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
			this->label1->Location = System::Drawing::Point(12, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Administrator";
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label2->Location = System::Drawing::Point(204, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dashboard";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(204, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(517, 26);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Welcome to Ecobliss Weather Monitoring System";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(203, 88);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(173, 163);
			this->panel3->TabIndex = 2;
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Location = System::Drawing::Point(3, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Dew Point";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label5->Location = System::Drawing::Point(9, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 32);
			this->label5->TabIndex = 1;
			this->label5->Text = L"21";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Location = System::Drawing::Point(383, 88);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(173, 163);
			this->panel4->TabIndex = 2;
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label6->Location = System::Drawing::Point(3, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Temperature";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label7->Location = System::Drawing::Point(9, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 32);
			this->label7->TabIndex = 1;
			this->label7->Text = L"33";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Location = System::Drawing::Point(563, 87);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(173, 163);
			this->panel5->TabIndex = 2;
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label8->Location = System::Drawing::Point(3, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Humidity";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label9->Location = System::Drawing::Point(9, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 32);
			this->label9->TabIndex = 1;
			this->label9->Text = L"64";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(743, 88);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(173, 163);
			this->panel6->TabIndex = 2;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label10->Location = System::Drawing::Point(3, 7);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 25);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Pressure";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label11->Location = System::Drawing::Point(9, 130);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 32);
			this->label11->TabIndex = 1;
			this->label11->Text = L"1042";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::RoyalBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(3, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 40);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Add New";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminHeader::button5_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->button8);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Location = System::Drawing::Point(7, 208);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(722, 47);
			this->panel7->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(456, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 39);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminHeader::textBox1_KeyPress);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::RoyalBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(637, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 40);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Search";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AdminHeader::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::RoyalBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(343, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 40);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Load Table";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AdminHeader::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::RoyalBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(230, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 40);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Update";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AdminHeader::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::RoyalBlue;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(117, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 40);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Delete";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &AdminHeader::button9_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel9->Controls->Add(this->label12);
			this->panel9->Controls->Add(this->label15);
			this->panel9->Controls->Add(this->label13);
			this->panel9->Controls->Add(this->textBox3);
			this->panel9->Controls->Add(this->textBox4);
			this->panel9->Controls->Add(this->textBox2);
			this->panel9->Location = System::Drawing::Point(10, 262);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(705, 73);
			this->panel9->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(7, 42);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(91, 19);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Email Adress:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(386, 8);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 19);
			this->label15->TabIndex = 3;
			this->label15->Text = L"User ID:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(7, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 19);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Username:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(101, 39);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(233, 28);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(453, 5);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(175, 28);
			this->textBox4->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(101, 5);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(233, 28);
			this->textBox2->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(5, 18);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 26);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Users";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::LightBlue;
			this->panel8->Controls->Add(this->pictureBox6);
			this->panel8->Controls->Add(this->panel11);
			this->panel8->Controls->Add(this->label14);
			this->panel8->Controls->Add(this->panel7);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Location = System::Drawing::Point(203, 257);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(727, 338);
			this->panel8->TabIndex = 9;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminHeader::panel8_Paint);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(80, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 41);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Lavender;
			this->panel11->Controls->Add(this->dataGridView1);
			this->panel11->Location = System::Drawing::Point(7, 47);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(711, 155);
			this->panel11->TabIndex = 9;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(705, 149);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminHeader::dataGridView1_CellClick);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &AdminHeader::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &AdminHeader::timer2_Tick);
			// 
			// AdminHeader
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(939, 607);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminHeader";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminHeader";
			this->Load += gcnew System::EventHandler(this, &AdminHeader::AdminHeader_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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




		string formRequest() {		// function for forming request
			static int number = 2300;
			string original = "https://www.ecobliss.co.za/get_row.php?row=";
			//number = inc(number);
			string portion = to_string(number);
			string request = original + portion;
			number++;
			return request;
		}

		string GetHttp() {		//sfunction for sending request
			//string request = formRequest();
			static int id = 2300;
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
				curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_write);
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
			String^ press = gcnew String(v[6].data());
			label11->Text = press;
			//double pressure = stod(press);
			//cout << pressure << endl;
		}


		void calculateDewPoint(double temp, double humidity) {
			double var = (temp * 17.625) / (243.04 + temp);
			double var2 = log(humidity / 100);
			double step2 = var + var2;
			double dewpoint = ((step2 * 243.04) / (17.25 - step2));

			double g = (int)(dewpoint * 100 + 0.5);
			double num = (double)g / 100;

			String^ press = System::Convert::ToString(num);
			label5->Text = press;
			//cout << dewpoint << endl;

		}
		//end of functions

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
			calculateDewPoint(temperature, humidity);
			Sleep(5000);
			myData.clear();
			//cout << "*******************" << endl;
		//}
		}
	private: System::Void Users() {
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Nonkosi14; database = wms_db";
		sqlConn->Open();
		sqlComd->Connection = sqlConn;
		sqlComd->CommandText = "select * from wmsdb";
		sqlRd = sqlComd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
		dataGridView1->DataSource = sqlDt;
	}
	private: System::Void refreshDB() {
		try {
			sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Nonkosi14; database = wms_db";
			sqlComd->Connection = sqlConn;

			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("select * from wmsdb", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Nonkosi14; database = wms_db";
		sqlConn->Open();
		sqlComd->Connection = sqlConn;
		try {
			sqlComd->CommandText = "insert into wmsdb (username,email,password)" "values('" + textBox2->Text + "', '" + textBox3->Text + "','" + textBox2->Text + "')";
			sqlComd->ExecuteNonQuery();
			sqlConn->Close();
			Users();
			refreshDB();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			textBox2->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			textBox3->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
			textBox4->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}


	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshDB();
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		try {
			if (e->KeyChar == (char)13) {
				DataView^ dv = sqlDt->DefaultView;
				dv->RowFilter = String::Format("username like '%{0}%'", textBox1->Text);
				dataGridView1->DataSource = dv->ToTable();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("username like '%{0}%'", textBox1->Text);
			dataGridView1->DataSource = dv->ToTable();

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Nonkosi14; database = wms_db";
			sqlComd->Connection = sqlConn;
			String^ username = textBox2->Text;
			String^ email = textBox3->Text;
			String^ userid = textBox4->Text;;
			sqlConn->Open();
			sqlComd->CommandText = "update wmsdb set username = '" + username + "', email = '" + email + "' WHERE userid = " + userid + "", sqlConn;
			sqlComd->ExecuteNonQuery();
			sqlConn->Close();
			Users();
			refreshDB();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {//delete
		try {

			sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Nonkosi14; database = wms_db";
			sqlComd->Connection = sqlConn;
			String^ id = textBox4->Text;
			MySqlCommand^ sqlComd = gcnew MySqlCommand("delete from wmsdb where userid = " + id + "", sqlConn);
			sqlConn->Open();
			sqlRd = sqlComd->ExecuteReader();
			MessageBox::Show("User Deleted Successfully!", "Users Management", MessageBoxButtons::OK, MessageBoxIcon::Information);
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		refreshDB();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//logout

		obj->Show();
		this->Hide();
	}
	private: System::Void AdminHeader_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		//mainFunction();
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		mainFunction();
	
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime dt = DateTime::Now;
	DateTime da = DateTime::Now;
	//label19->Text = dt.Now.ToLongTimeString();
	//label18->Text = dt.Now.ToLongDateString();
}
};
}
