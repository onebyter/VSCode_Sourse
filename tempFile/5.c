#include<stdio.h>
#include<stdlib.h>
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

int main()
{
	int n;
	//	scanf("%d", &n);
	clock_t start1, end1;
	start1 = clock();
	get_primes(200000000);
	end1 = clock();
	printf("%-8lf\n", (double)(end1 - start1)/1000);
	
	printf("%d ", cnt);
	return 0;
}
