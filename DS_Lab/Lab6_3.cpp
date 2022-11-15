#include <iostream>
using namespace std;
long long num[4];
void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if (i % 10 == 9) {
            cout << endl;
        }
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertsort(int arr[], int n) {
    int i, j, temp, *a = new int[n];
    for (i = 0; i < n; i++) {
        a[i] = arr[i];
    }
    for (i = 1; i < n; i++) {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--) {
            a[j + 1] = a[j];
            num[0]++;
        }
        a[j + 1] = temp;
    }
}

void shellsort(int arr[], int n) {
    int dk = n / 2, *a = new int[n];
    cout << "ok\n";
    for (int i = 0; i < n; i++) {
        a[i] = arr[i];
    }
    while (dk >= 1) {
        int i, j;
        for (i = dk; i < n; i++) {
            int temp = a[i];
            for (j = i - dk; j >= 0 && a[j] > temp; j -= dk) {
                a[j + dk] = a[j];
                // num[1]++;
            }
            a[j + dk] = temp;
        }
        dk /= 2;
    }
    cout << "end\n";
}

int partition(int a[], int l, int r) {
    int i = l, j = r, pivot = a[l];
    while (i < j) {
        while (i < j && a[j] >= pivot) {
            j--;
            // num[2]++;
        }
        while (i < j && a[i] <= pivot) {
            i++;
            // num[2]++;
        }
        if (i < j) {
            swap(a[i++], a[j--]);
        }
    }
    if (a[i] > pivot) {
        swap(a[i - 1], a[l]);
        // num[2]++;
        return i - 1;
    } else {
        swap(a[i], a[l]);
        // num[2]++;
        return i;
    }
}

void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = partition(arr, left, right);
        quicksort(arr, left, pivot - 1);
        quicksort(arr, pivot + 1, right);
    }
}

void merge(int a[], int left, int mid, int right) {
    int *arr = new int[right - left + 1];
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (a[i] < a[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = a[j++];
        }
        // num[3]++;
    }
    while (i <= mid) {
        arr[k++] = a[i++];
        // num[3]++;
    }
    while (j <= right) {
        arr[k++] = a[j++];
        // num[3]++;
    }
    for (i = left; i <= right; i++) {
        a[i] = arr[i - left];
    }
}

void mergesort(int a[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergesort(a, left, mid);
        mergesort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int main() {
    srand(time(NULL));
    int n = 10000000;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 500000000;
    }
    //    cout << "排序前：" << endl;
    // print(arr, n);
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = arr[i];
    }
    //计时
    // clock_t start, end;
    // start = clock();
    // insertsort(arr, n);
    // end = clock();
    // cout << "插入排序：" << end - start << endl;
    clock_t start1, end1;
    start1 = clock();
    shellsort(arr, n);
    end1 = clock();
    cout << "希尔排序：" << end1 - start1 << endl;
    clock_t start2, end2;
    start2 = clock();
    mergesort(a, 0, n - 1);
    end2 = clock();
    cout << "归并排序：" << end2 - start2 << endl;
    clock_t start3, end3;
    start3 = clock();
    quicksort(arr, 0, n - 1);
    end3 = clock();
    cout << "快速排序：" << end3 - start3 << endl;
    // cout << "排序后：" << endl;
    // print(arr, n);
    // cout << "插入排序： " << num[0] << endl;
    // cout << "希尔排序： " << num[1] << endl;
    // cout << "快速排序： " << num[2] << endl;
    // cout << "归并排序： " << num[3] << endl;
    //    print(arr, n);
    system("pause");
    return 0;
}
