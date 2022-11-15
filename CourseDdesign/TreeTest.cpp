#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct node {
	int x, y;
	int dir;
	node() {}
	node(int xx, int yy, int dd) {
		x = xx;
		y = yy;
		dir = dd;
	}
};

class stack {
	private:
		node* arr;
		node* ptop;
		int num;

	public:
		stack() {
			arr = new node[256];
			ptop = arr;
			num = 0;
		}

		bool empty() {
			return num == 0;
		}

		bool full() {
			return num == 256;
		}

		void push(node x) {
			if (!full()) {
				*ptop = x;
				ptop++;
				num++;
			}
			else {
				cout << "栈满\n" << endl;
			}
		}

		void pop() {
			if (!empty()) {
				ptop--;
				num--;
			}
			else {
				cout << "栈空\n" << endl;
			}
		}

		node top() {
			return *(ptop - 1);
		}

		int count() {
			return num;
		}
};

int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
string mp[20];
string res[20];
stack s;
int m = 16, n = 16;
node r, c;

int relapos(node a, node b) {
	if (a.x == b.x && a.y > b.y) {
		return 0;
	}
	else if (a.x == b.x && a.y < b.y) {
		return 2;
	}
	else if (a.y == b.y && a.x > b.x) {
		return 1;
	}
	else {
		return 3;
	}
}

bool solve() {
	int x, y, d;
	int tx, ty;
	s.push(node(r.x, r.y, -1));
	mp[r.x][r.y] = '#';
	while (!s.empty()) {
		node temp = s.top();
		x = temp.x;
		y = temp.y;
		d = temp.dir + 1;
		while (d < 4) {
			tx = x + dir[d][0];
			ty = y + dir[d][1];
			if (mp[tx][ty] == '0') {
				s.push(node(tx, ty, d));
				x = tx;
				y = ty;
				mp[tx][ty] = '#';
				if (x == c.x && y == c.y) {
					return true;
				}
				else {
					d = 0;
				}
			}
			else {
				d++;
			}
		}
		s.pop();
	}
	return false;
}

void print() {
	for (int i = 0; i < 18; i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void printd() {
	node p = s.top();
	res[p.x][p.y] = '@';
	while (s.count() > 1) {
		p = s.top();
		s.pop();
		node q = s.top();
		int d = relapos(p, q);
		if (d == 0) {
			res[q.x][q.y] = 'd';
		}
		else if (d == 1) {
			res[q.x][q.y] = 's';
		}
		else if (d == 2) {
			res[q.x][q.y] = 'a';
		}
		else {
			res[q.x][q.y] = 'w';
		}
	}
	for (int i = 0; i < 18; i++) {
		for (int j = 0; j < res[i].size(); j++) {
			if (res[i][j] == 'd') {
				cout << "→";
			}
			else if (res[i][j] == 's') {
				cout << "↓";
			}
			else if (res[i][j] == 'a') {
				cout << "←";
			}
			else if (res[i][j] == 'w') {
				cout << "↑";
			}
			else {
				cout << res[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void fromFile() {
	FILE* fp = freopen("input.txt", "r", stdin);
	if (!fp) {
		exit(0);
	}
	for (int i = 0; i < 18; i++) {
		cin >> mp[i];
		res[i] = mp[i];
	}
	fclose(fp);
}

void fromInput() {
	mp[0] = string(18, '1');
	res[0] = mp[0];
	string t;
	cout << "请输入一个十六行十六列的迷宫\n";
	cout << "0代表可通过， 1代表不可通过\n";
	for (int i = 1; i <= 16; i++) {
		mp[i] = "1";
		cin >> t;
		mp[i] += t;
		mp[i] += "1";
		res[i] = mp[i];
	}
	mp[17] = string(18, '1');
	res[17] = mp[17];
}

void fromRandom() {
	srand(time(NULL));
	mp[0] = string(18, '1');
	res[0] = mp[0];
	for (int i = 1; i <= 16; i++) {
		mp[i] = string(18, '0');
		res[i] = mp[i];
		mp[i][0] = '1';
		res[i][0] = '1';
		for (int j = 1; j <= 16; j++) {
			int r = rand() % 4;
			if (r == 1) {
				mp[i][j] = '1';
				res[i][j] = '1';
			}
			else {
				mp[i][j] = '0';
				res[i][j] = '0';
			}
		}
		mp[i][17] = '1';
		res[i][17] = '1';
	}
	mp[17] = string(18, '1');
	res[17] = mp[17];
}

void start() {
	cout << "选项1: 从文件读取迷宫; \n选项2: 从键盘输入迷宫\n选项3: "
	     "随机生成迷宫\n";
	cout << "依次输入入口横纵坐标和出口横纵坐标以及选项\n";
	char num;
	int x = 1;
	while (x--) {
		cin >> r.x >> r.y >> c.x >> c.y;
		cin >> num;
		if (num == '1') {
			fromFile();
		}
		else if (num == '2') {
			fromInput();
		}
		else if (num == '3') {
			fromRandom();
			cout << "生成的迷宫为：\n";
			print();
		}
		else {
			x++;
			cout << "请重新输入:\n";
		}
	}
	bool flag = solve();
	if (flag) {
		cout << "迷宫路径为：\n";
		printd();
	}
	else {
		cout << "此迷宫无解\n";
	}
}

int main() {
	start();
	system("pause");
	return 0;
}
