#include "Header.h"
#include <iostream>
#include <string>
using namespace std;
Marshrut::Marshrut()
{
	otpravlenie = "";
	naznachenie = "";
	vremy = 0;
	cout << "Constructor bez parametrov dlia objecta" << endl;
}
//����������� � �����������
Marshrut::Marshrut(string N, string K, float S)
{
	otpravlenie = N;
	naznachenie = K;
	vremy = S;
	cout << "Constructor s parametrami dlia objecta" <<endl;
}
//����������� �����������
Marshrut::Marshrut(const Marshrut& t)
{
	otpravlenie = t.otpravlenie;
	naznachenie = t.naznachenie;
	vremy = t.vremy;

	cout << "Constructor copirovania dlia objecta" <<endl;
}
//����������
Marshrut::~Marshrut()
{
	cout << "Destructor dlia objecta" << endl;
}
//���������
string Marshrut::get_otpravlenie()
{
	return  otpravlenie;
}
string Marshrut::get_naznachenie()
{
	return naznachenie;
}
float Marshrut::get_vremy()
{
	return vremy;
}
//������������
void  Marshrut::set_otpravlenie(string N)
{
	otpravlenie = N;
}
void Marshrut::set_naznachenie(string K)
{
	naznachenie = K;
}
void Marshrut::set_vremy(float S)
{
	vremy = S;
}
//����� ��� ��������� ���������
void Marshrut::show()
{
	setlocale(LC_ALL, "rus");
	cout << "�����������:" << otpravlenie << endl;
	cout << "���������� :" << naznachenie << endl;
	cout << "����� :" << vremy << endl;
}
