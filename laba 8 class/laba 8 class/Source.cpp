#include "Book.h"
#include "Print.h"
#include "Vector.h"
#include "Event.h"
#include "Dialog.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	system("chcp 1251");
	system("cls");
	/*Print* a = new Print;
	a->input();
	Book* b = new Book;
	b->input();
	vector A(10);
	object* p = a;
	cout << "Добавление издания  в вектор: " << endl;
	A.add(p);
	A.show();
	cout << "Добавление книги в вектор: " << endl;
	p = b;
	A.add(p);
	A.show();
	A.add();
	A.show();
	cout << "Размер вектора: " << A();
	A.del();*/
	Dialog D;
	cout << "Команды:\nm создать группу\n+ добавить элемент\n- удалить элемент\ns вывести информацию об элементах\nq конец работы\nz Информация по элементу с номером k" << endl;
	D.Execute();
	return 0;
}
