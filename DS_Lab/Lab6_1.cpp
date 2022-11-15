#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;
int ans;
int bsearch(int *arr, int n, int x) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        ans++;
        mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    srand(time(NULL));
    int arr[80] = {0};
    for (int i = 1; i < 80; i++) {
        arr[i] = arr[i - 1] + rand() % 5 + 1;
    }
    for (int i = 0; i < 80; i++) {
        cout << arr[i] << " ";
        if (i % 10 == 9) {
            cout << endl;
        }
    }
    int x;
    cout << "Enter the number to be searched: ";
    cin >> x;
    int index = bsearch(arr, 80, x);
    if (index == -1) {
        cout << "查找失败,比较次数为: " << ans << "\n";
    } else {
        cout << "查找成功,下标为: " << index << ", 比较次数为: " << ans << endl;
    }
    system("pause");
    return 0;
}
