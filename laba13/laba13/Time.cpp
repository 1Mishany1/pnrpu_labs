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
		cout << "������� ������ �������: ";
		cin >> n;
		deque<Time> i(n);
		Time m;
		//����� ������������ ������� � �������� ��� � ����� �������.
		generate(i.begin(), i.end(), []() {Time p; cin >> p; return p; });
		cout << "�������: " << endl << i << endl;
		auto a = max_element(i.begin(), i.end());
		cout << "������������ �������: " << *a << endl;
		i.push_back(*a);
		cout << "������� ����� ���������� ������������� �������� � �����: " << endl << i << endl;
		//������� ������� � �������� ������
		Time tmp;
		cout << "������� �������: " << endl;
		cin >> tmp;
		deque<Time>::iterator s = remove_if(i.begin(), i.end(), [&tmp](Time& p) {return (tmp == p); });
		i.erase(s, i.end());
		cout << "������� ����� ��������: " << endl << i << endl;
		//���������� �������� ���������������
		Time sum;
		for_each(i.begin(), i.end(), [&sum](Time& y) {sum = sum + y; });
		sum.setmin(sum.getmin() / i.size());
		sum.setsec(sum.getsec() / i.size());
		for_each(i.begin(), i.end(), [&sum](Time& y) {y = sum + y; });
		cout << "������� ����� ���������� �������� ��������������� � ������� ��������: " << endl << i << endl;
	}
	catch (error a) {
		a.what();
	}
	return 0;
}

