
#include "Header.h"
#include <iostream>
#include <string>
    using namespace std;
    //функция для возврата объекта как результата
    Marshrut make_tovar()
    {
        setlocale(LC_ALL, "rus");
        string s;
        string i;
        float d;
        cout << "Начальный город: ";
        cin >> s;
        cout << "Назначение: ";

        cin >> i;
        cout << "Время: ";
        cin >> d;
        Marshrut t(s, i, d);
        return t;
    }
    //функция для передачи объекта как параметра
    void print_tovar(Marshrut t)
    {
        t.show();
    }
    void main()
    {
        setlocale(LC_ALL, "rus");
        //конструктор без параметров
        Marshrut t1;
        t1.show();
        //коструктор с параметрами
        Marshrut t2("Начало", "конец", 2);
        t2.show();
        //конструктор копирования
        Marshrut t3 = t2;
        t3.show();
        //конструктор копирован
        t3.set_otpravlenie("Ростов");
        t3.set_naznachenie("Москва");
        t3.set_vremy(10.0);
        print_tovar(t3);
        //конструктор копирования
        t1 = make_tovar();
        t1.show();
    }
