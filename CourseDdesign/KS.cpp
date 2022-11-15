#include <iostream>
using namespace std;
long long ans;
string mp[20]{"0100110000101001", "0000110000010101", "1010000011100011",
              "0000011100001000", "1010000000010001", "1000001111111000",
              "0000111110000010"};
int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int m, n;
void print() {
    for (int i = 0; i < m; i++) {
        cout << mp[i];
        cout << endl;
    }
    cout << endl;
}

void dfs(int x, int y) {
    if (x < 0 || x >= m || y < 0 || y >= n || mp[x][y] == '1' ||
        mp[x][y] == '#') {
        return;
    }
    char temp = mp[x][y];
    mp[x][y] = '#';
    if (x == m - 1 && y == n - 1) {
        print();
        mp[x][y] = temp;
        ans++;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        dfs(tx, ty);
    }
    mp[x][y] = temp;
}

int main() {
    m = 7, n = 16;
    dfs(0, 0);
    cout << endl;
    cout << ans << endl;
    system("pause");
    return 0;
}
