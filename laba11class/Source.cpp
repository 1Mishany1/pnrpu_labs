#include "iostream"
#include "vector"
#include "cstdlib"

using namespace std;

typedef vector<int>Vec;

Vec make_vector(int n) {
    Vec v;
    for (int i = 0; i < n; i++) {
        int d = rand() % 100;
        v.push_back(d);
    }
    return v;
}

void print_vector(const Vec& v) {
    for (int i : v) cout << i << " ";
    cout << endl;
}

int max_elem(Vec v) {
    int max = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (max < v[i]) max = v[i];
    }
    return max;
}

void add_vector(Vec& v, int el, int pos) {
    v.insert(v.begin() + pos, el);
}

int min_elem_number(Vec v) {
    int min = v[0];
    int n = 0;
    for (int i = 1; i < v.size(); i++) {
        if (min > v[i]) {
            min = v[i];
            n = i;
        }
    }
    return n;
}

void delete_vector(Vec& v, int pos) {
    v.erase(v.begin() + pos);
}

int average(Vec v) {
    int d = v[0];
    for (int i = 1; i < v.size(); i++) {
        d += v[i];
    }
    d = d / (int)v.size();
    return d;
}

void add_number(Vec& v, int num) {
    for (int i : v) {
        i += num;
    }
}



int main() {
    try {
        vector<int> v;
        vector<int>::iterator vi = v.begin();
        int n;
        cout << "How much elements we have?" << endl;
        cin >> n;
        v = make_vector(n);
        print_vector(v);
        int d = max_elem(v);
        int pos;
        cout << "Where should I place maximum?" << endl;
        cin >> pos;
        if (pos > v.size()) throw 1;
        cout << "After adding element" << endl;
        add_vector(v, d, pos);
        print_vector(v);
        cout << "After deleting min element" << endl;
        int min_pos = min_elem_number(v);
        delete_vector(v, min_pos);
        print_vector(v);
        d = average(v);
        add_number(v, d);
        cout << "After adding average" << endl;
        print_vector(v);
    }
    catch (int) {
        cout << "error" << endl;
    }
    return 0;
}