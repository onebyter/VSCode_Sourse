#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define Num 3

void sort() {}

void search() {}

int main() {

    char **name = (char **)malloc(sizeof(char[10][10]));
    char **num = (char **)malloc(sizeof(char[10][5]));
    float score[5];
    for (int i = 0; i < Num; i++) {
        cout << "Enter name: ";
        name[i] = (char *)malloc(sizeof(char[10]));
        scanf("%s", name[i]);
        cout << "Enter number: ";
        num[i] = (char *)malloc(sizeof(char[5]));
        scanf("%s", num[i]);
        cout << "Enter score: ";
        scanf("%f", &score[i]);
    }
    for (int i = 0; i < Num; i++) {
        printf("%s %s %f\n", name[i], num[i], score[i]);
        //		cout << name[i] << " " << num[i] << " " << score[i] <<
        // endl;
    }
    system("pause");
    return 0;
}
