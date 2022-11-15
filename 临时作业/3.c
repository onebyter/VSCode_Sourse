#include<stdio.h>

int main() {
	int n;
	printf("请输入一个数\n");
	scanf("%d", &n);
	long long s = 1;
	for (int i = 1; i <= n; i++) {
		s *= i;
	}
	printf("结果为：%lld\n", s);
	return 0;
}
