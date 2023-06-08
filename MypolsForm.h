#pragma once
#include "Tovars.h"

namespace ArmD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для MypolsForm
	/// </summary>
	public ref class MypolsForm : public System::Windows::Forms::Form
	{
	public:
		MypolsForm(void)
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
		~MypolsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ Clos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Label^ label13;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnZakaz;
	private: System::Windows::Forms::TextBox^ tbVid;
	private: System::Windows::Forms::TextBox^ tbDlina;
	private: System::Windows::Forms::TextBox^ tbShirina;
	private: System::Windows::Forms::TextBox^ tbVysota;
	private: System::Windows::Forms::TextBox^ tbVes;
	private: System::Windows::Forms::TextBox^ tbDomOtpr;





	private: System::Windows::Forms::TextBox^ tbUlitsaOtpr;

	private: System::Windows::Forms::TextBox^ tbNomOtpr;
	private: System::Windows::Forms::TextBox^ tbNomPoluch;
	private: System::Windows::Forms::TextBox^ tbImyaPoluch;
	private: System::Windows::Forms::TextBox^ tbUlitsaPoluch;
	private: System::Windows::Forms::TextBox^ tbDomPoluch;
	private: System::Windows::Forms::GroupBox^ groupBox1;





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
			this->Clos = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnZakaz = (gcnew System::Windows::Forms::Button());
			this->tbVid = (gcnew System::Windows::Forms::TextBox());
			this->tbDlina = (gcnew System::Windows::Forms::TextBox());
			this->tbShirina = (gcnew System::Windows::Forms::TextBox());
			this->tbVysota = (gcnew System::Windows::Forms::TextBox());
			this->tbVes = (gcnew System::Windows::Forms::TextBox());
			this->tbDomOtpr = (gcnew System::Windows::Forms::TextBox());
			this->tbUlitsaOtpr = (gcnew System::Windows::Forms::TextBox());
			this->tbNomOtpr = (gcnew System::Windows::Forms::TextBox());
			this->tbNomPoluch = (gcnew System::Windows::Forms::TextBox());
			this->tbImyaPoluch = (gcnew System::Windows::Forms::TextBox());
			this->tbUlitsaPoluch = (gcnew System::Windows::Forms::TextBox());
			this->tbDomPoluch = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Clos
			// 
			this->Clos->BackColor = System::Drawing::Color::FloralWhite;
			this->Clos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clos->Location = System::Drawing::Point(1002, 604);
			this->Clos->Name = L"Clos";
			this->Clos->Size = System::Drawing::Size(111, 34);
			this->Clos->TabIndex = 2;
			this->Clos->Text = L"Закрыть";
			this->Clos->UseVisualStyleBackColor = false;
			this->Clos->Click += gcnew System::EventHandler(this, &MypolsForm::Clos_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(394, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 40);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Здравствуйте!\r\nЗаполните таблицу";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MypolsForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(149, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Вид товара";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(151, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Длина, мм";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(145, 263);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ширина, мм";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(146, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Высота, мм";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(170, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 16);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Вес, гр";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(430, 255);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 16);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Дом";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(419, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 16);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Номер";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(645, 165);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 16);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Номер";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(657, 212);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 16);
			this->label10->TabIndex = 4;
			this->label10->Text = L"ФИО";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(621, 257);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(656, 305);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 16);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Дом";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(421, 213);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 16);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Улица";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(647, 259);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 16);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Улица";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(248, 110);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 20);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Товар";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(458, 110);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(112, 20);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Отправитель";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(704, 110);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(102, 20);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Получатель";
			// 
			// btnZakaz
			// 
			this->btnZakaz->BackColor = System::Drawing::Color::Cornsilk;
			this->btnZakaz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnZakaz->Location = System::Drawing::Point(55, 505);
			this->btnZakaz->Name = L"btnZakaz";
			this->btnZakaz->Size = System::Drawing::Size(111, 34);
			this->btnZakaz->TabIndex = 10;
			this->btnZakaz->Text = L"Заказать!";
			this->btnZakaz->UseVisualStyleBackColor = false;
			this->btnZakaz->Click += gcnew System::EventHandler(this, &MypolsForm::btnZakaz_Click);
			// 
			// tbVid
			// 
			this->tbVid->Location = System::Drawing::Point(252, 161);
			this->tbVid->Name = L"tbVid";
			this->tbVid->Size = System::Drawing::Size(100, 20);
			this->tbVid->TabIndex = 11;
			// 
			// tbDlina
			// 
			this->tbDlina->Location = System::Drawing::Point(252, 216);
			this->tbDlina->Name = L"tbDlina";
			this->tbDlina->Size = System::Drawing::Size(100, 20);
			this->tbDlina->TabIndex = 12;
			// 
			// tbShirina
			// 
			this->tbShirina->Location = System::Drawing::Point(252, 260);
			this->tbShirina->Name = L"tbShirina";
			this->tbShirina->Size = System::Drawing::Size(100, 20);
			this->tbShirina->TabIndex = 12;
			this->tbShirina->TextChanged += gcnew System::EventHandler(this, &MypolsForm::textBox2_TextChanged);
			// 
			// tbVysota
			// 
			this->tbVysota->Location = System::Drawing::Point(252, 305);
			this->tbVysota->Name = L"tbVysota";
			this->tbVysota->Size = System::Drawing::Size(100, 20);
			this->tbVysota->TabIndex = 12;
			// 
			// tbVes
			// 
			this->tbVes->Location = System::Drawing::Point(252, 354);
			this->tbVes->Name = L"tbVes";
			this->tbVes->Size = System::Drawing::Size(100, 20);
			this->tbVes->TabIndex = 12;
			this->tbVes->TextChanged += gcnew System::EventHandler(this, &MypolsForm::textBox2_TextChanged);
			// 
			// tbDomOtpr
			// 
			this->tbDomOtpr->Location = System::Drawing::Point(479, 252);
			this->tbDomOtpr->Name = L"tbDomOtpr";
			this->tbDomOtpr->Size = System::Drawing::Size(100, 20);
			this->tbDomOtpr->TabIndex = 12;
			// 
			// tbUlitsaOtpr
			// 
			this->tbUlitsaOtpr->Location = System::Drawing::Point(479, 210);
			this->tbUlitsaOtpr->Name = L"tbUlitsaOtpr";
			this->tbUlitsaOtpr->Size = System::Drawing::Size(100, 20);
			this->tbUlitsaOtpr->TabIndex = 12;
			// 
			// tbNomOtpr
			// 
			this->tbNomOtpr->Location = System::Drawing::Point(479, 161);
			this->tbNomOtpr->Name = L"tbNomOtpr";
			this->tbNomOtpr->Size = System::Drawing::Size(100, 20);
			this->tbNomOtpr->TabIndex = 12;
			// 
			// tbNomPoluch
			// 
			this->tbNomPoluch->Location = System::Drawing::Point(708, 161);
			this->tbNomPoluch->Name = L"tbNomPoluch";
			this->tbNomPoluch->Size = System::Drawing::Size(100, 20);
			this->tbNomPoluch->TabIndex = 12;
			// 
			// tbImyaPoluch
			// 
			this->tbImyaPoluch->Location = System::Drawing::Point(708, 209);
			this->tbImyaPoluch->Name = L"tbImyaPoluch";
			this->tbImyaPoluch->Size = System::Drawing::Size(100, 20);
			this->tbImyaPoluch->TabIndex = 12;
			// 
			// tbUlitsaPoluch
			// 
			this->tbUlitsaPoluch->Location = System::Drawing::Point(708, 256);
			this->tbUlitsaPoluch->Name = L"tbUlitsaPoluch";
			this->tbUlitsaPoluch->Size = System::Drawing::Size(100, 20);
			this->tbUlitsaPoluch->TabIndex = 12;
			// 
			// tbDomPoluch
			// 
			this->tbDomPoluch->Location = System::Drawing::Point(708, 302);
			this->tbDomPoluch->Name = L"tbDomPoluch";
			this->tbDomPoluch->Size = System::Drawing::Size(100, 20);
			this->tbDomPoluch->TabIndex = 12;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Beige;
			this->groupBox1->Controls->Add(this->tbDomPoluch);
			this->groupBox1->Controls->Add(this->tbUlitsaPoluch);
			this->groupBox1->Controls->Add(this->tbNomPoluch);
			this->groupBox1->Controls->Add(this->tbImyaPoluch);
			this->groupBox1->Controls->Add(this->tbNomOtpr);
			this->groupBox1->Controls->Add(this->tbUlitsaOtpr);
			this->groupBox1->Controls->Add(this->tbDomOtpr);
			this->groupBox1->Controls->Add(this->tbVysota);
			this->groupBox1->Controls->Add(this->tbVes);
			this->groupBox1->Controls->Add(this->tbShirina);
			this->groupBox1->Controls->Add(this->tbDlina);
			this->groupBox1->Controls->Add(this->tbVid);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(55, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(963, 487);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			// 
			// MypolsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(1125, 650);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnZakaz);
			this->Controls->Add(this->Clos);
			this->Name = L"MypolsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MypolsForm";
			this->Load += gcnew System::EventHandler(this, &MypolsForm::MypolsForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Clos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: Tovar^ tovar = nullptr;
	private: System::Void btnZakaz_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ vidtovara = tbVid->Text;
		String^ dlinatovara = tbDlina->Text;
		String^ shirinatovara = tbShirina->Text;
		String^ vysotatovaram = tbVysota->Text;
		String^ ves = tbVes->Text;
		String^ nomerotpravitelya = tbNomOtpr->Text;
		String^ nomerpoluchatelya = tbNomPoluch->Text;
		String^ imyapoluchatelya = tbImyaPoluch->Text;
		String^ ulitsaotprav = tbUlitsaOtpr->Text;
		String^ domotprav = tbDomOtpr->Text;
		String^ ulitsapoluch = tbUlitsaPoluch->Text;
		String^ dompoluch = tbDomPoluch->Text;

		if (vidtovara->Length == 0 || dlinatovara->Length == 0
			|| shirinatovara->Length == 0 || vysotatovaram->Length == 0
			|| ves->Length == 0 || nomerotpravitelya->Length == 0
			|| nomerpoluchatelya->Length == 0 || imyapoluchatelya->Length == 0
			|| ulitsaotprav->Length == 0 || domotprav->Length == 0
			|| ulitsapoluch->Length == 0 || dompoluch->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}
		
		String^ connString = "Data Source=localhost\\MYSQLSERVER;Initial Catalog=ioi;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO Tovars " +
			"(vidtovara, dlinatovara, shirinatovara, vysotatovaram, ves, nomerotpravitelya, nomerpoluchatelya, imyapoluchatelya, ulitsaotprav, domotprav, ulitsapoluch, dompoluch ) VALUES " +
			"(@vidtovara, @dlinatovara, @shirinatovara, @vysotatovaram, @ves, @nomerotpravitelya, @nomerpoluchatelya, @imyapoluchatelya, @ulitsaotprav, @domotprav, @ulitsapoluch, @dompoluch);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@vidtovara", vidtovara);
		command.Parameters->AddWithValue("@dlinatovara", dlinatovara);
		command.Parameters->AddWithValue("@shirinatovara", shirinatovara);
		command.Parameters->AddWithValue("@vysotatovaram", vysotatovaram);
		command.Parameters->AddWithValue("@ves", ves);
		command.Parameters->AddWithValue("@nomerotpravitelya", nomerotpravitelya);
		command.Parameters->AddWithValue("@nomerpoluchatelya", nomerpoluchatelya);
		command.Parameters->AddWithValue("@imyapoluchatelya", imyapoluchatelya);
		command.Parameters->AddWithValue("@ulitsaotprav", ulitsaotprav);
		command.Parameters->AddWithValue("@domotprav", domotprav);
		command.Parameters->AddWithValue("@ulitsapoluch", ulitsapoluch);
		command.Parameters->AddWithValue("@dompoluch", dompoluch);
		command.ExecuteNonQuery();
		try {
			tovar = gcnew Tovar;
			tovar->vidtovara = vidtovara;
			tovar->dlinatovara = dlinatovara;
			tovar->shirinatovara = shirinatovara;
			tovar->vysotatovaram = vysotatovaram;
			tovar->ves = ves;
			tovar->nomerotpravitelya = nomerotpravitelya;
			tovar->nomerpoluchatelya = nomerpoluchatelya;
			tovar->imyapoluchatelya = imyapoluchatelya;
			tovar->ulitsaotprav = ulitsaotprav;
			tovar->domotprav = domotprav;
			tovar->ulitsapoluch = ulitsapoluch;
			tovar->dompoluch = dompoluch;

			this->Close();
			MessageBox::Show("Ваш заказ принят, ожидайте!",
				"Информация о заказе", MessageBoxButtons::OK);
		}
	
		catch (Exception^ ex) {

			MessageBox::Show("Failed to zakaza new user", 
				"Zakaza Failure", MessageBoxButtons::OK);
		}
	}
private: System::Void MypolsForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
