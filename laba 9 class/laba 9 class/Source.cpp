#include "error.h"
#include "Vector.h"
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    try {
        Vector x(5);
        Vector y;
        cout << x;
        cin >> x;
        cout << "������� ������: ";
        int i, m;
        cin >> i;
        cout << x[i] << endl;
        cout << "������: " << x() << endl;
        cout << "������� �����, �� ������� ����� ��������� ������ ������� ������� x: ";
        cin >> m;
        y = x + m;
        cout << "������ y: " << y;
        x--;
        cout << x;
        --x;
        cout << x;
    }
    /*  catch (error a) {
          a.what();
      }*/
    catch (int) {
        cout << "ERROR!!!" << endl;
    }
    return 0;
}
