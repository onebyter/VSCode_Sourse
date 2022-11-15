#include<iostream>
using namespace std;

//选修某课程的学生有5人，学生的信息包括学号、姓名和成绩，按成绩高低对学生排序，输出排序后的学生信息。从键盘输入一学生姓名，查出其成绩和成绩等级。(用指向指针的指针处理学生的姓名、学号)
int main() {
    int n = 5;
    //指向指针的指针处理学生的姓名、学号
    char** name = new char*[n];
    int* num = new int[n];
    int* score = new int[n];
    for (int i = 0; i < n; i++) {
        name[i] = new char[20];
        cin >> name[i];
        cin >> num[i];
        cin >> score[i];
    }
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (score[j] < score[j + 1]) {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                char* temp2 = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp2;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << name[i] << " " << num[i] << " " << score[i] << endl;
    }

}