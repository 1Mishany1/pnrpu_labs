#pragma once


namespace ArmD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Сводка для Drivers
	/// </summary>
	public ref class Drivers : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlConn = gcnew SqlConnection;
		SqlCommand^ sqlCmd = gcnew SqlCommand;
		DataTable^ sqlDt = gcnew DataTable;
		SqlDataAdapter^ sqlDtA = gcnew SqlDataAdapter;
		
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::Button^ btnadd;


	private: System::Windows::Forms::TextBox^ txtDriver;
	private: System::Windows::Forms::TextBox^ txtCar;

	private: System::Windows::Forms::TextBox^ txtNumber;
	private: System::Windows::Forms::TextBox^ txtBusy;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::GroupBox^ groupBox1;





		   SqlDataReader^ sqlRd;
	public:
		Drivers(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			MembershipDB();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Drivers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	protected:

	protected:

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->txtDriver = (gcnew System::Windows::Forms::TextBox());
			this->txtCar = (gcnew System::Windows::Forms::TextBox());
			this->txtNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtBusy = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FloralWhite;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(998, 571);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Закрыть ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Drivers::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PeachPuff;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(144, 224);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(740, 263);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Drivers::dataGridView1_CellClick);
			// 
			// btnRefresh
			// 
			this->btnRefresh->BackColor = System::Drawing::Color::Cornsilk;
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRefresh->Location = System::Drawing::Point(998, 224);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(111, 34);
			this->btnRefresh->TabIndex = 2;
			this->btnRefresh->Text = L"Обновить ";
			this->btnRefresh->UseVisualStyleBackColor = false;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &Drivers::btnRefresh_Click);
			// 
			// btnadd
			// 
			this->btnadd->BackColor = System::Drawing::Color::Cornsilk;
			this->btnadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnadd->Location = System::Drawing::Point(998, 279);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(111, 34);
			this->btnadd->TabIndex = 3;
			this->btnadd->Text = L"Добавить ";
			this->btnadd->UseVisualStyleBackColor = false;
			this->btnadd->Click += gcnew System::EventHandler(this, &Drivers::btnadd_Click);
			// 
			// txtDriver
			// 
			this->txtDriver->Location = System::Drawing::Point(185, 20);
			this->txtDriver->Name = L"txtDriver";
			this->txtDriver->Size = System::Drawing::Size(100, 20);
			this->txtDriver->TabIndex = 4;
			// 
			// txtCar
			// 
			this->txtCar->Location = System::Drawing::Point(185, 61);
			this->txtCar->Name = L"txtCar";
			this->txtCar->Size = System::Drawing::Size(100, 20);
			this->txtCar->TabIndex = 4;
			// 
			// txtNumber
			// 
			this->txtNumber->Location = System::Drawing::Point(185, 101);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(100, 20);
			this->txtNumber->TabIndex = 4;
			// 
			// txtBusy
			// 
			this->txtBusy->Location = System::Drawing::Point(185, 137);
			this->txtBusy->Name = L"txtBusy";
			this->txtBusy->Size = System::Drawing::Size(100, 20);
			this->txtBusy->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(27, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ФИО водителя";
			this->label1->Click += gcnew System::EventHandler(this, &Drivers::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(82, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Машина";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(91, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Номер";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(91, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Статус";
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Cornsilk;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->Location = System::Drawing::Point(998, 334);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(111, 34);
			this->btnReset->TabIndex = 7;
			this->btnReset->Text = L"Сбросить";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &Drivers::btnReset_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Beige;
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtNumber);
			this->groupBox1->Controls->Add(this->txtBusy);
			this->groupBox1->Controls->Add(this->txtCar);
			this->groupBox1->Controls->Add(this->txtDriver);
			this->groupBox1->Location = System::Drawing::Point(144, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(388, 184);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// Drivers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(1160, 635);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"Drivers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Drivers";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MembershipDB() {
		sqlConn->ConnectionString = "Data Source=localhost\\MYSQLSERVER;Initial Catalog=ioi;Integrated Security=True";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "Select * from Cars";
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
			SqlDataAdapter^ sqlDtA = gcnew SqlDataAdapter("Select * from Cars", sqlConn);
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
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		txtDriver->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		txtNumber->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		txtCar->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		txtBusy->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		/*dataGridView1->SelectedRows[0]->ToString();
		dataGridView1->SelectedRows[0]->ToString();
		dataGridView1->SelectedRows[0]->ToString();
		dataGridView1->SelectedRows[0]->ToString(); */
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnadd_Click(System::Object^ sender, System::EventArgs^ e) { 
	sqlConn->ConnectionString = "Data Source=localhost\\MYSQLSERVER;Initial Catalog=ioi;Integrated Security=True";
	sqlConn->Open();
	sqlCmd->Connection = sqlConn;
	try {
		
		sqlCmd->CommandText = "INSERT INTO Cars(driver,number,car,busy)"
			" VALUES('" + txtDriver->Text + "','" + txtNumber->Text + "','" + txtCar->Text + "','" + txtBusy->Text + "')";
		sqlCmd->ExecuteNonQuery();
		sqlConn->Close();
		//MembershipDB();
		RefreshDB();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}

}

private: System::Void btnReset_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	try {
		txtDriver->Text = "";
		txtNumber->Text = "";
		txtCar->Text = "";
		txtBusy->Text = "";
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}


