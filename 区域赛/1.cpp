#include <iostream>

using namespace std;

string s;
int main() {
    cin >> s;
    int n = 0;
    while (s[n] == '@')
        n++;
    string p = "";
    for (int i = n; i < s.size(); i++) {
        p += s[i];
    }
    for (int i = 0; i < n; i++) {
        p += "@";
    }
    cout << p;
    return 0;
}
