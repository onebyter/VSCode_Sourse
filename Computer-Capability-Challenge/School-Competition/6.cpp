#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1010;
string usr[N], pass[N];
string reusr[N], repass[N];
int n;
int x;
int main(int argc, char const *argv[]) {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> usr[i] >> pass[i];
    }
    for (int i = 0; i < n; i++) {
        string t = pass[i];
        for (int j = 0; j < pass[i].size(); j++) {
            if (pass[i][j] == '1')
                pass[i][j] = '@';
            else if (pass[i][j] == '0')
                pass[i][j] = '%';
            else if (pass[i][j] == 'l')
                pass[i][j] = 'L';
            else if (pass[i][j] == 'O')
                pass[i][j] = 'o';
        }
        if (t != pass[i]) {
            reusr[x] = usr[i];
            repass[x++] = pass[i];
        }
    }
    if (x) {
        cout << x << "\n";
        for (int i = 0; i < x; i++) {
            cout << reusr[i] << " " << repass[i] << "\n";
        }
    } else {
        if (n > 1)
            printf("There are %d accounts and no account is modified", n);
        else
            printf("There is %d account and no account is modified", n);
    }
    return 0;
}
