#pragma once
#include "UserForm.h"
namespace WMSG9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for AnalyticsForm
	/// </summary>
	public ref class AnalyticsForm : public System::Windows::Forms::Form
	{
	public:

		AnalyticsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//AnalyticsForm(string temp, string humid, string press, double dew)
		//{
		//	InitializeComponent();
		//	//TODO: Add the constructor code here
		//	//
		//}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AnalyticsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;




	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;




	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gainsboro;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(12, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(220, 136);
			this->panel3->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Average:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(78, 103);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(25, 19);
			this->label14->TabIndex = 0;
			this->label14->Text = L"18";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(78, 45);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 19);
			this->label13->TabIndex = 0;
			this->label13->Text = L"21";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 19);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Minimum:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Temperature";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkKhaki;
			this->button1->Location = System::Drawing::Point(12, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 34);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(12, 163);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(220, 136);
			this->panel1->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 19);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Pressure";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::GhostWhite;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Location = System::Drawing::Point(264, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(220, 136);
			this->panel2->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 19);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Humidity";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label25);
			this->panel4->Controls->Add(this->label26);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Location = System::Drawing::Point(264, 163);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(220, 136);
			this->panel4->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 19);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Dew Point";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(501, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(414, 287);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(7, 74);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(72, 19);
			this->label21->TabIndex = 0;
			this->label21->Text = L"Maximum:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(78, 74);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(25, 19);
			this->label22->TabIndex = 0;
			this->label22->Text = L"21";
			this->label22->Click += gcnew System::EventHandler(this, &AnalyticsForm::label22_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(8, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 19);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Average:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(79, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 19);
			this->label8->TabIndex = 2;
			this->label8->Text = L"18";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(79, 74);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 19);
			this->label15->TabIndex = 3;
			this->label15->Text = L"21";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(79, 45);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 19);
			this->label16->TabIndex = 4;
			this->label16->Text = L"21";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(8, 74);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(72, 19);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Maximum:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(8, 45);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(68, 19);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Minimum:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 101);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 19);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Average:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(83, 101);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 19);
			this->label11->TabIndex = 2;
			this->label11->Text = L"18";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(83, 72);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(25, 19);
			this->label17->TabIndex = 3;
			this->label17->Text = L"21";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(83, 43);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(25, 19);
			this->label18->TabIndex = 4;
			this->label18->Text = L"21";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(12, 72);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(72, 19);
			this->label25->TabIndex = 5;
			this->label25->Text = L"Maximum:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(12, 43);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(68, 19);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Minimum:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Average:";
			this->label1->Click += gcnew System::EventHandler(this, &AnalyticsForm::label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(82, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 19);
			this->label5->TabIndex = 2;
			this->label5->Text = L"18";
			this->label5->Click += gcnew System::EventHandler(this, &AnalyticsForm::label5_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(82, 72);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(25, 19);
			this->label19->TabIndex = 3;
			this->label19->Text = L"21";
			this->label19->Click += gcnew System::EventHandler(this, &AnalyticsForm::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(82, 43);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(25, 19);
			this->label20->TabIndex = 4;
			this->label20->Text = L"21";
			this->label20->Click += gcnew System::EventHandler(this, &AnalyticsForm::label20_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(11, 72);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(72, 19);
			this->label27->TabIndex = 5;
			this->label27->Text = L"Maximum:";
			this->label27->Click += gcnew System::EventHandler(this, &AnalyticsForm::label27_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(11, 43);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(68, 19);
			this->label28->TabIndex = 6;
			this->label28->Text = L"Minimum:";
			this->label28->Click += gcnew System::EventHandler(this, &AnalyticsForm::label28_Click);
			// 
			// AnalyticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(926, 370);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button1);
			this->Name = L"AnalyticsForm";
			this->Text = L"AnalyticsForm";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Analytics();
	private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
