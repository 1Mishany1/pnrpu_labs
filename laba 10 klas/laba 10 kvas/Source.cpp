#include "Time.h"
#include "file_work.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	Time p, p1, p2;
	int k, c;
	char file_name[30];
	do
	{ 
		cout << "\n1. Make file";
		cout << "\n2. Print file";
		cout << "\n3. удалить запись из файла";
		cout << "\n4. Добавить запись в файл ";
		cout << "\n5. Изменить запись в файле";
		cout << "\n0. Выход из меню \n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "file name?"; cin >> file_name;
			k = make_file(file_name);
			if (k < 0)cout << "Can't make file";
			break;
		case 2: cout << "file name?"; cin >> file_name;
			k = print_file(file_name);
			if (k == 0)cout << "Empty file\n";
			if (k < 0)cout << "Can't read file\n";
			break;
		case 3: cout << "file name?"; cin >> file_name;
			int nom; cout << "nom?"; cin >> nom;
			k = del_file(file_name, nom);
			if (k < 0)cout << "Can't read file";
			break;
		case 4: cout << "Введите имя файла:";
			cin >> file_name;
			cout << "Введите количесвто новых элементов: ";
			cin >> nom;
			k = add_file(file_name, nom, p1);
			if (k < 0) cout << "Невозможно!";
			if (k == 0) k = add_end(file_name, p1);
			break;
		case 5: cout << "Введите имя файла: ";
			cin >> file_name;
			cout << "Введите номер файла,который нужно изменить: "; cin >> nom;
			cout << "Новая информация :\n";
			//Time p2;
			cin >> p2;
			k = change_file(file_name, nom, p2);
			if (k < 0) cout << "\nНевозможно прочитать ";
			if (k == 0) cout << "\nНет такой информации!";
			break;
		}
	} while (c != 0);
	return 0;
}