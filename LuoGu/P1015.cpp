#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
const int N = 130;
string s;
vector<int> a, b;
int step, n;

bool pd() {
    int size = a.size();
    for (int i = 0; i < size / 2; i++) {
        if (a[i] != a[size - 1 - i])
            return false;
    }
    return true;
}

void add() {
    b = a;
    reverse(b.begin(), b.end());
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size(); i++) {
        t += a[i] + b[i];
        c.push_back(t % n);
        t /= n;
    }
    if (t)
        c.push_back(t);
    a = c;
}

int main() {

    cin >> n >> s;
    for (auto c : s) {
        if (c >= '0' && c <= '9')
            a.push_back(c - '0');
        else
            a.push_back(c - 'A' + 10);
    }
    reverse(a.begin(), a.end());
    while (step <= 30) {
        if (pd()) {
            cout << "STEP=" << step;
            return 0;
        }
        add();
        step++;
    }
    cout << "Impossible!";
    return 0;
}
