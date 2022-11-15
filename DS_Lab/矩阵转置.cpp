#include<iostream>
using namespace std;
const int Msize = 20;
typedef struct {
	int i, j;
	int e;
} triple;

class TSMatrix {
	public:
		triple* data = new triple[Msize + 1];
		int row, col, Enum;

		void creat() {
			this->row = rand() % 2 + 6;
			this->col = rand() % 2 + 8;
			this->Enum = rand() % 2 + 6;
			cout << "生成了一个" << this->row << "行，" << this->col << "列的稀疏矩阵" << endl;
			cout << "输入 " << this->Enum << " 个行列和值" << endl;
			for (int i = 1; i <= this->Enum; i++) {
				cin >> data[i].i >> data[i].j >> data[i].e;
			}

		}

		void show() {
			int k = 1;
			for (int i = 1; i <= row; i++) {
				for (int j = 1; j <= col; j++) {
					if (i == data[k].i && j == data[k].j) {
						cout << data[k].e << " ";
						k++;
					}
					else {
						cout << 0 << " ";
					}
				}
				cout << endl;
			}
			cout << endl;
		}

};
TSMatrix transpose(TSMatrix t) {
	TSMatrix temp; 
	
	temp.row = t.col;
	temp.col = t.row;
	temp.Enum = t.Enum;
	int num = 1;
	for (int col = 1; col <= t.col; col++) {
		for (int q = 1; q <= t.Enum; q++) {
			if (t.data[q].j == col) {
				temp.data[num].i = t.data[num].j;
				temp.data[num].j = t.data[num].i;
				temp.data[num].e = t.data[num].e;
				num++;
			}
		}
	}
	return temp;
}

int main() {
	TSMatrix t;
	t.creat();
	t.show();
	t = transpose(t);
	t.show();
	return 0;
}

