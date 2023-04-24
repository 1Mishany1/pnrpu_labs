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
//конструктор с параметрами
Marshrut::Marshrut(string N, string K, float S)
{
	otpravlenie = N;
	naznachenie = K;
	vremy = S;
	cout << "Constructor s parametrami dlia objecta" <<endl;
}
//конструктор копирования
Marshrut::Marshrut(const Marshrut& t)
{
	otpravlenie = t.otpravlenie;
	naznachenie = t.naznachenie;
	vremy = t.vremy;

	cout << "Constructor copirovania dlia objecta" <<endl;
}
//деструктор
Marshrut::~Marshrut()
{
	cout << "Destructor dlia objecta" << endl;
}
//селекторы
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
//модификаторы
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
//метод для просмотра атрибутов
void Marshrut::show()
{
	setlocale(LC_ALL, "rus");
	cout << "Отправление:" << otpravlenie << endl;
	cout << "Назначение :" << naznachenie << endl;
	cout << "Время :" << vremy << endl;
}
