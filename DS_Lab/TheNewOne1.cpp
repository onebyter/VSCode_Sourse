#include <iostream>
#include<string.h>
using namespace std;

class Triple {
	public:
		int i, j;
		int e;
};

class TSMatrix {
	public:
		void get() {
			for (int i = 0; i < t; i++) {
				cin >> data[i].i >> data[i].j >> data[i].e;
			}
		}
		/*void show()
		{
			for (int i = 0; i < t; i++)
			{
				cout << data[i].i << '\t' << data[i].j << '\t' << data[i].e << '\t' << endl;
			}
		}*/


		void show() {
			int i, j;
//		int* a = new int[m * n + 1]();
			int a[500];
			memset(a, 0, sizeof(a));
			for (i = 0; i < t; i++) {
				a[(data[i].i - 1) * n + data[i].j] = data[i].e;
			}
			for (i = 1; i < m * n + 1; i++) {
				cout << a[i] << "\t";

				if (i % n == 0) {
					cout << endl;
				}
			}
		}

		Triple* data = new Triple[t];
		int m, n, t;
};

void TS(TSMatrix M, TSMatrix T) {
	int i, j, k;

	int* num = new int[M.t + 1];
	int* cpot = new int[M.n + 1];

	for (i = 1; i < M.n + 1; i++) {
		num[i] = 0;
	}

	for (i = 0; i < M.t; i++) {
		num[M.data[i].j] = num[M.data[i].j] + 1;
	}

	cout << endl;

	cpot[1] = 1;

	for (i = 2; i < M.n + 1; i++) {
		cpot[i] = cpot[i - 1] + num[i - 1];
	}

	for (i = 0; i < M.t; i++) {
		j = M.data[i].j;
		k = cpot[j] - 1;

		T.data[k].i = M.data[i].j;
		T.data[k].j = M.data[i].i;
		T.data[k].e = M.data[i].e;

		cpot[j] = cpot[j] + 1;
	}
}

int main() {
	TSMatrix M, T;

	M.t = rand() % 5 + 6;
	T.t = M.t;
	cout << "非零元的数量为：" << M.t << endl;

	M.m = rand() % 5 + 6;
	T.n = T.m;
	cout << "行数为：" << M.m << endl;

	M.n = rand() % 3 + 8;
	T.m = T.n;
	cout << "列数为：" << M.n << endl;

	M.get();

	cout << "稀疏矩阵为：" << endl;
	//M.show();

	TS(M, T);

	cout << "转置矩阵为：" << endl;
	T.show();

	return 0;
}

