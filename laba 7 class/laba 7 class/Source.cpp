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
    cout << "Контейнер a: " << a << endl;
    cout << "Размер контейнера а: " << a() << endl;
    vector<int>b(10, 1);
    b = a;
    cout << "Контейнер b: " << b << endl;
    vector<int> c(10, 2);
    c = b * 4;
    cout << "Контейнер с(b*4): " << c << endl;
    cout << "Контейнер с + 4: " << c + 4 << endl;
    Time t;
    cin >> t;
    cout << "Промежуток t: " << t << endl;
    int tmp;
    cout << "Введите количество секунд для сложения: ";
    cin >> tmp;
    cout << "t+tmp: " << t + tmp << endl;
    Time s;
    cin >> s;
    cout << "Промежуток s: " << s << endl;
    s = s + t;
    cout << "Сложение двух промежутков: " << s << endl;
    vector <Time> p(5, t);
    cin >> p;
    cout << "Контейнер р из временных промежутков: " << p << endl;
    vector <Time> o(10, t);
    cout << "Контейнер o, где каждая ячейка = промежутку t: " << o << endl;
    o = p;
    cout << "o=p: " << o << endl;
    cout << "p[2]: " << p[2] << endl;
    cout << "Размер: " << p() << endl;
    o = p + t;
    cout << "o+t: " << o;

    return 0;
}
