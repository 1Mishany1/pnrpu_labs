#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace System::Data::SqlClient;
ref class Fun
{
	//Data Source=localhost;Initial Catalog=myrestaurant;Integrated Security=True
public:
	Fun();
	SqlConnection^ conn;
	SqlConnection^ connString;
	void ConDB() {
		connString = gcnew SqlConnection();
		connString->DataSource= "localhost";
		connString->InitialCatalog="myrestaurant";
		connString->IntegratedSecurity=true;



	}
};

