#include<stdio.h>


void bubblesort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}
int main() {
	int a[10];
	printf("依次输入十个数，空格隔开\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	bubblesort(a, 10);
	printf("排序后的结果为：");
	for(int i=0;i<10;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
