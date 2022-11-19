#include<iostream>
using namespace std;
int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check(int d)
{
	int year = d / 10000;
	d /= 10000;
	int mon = d / 100;
	d /= 100;
	if (mon == 0 || mon >= 13 || d == 0) return false;
	if (d > day[mon] && mon != 2) return false;
	if (mon == 2) 
	{
		int leap = year % 100 && year % 4 == 0 || year % 400 == 0;
		if (d > day[mon] + leap) return false;
	}
	return true;
}

int main()
{
	bool b = check(20111102);
	cout << b;
	system("pause");
	return 0;
}
