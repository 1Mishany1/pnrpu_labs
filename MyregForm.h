#pragma once
#include "Drivers.h"





namespace ArmD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для MyregForm
	/// </summary>
	public ref class MyregForm : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlConn = gcnew SqlConnection;
		SqlCommand^ sqlCmd = gcnew SqlCommand;
		DataTable^ sqlDt = gcnew DataTable;
		SqlDataAdapter^ sqlDtA = gcnew SqlDataAdapter;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbVid;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbDlina;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbShir;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbVisot;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tbMass;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::Button^ btnCar;
	private: System::Windows::Forms::GroupBox^ groupBox1;




		   SqlDataReader^ sqlRd;
	public:
		MyregForm(void)
		{
			InitializeComponent();
			MembershipDB();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyregForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClose;
	protected:
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbOtpUl;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbOtp;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbOtpDom;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbNomer;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbUlis;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbDom;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbFIO;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbOtpUl = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbOtp = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbOtpDom = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbNomer = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbUlis = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbDom = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbFIO = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbVid = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbDlina = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbShir = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbVisot = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbMass = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->btnCar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FloralWhite;
			this->btnClose->Location = System::Drawing::Point(1162, 558);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(111, 34);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyregForm::btnClose_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->BackColor = System::Drawing::Color::Cornsilk;
			this->btnRefresh->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnRefresh->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightGray;
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRefresh->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRefresh->Location = System::Drawing::Point(82, 270);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(111, 34);
			this->btnRefresh->TabIndex = 0;
			this->btnRefresh->Text = L"Обновить";
			this->btnRefresh->UseVisualStyleBackColor = false;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MyregForm::btnRefresh_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Cornsilk;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->Location = System::Drawing::Point(225, 270);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(111, 34);
			this->btnReset->TabIndex = 0;
			this->btnReset->Text = L"Сбросить";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyregForm::btnReset_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(741, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Улица отправителя";
			// 
			// tbOtpUl
			// 
			this->tbOtpUl->Location = System::Drawing::Point(864, 28);
			this->tbOtpUl->Name = L"tbOtpUl";
			this->tbOtpUl->Size = System::Drawing::Size(100, 20);
			this->tbOtpUl->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(503, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Номер отправителя";
			// 
			// tbOtp
			// 
			this->tbOtp->Location = System::Drawing::Point(617, 28);
			this->tbOtp->Name = L"tbOtp";
			this->tbOtp->Size = System::Drawing::Size(100, 20);
			this->tbOtp->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(750, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Дом отправителя";
			// 
			// tbOtpDom
			// 
			this->tbOtpDom->Location = System::Drawing::Point(864, 72);
			this->tbOtpDom->Name = L"tbOtpDom";
			this->tbOtpDom->Size = System::Drawing::Size(100, 20);
			this->tbOtpDom->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(510, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Номер получателя";
			// 
			// tbNomer
			// 
			this->tbNomer->Location = System::Drawing::Point(617, 66);
			this->tbNomer->Name = L"tbNomer";
			this->tbNomer->Size = System::Drawing::Size(100, 20);
			this->tbNomer->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1020, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Улица получателя";
			// 
			// tbUlis
			// 
			this->tbUlis->Location = System::Drawing::Point(1125, 31);
			this->tbUlis->Name = L"tbUlis";
			this->tbUlis->Size = System::Drawing::Size(100, 20);
			this->tbUlis->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1020, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Дом получателя";
			// 
			// tbDom
			// 
			this->tbDom->Location = System::Drawing::Point(1123, 73);
			this->tbDom->Name = L"tbDom";
			this->tbDom->Size = System::Drawing::Size(100, 20);
			this->tbDom->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(510, 109);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"ФИО получателя";
			// 
			// tbFIO
			// 
			this->tbFIO->Location = System::Drawing::Point(617, 106);
			this->tbFIO->Name = L"tbFIO";
			this->tbFIO->Size = System::Drawing::Size(100, 20);
			this->tbFIO->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PeachPuff;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(85, 337);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1130, 187);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyregForm::dataGridView1_CellClick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 68);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Вид товара";
			// 
			// tbVid
			// 
			this->tbVid->Location = System::Drawing::Point(111, 65);
			this->tbVid->Name = L"tbVid";
			this->tbVid->Size = System::Drawing::Size(100, 20);
			this->tbVid->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(52, 105);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Длина";
			// 
			// tbDlina
			// 
			this->tbDlina->Location = System::Drawing::Point(111, 102);
			this->tbDlina->Name = L"tbDlina";
			this->tbDlina->Size = System::Drawing::Size(100, 20);
			this->tbDlina->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(304, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Ширина";
			// 
			// tbShir
			// 
			this->tbShir->Location = System::Drawing::Point(371, 28);
			this->tbShir->Name = L"tbShir";
			this->tbShir->Size = System::Drawing::Size(100, 20);
			this->tbShir->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(305, 72);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Высота";
			// 
			// tbVisot
			// 
			this->tbVisot->Location = System::Drawing::Point(371, 69);
			this->tbVisot->Name = L"tbVisot";
			this->tbVisot->Size = System::Drawing::Size(100, 20);
			this->tbVisot->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(310, 109);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Масса";
			// 
			// tbMass
			// 
			this->tbMass->Location = System::Drawing::Point(371, 102);
			this->tbMass->Name = L"tbMass";
			this->tbMass->Size = System::Drawing::Size(100, 20);
			this->tbMass->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(74, 31);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"ID";
			// 
			// tbID
			// 
			this->tbID->Location = System::Drawing::Point(110, 28);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(100, 20);
			this->tbID->TabIndex = 2;
			// 
			// btnCar
			// 
			this->btnCar->BackColor = System::Drawing::Color::Cornsilk;
			this->btnCar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCar->Location = System::Drawing::Point(1162, 270);
			this->btnCar->Name = L"btnCar";
			this->btnCar->Size = System::Drawing::Size(111, 34);
			this->btnCar->TabIndex = 4;
			this->btnCar->Text = L"База машин ";
			this->btnCar->UseVisualStyleBackColor = false;
			this->btnCar->Click += gcnew System::EventHandler(this, &MyregForm::btnCar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Beige;
			this->groupBox1->Controls->Add(this->tbID);
			this->groupBox1->Controls->Add(this->tbOtp);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tbFIO);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->tbMass);
			this->groupBox1->Controls->Add(this->tbDom);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->tbVisot);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->tbUlis);
			this->groupBox1->Controls->Add(this->tbShir);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->tbNomer);
			this->groupBox1->Controls->Add(this->tbDlina);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->tbOtpDom);
			this->groupBox1->Controls->Add(this->tbVid);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->tbOtpUl);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(27, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1246, 158);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// MyregForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(1313, 604);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnCar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnClose);
			this->Name = L"MyregForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyregForm";
			this->Load += gcnew System::EventHandler(this, &MyregForm::MyregForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void MyregForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult iExit;
		try {
			iExit = MessageBox::Show("Вы точно хотите выйти?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iExit == System::Windows::Forms::DialogResult::Yes) {
				Application::Exit();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Data Entry Form ", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

	}
	
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult iExit;
		try {
			tbOtp->Text = "";
			tbDom->Text = "";
			tbFIO->Text = "";
			tbNomer->Text = "";
			tbOtpDom->Text = "";
			tbOtpUl->Text = "";
			tbUlis->Text = "";
			tbDlina->Text = "";
			tbID->Text = "";
			tbMass->Text = "";
			tbShir->Text = "";
			tbVid->Text = "";
			tbVisot->Text = "";




		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {

		tbID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		tbVid->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		tbDlina->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		tbShir->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		tbVisot->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		tbMass->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		tbOtp->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		tbNomer->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		tbFIO->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		tbOtpUl->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		tbOtpDom->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
		tbUlis->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
		tbDom->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
	private: System::Void MembershipDB() {
		sqlConn->ConnectionString = "Data Source=localhost\\MYSQLSERVER;Initial Catalog=ioi;Integrated Security=True";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "Select * from Tovars";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();
		dataGridView1->DataSource = sqlDt;
	}
	private: System::Void RefreshDB() {
		try {
			sqlConn->ConnectionString = "Data Source=localhost\\MYSQLSERVER;Initial Catalog=ioi;Integrated Security=True";
			sqlCmd->Connection = sqlConn;

			SqlDataAdapter^ sqlDtA = gcnew SqlDataAdapter("select * from Tovars", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Data Entry Form ", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDB();
}


private: System::Void btnCar_Click(System::Object^ sender, System::EventArgs^ e) {
	Drivers^ form3 = gcnew Drivers();
	form3->Show();
}


};
}
