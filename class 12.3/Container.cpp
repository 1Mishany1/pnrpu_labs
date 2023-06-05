#include "Container.h"
#include "customTime.h"

template<class T>
Container<T>::Container(int n) {
    for (int i = 0; i < n; i++) {
        T* ptr = new T;
        cin >> *ptr;
        map1.insert(make_pair((int)i, ptr));
    }
    size = map1.size();
}
template<class T>
void Container<T>::Print() {
    for (pair<int, T*> i : map1) {
        cout << i.first << " : " << *(i.second) << endl;
    }
}

template<class T>
T Container<T>::average() {
    T t;
    for (auto i : map1) {
        t = t + *(i.second);
    }
    t = t / map1.size();

    return  t;
}

template<class T>
T Container<T>::Max() {
    auto i = map1.begin();
    int n = 0, k = 0;
    T max = *(i->second);
    while (i != map1.end()) {
        if (max < *(i->second)) {
            max = *(i->second);
            n = k;
        }
        i++;
        k++;
    }
    return { max };
}

template<class T>
pair<int, T> Container<T>::Min() {
    auto i = map1.begin();
    int n = 0, counter = 0;
    T min_t = *(*i).second;
    while (i != map1.end()) {
        if (min_t > *(*i).second) {
            min_t = *(*i).second;
            n = counter;
        }
        i++;
        counter++;
    }
    return make_pair(n, min_t);
}

template<class T>
void Container<T>::Delete() {
    int pos = Min().first;
    T min;
    min = Min().second;
    cout << "Ìèíèìóì íàõîäèòñÿ íà ïîçèöèè " << pos << " è ýòî ðàâíî " << min << endl;
    for (auto i = map1.begin(); i != map1.end(); ++i) {
        custom_time t = *(i->second);
        if (t == min) i = map1.erase(i);
    }
}

template<class T>
void Container<T>::Add_value() {
    T avg;
    avg = average();
    cout << "Ñðåäíåå çíà÷åíèå ðàâíî " << avg << endl;
    for (auto i : map1) {
        *(i.second) = *(i.second) + avg;
    }
}

template class Container<custom_time>;