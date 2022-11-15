#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int p[200000010], cnt;
int v[200000010];
void get_primes(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if (!v[i]) p[cnt++] = i;
		for (int j = 0; p[j] < n / i; j++)
		{
			v[p[j] * i] = 1;
			if (i % p[j] == 0) break;
		}
	}
}

int isPrime1(int n)
{
	for (int i = 2 ; i < n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int isPrime2(int n)
{
	for (int i = 2 ; i <= n / i; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int n, ans1 = 0, ans2 = 0;
	scanf("%d", &n);
	clock_t start1, end1, start2, end2;
	start1 = clock();
	//	get_primes(2000000);
	for (int i = 2; i <= n; i++)
	{
		if (isPrime1(i))
			ans1++;
	}
	end1 = clock();
	start2 = clock();
	for (int i = 2; i <= n; i++)
	{
		if (isPrime2(i))
			ans2++;
	}
	end2 = clock();
	printf("%.9lf\n", (double)(end1 - start1) / 1e6);
	printf("%.9lf\n", (double)(end2 - start2) / 1e6);
	printf("%d %d", ans1, ans2);
	return 0;
}
