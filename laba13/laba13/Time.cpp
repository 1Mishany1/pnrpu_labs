#include <iostream>
#include  "Time.h"
#include "Error.h"
#include <algorithm>
#include <deque>
#include <iterator>
#include <functional>
using namespace std;
ostream& operator<<(ostream& out, deque<Time>& t) {
	for_each(t.begin(), t.end(), [](Time& p) {cout << p << ' '; });
	return out;
};
int main()
{
	try {
		setlocale(LC_ALL, "ru");
		int n;
		cout << "Введите размер очереди: ";
		cin >> n;
		deque<Time> i(n);
		Time m;
		//найти максимальный элемент и добавить его в конец очереди.
		generate(i.begin(), i.end(), []() {Time p; cin >> p; return p; });
		cout << "Очередь: " << endl << i << endl;
		auto a = max_element(i.begin(), i.end());
		cout << "Максимальный элемент: " << *a << endl;
		i.push_back(*a);
		cout << "Очередь после добавления максимального элемента в конец: " << endl << i << endl;
		//удалить элемент с заданным ключом
		Time tmp;
		cout << "Введите элемент: " << endl;
		cin >> tmp;
		deque<Time>::iterator s = remove_if(i.begin(), i.end(), [&tmp](Time& p) {return (tmp == p); });
		i.erase(s, i.end());
		cout << "Очередь после удаления: " << endl << i << endl;
		//добавление среднего арифметического
		Time sum;
		for_each(i.begin(), i.end(), [&sum](Time& y) {sum = sum + y; });
		sum.setmin(sum.getmin() / i.size());
		sum.setsec(sum.getsec() / i.size());
		for_each(i.begin(), i.end(), [&sum](Time& y) {y = sum + y; });
		cout << "Очередь после добавления среднего арифметического к каждому элементу: " << endl << i << endl;
	}
	catch (error a) {
		a.what();
	}
	return 0;
}

