#include <iostream>
#include "Time.h"
#include "vector.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    vector<int> a(5, 0);
    cout << a << endl;
    cin >> a;
    cout << "��������� a: " << a << endl;
    cout << "������ ���������� �: " << a() << endl;
    vector<int>b(10, 1);
    b = a;
    cout << "��������� b: " << b << endl;
    vector<int> c(10, 2);
    c = b * 4;
    cout << "��������� �(b*4): " << c << endl;
    cout << "��������� � + 4: " << c + 4 << endl;
    Time t;
    cin >> t;
    cout << "���������� t: " << t << endl;
    int tmp;
    cout << "������� ���������� ������ ��� ��������: ";
    cin >> tmp;
    cout << "t+tmp: " << t + tmp << endl;
    Time s;
    cin >> s;
    cout << "���������� s: " << s << endl;
    s = s + t;
    cout << "�������� ���� �����������: " << s << endl;
    vector <Time> p(5, t);
    cin >> p;
    cout << "��������� � �� ��������� �����������: " << p << endl;
    vector <Time> o(10, t);
    cout << "��������� o, ��� ������ ������ = ���������� t: " << o << endl;
    o = p;
    cout << "o=p: " << o << endl;
    cout << "p[2]: " << p[2] << endl;
    cout << "������: " << p() << endl;
    o = p + t;
    cout << "o+t: " << o;

    return 0;
}
