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
	/// Сводка для RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(180, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФИО:";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(250, 88);
			this->tbName->MaximumSize = System::Drawing::Size(252, 25);
			this->tbName->MinimumSize = System::Drawing::Size(252, 25);
			this->tbName->Multiline = true;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(252, 25);
			this->tbName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(140, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Эл. почта:";
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbEmail->Location = System::Drawing::Point(250, 133);
			this->tbEmail->MaximumSize = System::Drawing::Size(252, 25);
			this->tbEmail->MinimumSize = System::Drawing::Size(252, 25);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(252, 25);
			this->tbEmail->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(159, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 24);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Пароль:";
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPassword->Location = System::Drawing::Point(250, 175);
			this->tbPassword->MaximumSize = System::Drawing::Size(252, 25);
			this->tbPassword->MinimumSize = System::Drawing::Size(252, 25);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(252, 25);
			this->tbPassword->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(42, 219);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(207, 24);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Подтвердите пароль:";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbConfirmPassword->Location = System::Drawing::Point(250, 219);
			this->tbConfirmPassword->MaximumSize = System::Drawing::Size(252, 25);
			this->tbConfirmPassword->MinimumSize = System::Drawing::Size(252, 25);
			this->tbConfirmPassword->Multiline = true;
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(252, 25);
			this->tbConfirmPassword->TabIndex = 1;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::Cornsilk;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOK->Location = System::Drawing::Point(195, 289);
			this->btnOK->MaximumSize = System::Drawing::Size(139, 32);
			this->btnOK->MinimumSize = System::Drawing::Size(139, 32);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(139, 32);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"Сохранить";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::Cornsilk;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCancel->Location = System::Drawing::Point(370, 289);
			this->btnCancel->MaximumSize = System::Drawing::Size(139, 32);
			this->btnCancel->MinimumSize = System::Drawing::Size(139, 32);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(139, 32);
			this->btnCancel->TabIndex = 2;
			this->btnCancel->Text = L"Закрыть";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->llLogin->AutoSize = true;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->llLogin->LinkColor = System::Drawing::Color::Fuchsia;
			this->llLogin->Location = System::Drawing::Point(518, 372);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(47, 20);
			this->llLogin->TabIndex = 3;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Вход";
			this->llLogin->VisitedLinkColor = System::Drawing::Color::BlueViolet;
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked_1);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(318, 21);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Регистрация";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Beige;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->llLogin);
			this->groupBox1->Controls->Add(this->btnCancel);
			this->groupBox1->Controls->Add(this->btnOK);
			this->groupBox1->Controls->Add(this->tbConfirmPassword);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->tbPassword);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->tbEmail);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tbName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(140, 32);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(713, 430);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" ";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(962, 552);
			this->Controls->Add(this->groupBox1);
			this->MinimumSize = System::Drawing::Size(967, 558);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	public: User^ user = nullptr;
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fio = tbName->Text;
		String^ email = tbEmail->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;

		if (fio->Length == 0 || email->Length == 0
			|| password->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\MYSQLSERVER;Initial Catalog=ioi;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO Users " +
				"(fio, email, password) VALUES " +
				"(@FIO, @email,@password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@FIO", fio);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", password);
			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = fio;
			user->email = email;
			user->password = password;

			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}


private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
