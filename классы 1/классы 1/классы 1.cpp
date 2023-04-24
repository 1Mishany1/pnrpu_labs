#include <iostream>
#include <Header.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Header A ;
	int first, second;
	cout << "Введите цену  ";
	cin >> first;
	cout << "Введите количество товаров: ";
	cin >> second;
	A.Init(first, second);
	
	cout << A.ipart();
	return 0;
}
