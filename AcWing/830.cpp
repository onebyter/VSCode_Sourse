#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 100010;
int s[N], top;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        while (top && s[top - 1] >= x)
            top--;
        if (top)
            cout << s[top - 1] << " ";
        else
            cout << "-1 ";
        s[top++] = x;
    }
    system("pause");
    return 0;
}