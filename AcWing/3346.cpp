// AcWing3346. 你知道你的ABC吗
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int *arr = new int[8];
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 7);
    int a, b, c;
    a = arr[0];
    b = arr[1];
    c = arr[6] - a - b;
    cout << a << " " << b << " " << c << endl;
    system("pause");
    return 0;
}
