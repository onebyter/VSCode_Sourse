#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int a[] = {1, 3, 5, 7, 9};

int main()
{
	ios::sync_with_stdio(false);
	int l = 0, r = 4;
	int x = 0;
	while (l < r)
	{
		int mid = l + r >> 1;
		if (a[mid] >= x)
		{
			r = mid;
		}
		else
		{
			l = mid + 1;
		}
	}
	cout << l << " " << a[l] << endl;
	l = 0, r = 4;
	x = 86;
	while (l < r)
	{
		int mid = l + r + 1 >> 1;
		if (a[mid] <= x)
		{
			l = mid;
		}
		else
		{
			r = mid - 1;
		}
	}
	cout << l << " " << a[l];
	return 0;
}
