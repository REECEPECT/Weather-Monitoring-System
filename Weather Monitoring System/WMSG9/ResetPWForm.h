#pragma once

namespace WMSG9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net::Mail;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ResetPWForm
	/// </summary>
	public ref class ResetPWForm : public System::Windows::Forms::Form
	{
	public:
		ResetPWForm(void)
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
		~ResetPWForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Cornsilk;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label6->Location = System::Drawing::Point(14, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 15);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Please enter new password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Cornsilk;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label3->Location = System::Drawing::Point(14, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 15);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Please enter reset code sent to your email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Cornsilk;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 15);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Please enter your email adress";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(11, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 21);
			this->label5->TabIndex = 22;
			this->label5->Text = L"New Password:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(146, 232);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 20);
			this->textBox3->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(13, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 21);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Reset Code:\r\n";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(121, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 20);
			this->textBox2->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(13, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 21);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Email:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 20);
			this->textBox1->TabIndex = 18;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Desktop;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button2->Location = System::Drawing::Point(15, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Confirm";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ResetPWForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Desktop;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button1->Location = System::Drawing::Point(16, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ResetPWForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &ResetPWForm::timer1_Tick);
			// 
			// ResetPWForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cornsilk;
			this->ClientSize = System::Drawing::Size(338, 126);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"ResetPWForm";
			this->Text = L"ResetPWForm";
			this->Load += gcnew System::EventHandler(this, &ResetPWForm::ResetPWForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int count;
		System::String^ resetcode = System::Guid::NewGuid().ToString()->Replace("-", "")->ToUpper();
	private: System::Void ResetPWForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//**************************************************************************************
	String^ constring = L"datasource = localhost; port = 3306;username = root; password = Nonkosi14";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDatabase = gcnew MySqlCommand("select * from wms_db.wmsdb where email = '" + this->textBox1->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDatabase->ExecuteReader();
		int count = 0;
		while (myReader->Read()) {
			count++;

		}
		if (count == 1) {
			MailMessage^ mail = gcnew MailMessage("nhlanhlax@hotmail.com", textBox1->Text, "Password Reset", "Your reset code is: " + resetcode);
			SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
			client->Port = 587;
			client->Credentials = gcnew System::Net::NetworkCredential("nhlanhlax@hotmail.com", "nhlanhla14");
			client->EnableSsl = true;
			client->Send(mail);
			if ((MessageBox::Show("Please check your emails for reset code", "Mail sent", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)) {
				//Form::Height += 200;
				timer1->Start();
				//obj->ShowDialog();

			}
			//else
				//MessageBox::Show("Account does not exist.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			MessageBox::Show("Account does not exist.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	//**************************************************************************************
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (count < 10) {
		Form::Height += 20;
		count++;
	}
}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	//confirm

	if (resetcode == textBox2->Text) {
		//////////////////////update password in the database/////////////////////////
		String^ constring = L"datasource = localhost; port = 3306;username = root; password = Nonkosi14";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("Update wms_db.wmsdb set password = '" + this->textBox3->Text + "' where email = '" + this->textBox1->Text + "';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDatabase->ExecuteReader();
			while (myReader->Read()) {


			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		//////////////////////////////////////////////////////////////////////////////
		MessageBox::Show("Password Reset Successful", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Hide();
	}
	else
		MessageBox::Show("Reset code entered incorrect", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

}
};
}
