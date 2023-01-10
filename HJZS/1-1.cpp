#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int mi = 100, ma = -100;
	double sum = 0;
	for (int i = 0; i < n; i ++) 
	{
		int t;
		cin >> t;
		sum += t;
		if (t > ma) ma = t;
		if (t < mi) mi = t;
	}
	sum -= (ma + mi);
	printf("%.2lf", sum / n - 2);
	return 0;
}
