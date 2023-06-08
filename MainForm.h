#pragma once
#include "User.h"
#include "MypolsForm.h"
#include "MyregForm.h"


namespace ArmD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора 
			//
			lbUserInfo->Text = "FIO: " + user->name +
				", email: " + user->email;
		}
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Polsovat;
	private: System::Windows::Forms::Button^ disp;




	private: System::Windows::Forms::GroupBox^ groupBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Polsovat = (gcnew System::Windows::Forms::Button());
			this->disp = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbUserInfo->Location = System::Drawing::Point(8, 69);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(977, 40);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			this->lbUserInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 28);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(978, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Добро пожаловать";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->UseMnemonic = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(161, 12);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Кто вы\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->UseMnemonic = false;
			// 
			// Polsovat
			// 
			this->Polsovat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Polsovat->BackColor = System::Drawing::Color::Cornsilk;
			this->Polsovat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Polsovat->Location = System::Drawing::Point(54, 110);
			this->Polsovat->Margin = System::Windows::Forms::Padding(2);
			this->Polsovat->MaximumSize = System::Drawing::Size(150, 44);
			this->Polsovat->MinimumSize = System::Drawing::Size(142, 44);
			this->Polsovat->Name = L"Polsovat";
			this->Polsovat->Size = System::Drawing::Size(150, 44);
			this->Polsovat->TabIndex = 4;
			this->Polsovat->Text = L"Пользователь";
			this->Polsovat->UseVisualStyleBackColor = false;
			this->Polsovat->Click += gcnew System::EventHandler(this, &MainForm::Polsovat_Click);
			// 
			// disp
			// 
			this->disp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->disp->BackColor = System::Drawing::Color::Cornsilk;
			this->disp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->disp->Location = System::Drawing::Point(277, 110);
			this->disp->Margin = System::Windows::Forms::Padding(2);
			this->disp->MaximumSize = System::Drawing::Size(142, 44);
			this->disp->MinimumSize = System::Drawing::Size(142, 44);
			this->disp->Name = L"disp";
			this->disp->Size = System::Drawing::Size(142, 44);
			this->disp->TabIndex = 5;
			this->disp->Text = L"Диспетчер";
			this->disp->UseVisualStyleBackColor = false;
			this->disp->Click += gcnew System::EventHandler(this, &MainForm::disp_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Beige;
			this->groupBox1->Controls->Add(this->disp);
			this->groupBox1->Controls->Add(this->Polsovat);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(258, 122);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(490, 193);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(962, 552);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbUserInfo);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	System::Windows::Forms::DialogResult Result;

	private: System::Void Polsovat_Click(System::Object^ sender, System::EventArgs^ e) {
		MypolsForm^ form3 = gcnew MypolsForm();
		form3->Show();
		MainForm::Hide();
	}

	private: System::Void disp_Click(System::Object^ sender, System::EventArgs^ e) {
		Result = MessageBox::Show("Вы точно диспетчер?", " ",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (Result == System::Windows::Forms::DialogResult::Yes)
		{
			MyregForm^ form3 = gcnew MyregForm();
			form3->Show();
			MainForm::Hide();
		}
		else if (Result == System::Windows::Forms::DialogResult::No)
		{
		}
	}
};

}