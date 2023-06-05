#include "iostream"
#include "map"
#include <Windows.h>
using namespace std;
typedef map<int, int> Tmap;
typedef Tmap::iterator it;

Tmap make_multimap(int size) {
    Tmap m;
    int d;
    for (int i = 0; i < size; i++) {
        cout << "äàéòå íàì ýëåìåíò" << endl;
        cin >> d;
        m.insert(make_pair((int)i, d));
    }
    return m;
}

void print_map(Tmap m) {
    for (pair <int, int> i : m) {
        cout << i.first << " : " << i.second << endl;
    }
}

double Max(Tmap m) {
    auto i = m.begin();
    double max = (*i).second;
    while (i != m.end()) {
        if (max < (*i).second) max = (*i).second;
        i++;
    }
    return max;
};
pair<int, int> Min_and_n(Tmap m) {
    auto i = m.begin();
    int n = 0, counter = 0;
    double min = (*i).second;
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
    cout << "Êîëè÷åñòâî ýëåìåíòîâ" << endl;
    cin >> n;
    Tmap m = make_multimap(n);
    print_map(m);

    int max = Max(m);
    cout << "Ìàêñèìóì ñîñòàâëÿåò " << max << endl;
    m.insert(make_pair((int)m.size(), max));
    print_map(m);

    int pos = Min_and_n(m).second;
    int min = Min_and_n(m).first;
    cout << "Ìèíèìóì íàõîäèòñÿ íà ïîçèöèè " << pos << " è ýòî ðàâíî " << min << endl;
    m.erase(m.begin());
    for (auto i = m.begin(); i != m.end(); ++i) {
        int d = i->second;
        if (d == min) m.erase(i);
    }
    print_map(m);

    int avg = average(m);
    cout << "Ñðåäíåå çíà÷åíèå ðàâíî" << avg;
    for (auto i : m) {
        i.second += avg;
    }
    print_map(m);
    return 0;
}