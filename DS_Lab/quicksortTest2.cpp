#include "algorithm"
#include "iostream"
using namespace std;

int q[100];
int n = 100;
void quicksort(int q[], int l, int r) {
    if (l >= r)
        return;
    int i = l - 1, j = r + 1, p = q[(l + r) / 2];
    while (i < j) {
        do
            i++;
        while (q[i] < p);
        do
            j--;
        while (q[j] > p);
        if (i < j)
            swap(q[i], q[j]);
    }
    quicksort(q, l, j);
    quicksort(q, j + 1, r);
}

int main(int argc, const char **argv) {
    for (int i = 0; i < 100; i++) {
        q[i] = rand() % 1000;
    }
    quicksort(q, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << q[i] << " ";
        if (i % 10 == 9)
            cout << endl;
    }
    system("pause");
    return 0;
}