#include<iostream>
#include<string>
using namespace std;
struct stu {
	string name;
	int age;
	int score;
} s[10];

void change(int n) {
	for (int i = 0; i < n; i++) {
		s[i].age += 1;
		s[i].score *= 1.2;
		if (s[i].score > 600) {
			s[i].score = 600;
		}
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i].name >> s[i].age >> s[i].score;
	}
	change(n);
	for (int i = 0; i < n; i++) {
		cout << s[i].name << " " << s[i].age << " " << s[i].score << endl;
	}
	return 0;
}
