#pragma once
#include "User.h"


namespace ArmD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// —водка дл€ LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llRegister;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::GroupBox^ groupBox1;




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(6, 14);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(952, 52);
			this->label3->TabIndex = 7;
			this->label3->Text = L"јвторизаци€";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Beige;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(64, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ёл.почта: ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(80, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ѕароль:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(165, 84);
			this->tbEmail->MaximumSize = System::Drawing::Size(252, 24);
			this->tbEmail->MinimumSize = System::Drawing::Size(252, 24);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(252, 24);
			this->tbEmail->TabIndex = 2;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::Cornsilk;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOK->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnOK->Location = System::Drawing::Point(110, 244);
			this->btnOK->MaximumSize = System::Drawing::Size(139, 31);
			this->btnOK->MinimumSize = System::Drawing::Size(139, 31);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(139, 31);
			this->btnOK->TabIndex = 4;
			this->btnOK->Text = L"¬ход";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click_1);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::Cornsilk;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCancel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCancel->Location = System::Drawing::Point(298, 244);
			this->btnCancel->MaximumSize = System::Drawing::Size(139, 31);
			this->btnCancel->MinimumSize = System::Drawing::Size(139, 31);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(139, 31);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"«акрыть";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// llRegister
			// 
			this->llRegister->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->llRegister->AutoSize = true;
			this->llRegister->BackColor = System::Drawing::Color::Beige;
			this->llRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->llRegister->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->llRegister->LinkColor = System::Drawing::Color::Fuchsia;
			this->llRegister->Location = System::Drawing::Point(444, 324);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(106, 20);
			this->llRegister->TabIndex = 6;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"–егистраци€";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPassword->Location = System::Drawing::Point(165, 158);
			this->tbPassword->Margin = System::Windows::Forms::Padding(2);
			this->tbPassword->MaximumSize = System::Drawing::Size(252, 24);
			this->tbPassword->MinimumSize = System::Drawing::Size(252, 24);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(252, 24);
			this->tbPassword->TabIndex = 8;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Beige;
			this->groupBox1->Controls->Add(this->tbPassword);
			this->groupBox1->Controls->Add(this->llRegister);
			this->groupBox1->Controls->Add(this->btnCancel);
			this->groupBox1->Controls->Add(this->btnOK);
			this->groupBox1->Controls->Add(this->tbEmail);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(172, 67);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(664, 404);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" ";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(958, 530);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->MinimumSize = System::Drawing::Size(808, 469);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnOK_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password",
				"Email or Password Empty", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\MYSQLSERVER;Initial Catalog=ioi;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM Users WHERE email=@email AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->password = reader->GetString(3);

				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}

	public: bool switchToRegister = false;

	private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}

};
}
