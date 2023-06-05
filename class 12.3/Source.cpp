#include "iostream"
#include "map"
#include "Container.h"
#include "customTime.h"
#include <Windows.h>
using namespace std;

typedef map<int, int> Tmap;
typedef Tmap::iterator it;

Tmap make_map(int size) {
    Tmap m;
    double d;
    for (int i = 0; i < size; i++) {
        cout << "????? ??? ???????" << endl;
        cin >> d;
        m.insert(make_pair((double)i, d));
    }
    return m;
}
void print_map(Tmap m) {
    for (pair<int, int> i : m) {
        cout << i.first << " : " << i.second << endl;
    }
}
int Max(Tmap m) {
    auto i = m.begin();
    int max = (*i).second;
    while (i != m.end()) {
        if (max < (*i).second) max = (*i).second;
        i++;
    }
    return max;
};
pair<int, int> Min_and_n(Tmap m) {
    auto i = m.begin();
    int n = 0, counter = 0;
    int min = (*i).second;
    while (i != m.end()) {
        if (min > (*i).second) {
            min = (*i).second;
            n = counter;
        }
        i++;
        counter++;
    }
    return make_pair(min, n);
}
int average(Tmap m) {
    int avg = 0;
    int n = 0;
    for (auto i : m) {
        n++;
        avg += i.second;
    }
    avg /= n;
    return avg;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "?????????? ?????????" << endl;
    cin >> n;
    Container<custom_time> v(n);
    v.Print();

    auto* max = new custom_time;
    *max = v.Max();
    cout << "???????? ?????????? " << *max << endl;

    v.Add(0, max);
    v.Print();

    cout << "??????? ???????" << endl;
    v.Delete();
    v.Print();

    cout << "????? ?? ??????? ?????????" << endl;
    v.Add_value();
    v.Print();
    return 0;
}