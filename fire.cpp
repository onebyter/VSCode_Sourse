// 用1000多行C++代码写给2021元旦的祝福
// 元旦快乐
// Happy New Year 2021
// Made by Mike_Zhang
// http://ultrafish.cn
// 2021.1.1
// 仅供学习交流使用
// *********************
#include <iostream>
using namespace std;
#define NYR 24
#define NYC 47
#define SPEED 10000

// roll speed control
void deLay(int d) {
    float p, q;
    for (p = 0; p < d; p = p + 0.001) {
        q = q + 0.01;
    }
}

// yuan
void yuan() {
    char aone[NYR][NYC];
    int i, j, m;
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            aone[i][j] = ' ';
        }
    }
    for (i = 0; i < NYR; i++) {
        if (i == 3 || i == 4) {
            for (m = 10; m <= 37; m++) {
                aone[i][m] = 'X';
            }
        }
        if (i == 9 || i == 10) {
            for (m = 6; m <= 41; m++) {
                aone[i][m] = 'X';
            }
        }
        if (i == 11 || i == 12 || i == 13) {
            for (m = 17; m <= 19; m++) {
                aone[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                aone[i][m] = 'X';
            }
        }
        if (i == 14) {
            for (m = 16; m <= 18; m++) {
                aone[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                aone[i][m] = 'X';
            }
        }
        if (i == 15) {
            for (m = 15; m <= 18; m++) {
                aone[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                aone[i][m] = 'X';
            }
            aone[i][39] = 'X';
        }
        if (i == 16) {
            for (m = 14; m <= 17; m++) {
                aone[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                aone[i][m] = 'X';
            }
            for (m = 39; m <= 41; m++) {
                aone[i][m] = 'X';
            }
        }
        if (i == 17) {
            for (m = 12; m <= 16; m++) {
                aone[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                aone[i][m] = 'X';
            }
            for (m = 39; m <= 41; m++) {
                aone[i][m] = 'X';
            }
        }
        if (i == 18) {
            for (m = 10; m <= 14; m++) {
                aone[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                aone[i][m] = 'X';
            }
            for (m = 38; m <= 41; m++) {
                aone[i][m] = 'X';
            }
        }
        if (i == 19) {
            for (m = 6; m <= 12; m++) {
                aone[i][m] = 'X';
            }
            for (m = 27; m <= 40; m++) {
                aone[i][m] = 'X';
            }
        }
        if (i == 20) {
            aone[i][6] = 'X';
            aone[i][7] = 'X';
            for (m = 29; m <= 39; m++) {
                aone[i][m] = 'X';
            }
        }
    }
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            cout << aone[i][j];
        }
        void deLay(int);
        deLay(SPEED);
        cout << endl;
    }
}
// dan
void dan() {
    char atwo[NYR][NYC];
    int i, j, m;
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            atwo[i][j] = ' ';
        }
    }
    for (i = 0; i < NYR; i++) {
        if (i == 3 || i == 8 || i == 14) {
            for (m = 11; m <= 35; m++) {
                atwo[i][m] = 'X';
            }
        }
        if (i == 4 || i == 5 || i == 6 || i == 7 || i == 9 || i == 10 ||
            i == 11 || i == 12 || i == 13) {
            for (m = 11; m <= 13; m++) {
                atwo[i][m] = 'X';
            }
            for (m = 33; m <= 35; m++) {
                atwo[i][m] = 'X';
            }
        }
        if (i == 18 || i == 19) {
            for (m = 5; m <= 41; m++) {
                atwo[i][m] = 'X';
            }
        }
    }
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            cout << atwo[i][j];
        }
        void deLay(int);
        deLay(SPEED);
        cout << endl;
    }
}
// kuai
void kuai() {
    char athree[NYR][NYC];
    int i, j, m;
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            athree[i][j] = ' ';
        }
    }
    for (i = 0; i < NYR; i++) {
        if (i == 2 || i == 3 || i == 4) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 5) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 20; m <= 38; m++) {
                athree[i][m] = 'x';
            }
        }
        if (i == 6) {
            for (m = 6; m <= 8; m++) {
                athree[i][m] = 'X';
            }
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 15; m <= 16; m++) {
                athree[i][m] = 'X';
            }
            for (m = 20; m <= 38; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 7) {
            for (m = 6; m <= 8; m++) {
                athree[i][m] = 'X';
            }
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 15; m <= 17; m++) {
                athree[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                athree[i][m] = 'X';
            }
            for (m = 36; m <= 38; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 8) {
            for (m = 6; m <= 8; m++) {
                athree[i][m] = 'X';
            }
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 16; m <= 18; m++) {
                athree[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                athree[i][m] = 'X';
            }
            for (m = 36; m <= 38; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 9) {
            for (m = 6; m <= 8; m++) {
                athree[i][m] = 'X';
            }
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 16; m <= 19; m++) {
                athree[i][m] = 'X';
            }
            for (m = 27; m <= 29; m++) {
                athree[i][m] = 'X';
            }
            for (m = 36; m <= 38; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 10) {
            for (m = 5; m <= 7; m++) {
                athree[i][m] = 'X';
            }
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 17; m <= 18; m++) {
                athree[i][m] = 'x';
            }
            for (m = 26; m <= 28; m++) {
                athree[i][m] = 'X';
            }
            for (m = 36; m <= 38; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 11) {
            for (m = 4; m <= 6; m++) {
                athree[i][m] = 'X';
            }
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 18; m <= 25; m++) {
                athree[i][m] = 'x';
            }
            for (m = 26; m <= 28; m++) {
                athree[i][m] = 'X';
            }
            for (m = 29; m <= 35; m++) {
                athree[i][m] = 'x';
            }
            for (m = 36; m <= 38; m++) {
                athree[i][m] = 'X';
            }
            for (m = 39; m <= 41; m++) {
                athree[i][m] = 'x';
            }
        }
        if (i == 12) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 18; m <= 41; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 13) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 25; m <= 30; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 14) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 25; m <= 27; m++) {
                athree[i][m] = 'X';
            }
            for (m = 29; m <= 31; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 15) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 24; m <= 26; m++) {
                athree[i][m] = 'X';
            }
            for (m = 30; m <= 33; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 16) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 23; m <= 25; m++) {
                athree[i][m] = 'X';
            }
            for (m = 32; m <= 34; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 17) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 21; m <= 24; m++) {
                athree[i][m] = 'X';
            }
            for (m = 33; m <= 36; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 18) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 19; m <= 22; m++) {
                athree[i][m] = 'X';
            }
            for (m = 35; m <= 38; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 19) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 16; m <= 21; m++) {
                athree[i][m] = 'X';
            }
            for (m = 37; m <= 42; m++) {
                athree[i][m] = 'X';
            }
        }
        if (i == 20) {
            for (m = 11; m <= 13; m++) {
                athree[i][m] = 'X';
            }
            for (m = 17; m <= 18; m++) {
                athree[i][m] = 'X';
            }
            for (m = 40; m <= 40; m++) {
                athree[i][m] = 'X';
            }
        }
    }
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            cout << athree[i][j];
        }
        void deLay(int);
        deLay(SPEED);
        cout << endl;
    }
}
// le
void le() {
    char afour[NYR][NYC];
    int i, j, m;
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            afour[i][j] = ' ';
        }
        if (i == 2) {
            for (m = 34; m <= 35; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 3) {
            for (m = 23; m <= 36; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 4) {
            for (m = 10; m <= 27; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 5) {
            for (m = 9; m <= 11; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 6) {
            for (m = 9; m <= 11; m++) {
                afour[i][m] = 'X';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 7 || i == 8 || i == 9) {
            for (m = 8; m <= 10; m++) {
                afour[i][m] = 'X';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 10) {
            for (m = 7; m <= 9; m++) {
                afour[i][m] = 'X';
            }
            for (m = 10; m <= 21; m++) {
                afour[i][m] = 'x';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
            for (m = 25; m <= 39; m++) {
                afour[i][m] = 'x';
            }
        }
        if (i == 11) {
            for (m = 7; m <= 39; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 12) {
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 13) {
            for (m = 12; m <= 13; m++) {
                afour[i][m] = 'X';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
            for (m = 31; m <= 33; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 14) {
            for (m = 11; m <= 13; m++) {
                afour[i][m] = 'X';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
            for (m = 32; m <= 34; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 15) {
            for (m = 10; m <= 12; m++) {
                afour[i][m] = 'X';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
            for (m = 33; m <= 35; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 16) {
            for (m = 9; m <= 11; m++) {
                afour[i][m] = 'X';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
            for (m = 34; m <= 36; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 17) {
            for (m = 7; m <= 10; m++) {
                afour[i][m] = 'X';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
            for (m = 35; m <= 38; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 18) {
            for (m = 6; m <= 9; m++) {
                afour[i][m] = 'X';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
            for (m = 36; m <= 39; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 19) {
            for (m = 6; m <= 7; m++) {
                afour[i][m] = 'X';
            }
            for (m = 15; m <= 21; m++) {
                afour[i][m] = 'x';
            }
            for (m = 22; m <= 24; m++) {
                afour[i][m] = 'X';
            }
            for (m = 37; m <= 39; m++) {
                afour[i][m] = 'X';
            }
        }
        if (i == 20) {
            for (m = 16; m <= 23; m++) {
                afour[i][m] = 'X';
            }
        }
    }
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            cout << afour[i][j];
        }
        void deLay(int);
        deLay(SPEED);
        cout << endl;
    }
}
// HAPPY NEW YEAR
void happynewyear() {
    char afive[NYR][NYC];
    int i, j, m;
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            afive[i][j] = ' ';
        }
        // HAPPY
        if (i == 2) {
            for (m = 2; m <= 3; m++) {
                afive[i][m] = 'X';
            }
            for (m = 8; m <= 9; m++) {
                afive[i][m] = 'X';
            }
            for (m = 14; m <= 16; m++) {
                afive[i][m] = 'X';
            }
            for (m = 21; m <= 22; m++) {
                afive[i][m] = 'X';
            }
            for (m = 23; m <= 25; m++) {
                afive[i][m] = 'X';
            }
            for (m = 26; m <= 27; m++) {
                afive[i][m] = 'X';
            }
            for (m = 30; m <= 31; m++) {
                afive[i][m] = 'X';
            }
            for (m = 32; m <= 34; m++) {
                afive[i][m] = 'X';
            }
            for (m = 35; m <= 36; m++) {
                afive[i][m] = 'X';
            }
            for (m = 39; m <= 40; m++) {
                afive[i][m] = 'X';
            }
            for (m = 45; m <= 46; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 3) {
            for (m = 2; m <= 3; m++) {
                afive[i][m] = 'X';
            }
            for (m = 8; m <= 9; m++) {
                afive[i][m] = 'X';
            }
            for (m = 13; m <= 14; m++) {
                afive[i][m] = 'X';
            }
            for (m = 16; m <= 17; m++) {
                afive[i][m] = 'X';
            }
            for (m = 21; m <= 22; m++) {
                afive[i][m] = 'X';
            }
            for (m = 26; m <= 27; m++) {
                afive[i][m] = 'X';
            }
            for (m = 30; m <= 31; m++) {
                afive[i][m] = 'X';
            }
            for (m = 35; m <= 36; m++) {
                afive[i][m] = 'X';
            }
            for (m = 40; m <= 41; m++) {
                afive[i][m] = 'X';
            }
            for (m = 44; m <= 45; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 4) {
            for (m = 2; m <= 9; m++) {
                afive[i][m] = 'X';
            }
            for (m = 12; m <= 13; m++) {
                afive[i][m] = 'X';
            }
            for (m = 17; m <= 18; m++) {
                afive[i][m] = 'X';
            }
            for (m = 21; m <= 22; m++) {
                afive[i][m] = 'X';
            }
            for (m = 23; m <= 25; m++) {
                afive[i][m] = 'X';
            }
            for (m = 26; m <= 27; m++) {
                afive[i][m] = 'X';
            }
            for (m = 30; m <= 31; m++) {
                afive[i][m] = 'X';
            }
            for (m = 32; m <= 34; m++) {
                afive[i][m] = 'X';
            }
            for (m = 35; m <= 36; m++) {
                afive[i][m] = 'X';
            }
            for (m = 41; m <= 44; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 5) {
            for (m = 2; m <= 3; m++) {
                afive[i][m] = 'X';
            }
            for (m = 8; m <= 9; m++) {
                afive[i][m] = 'X';
            }
            for (m = 12; m <= 18; m++) {
                afive[i][m] = 'X';
            }
            for (m = 21; m <= 22; m++) {
                afive[i][m] = 'X';
            }
            for (m = 30; m <= 31; m++) {
                afive[i][m] = 'X';
            }
            for (m = 42; m <= 43; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 6) {
            for (m = 2; m <= 3; m++) {
                afive[i][m] = 'X';
            }
            for (m = 8; m <= 9; m++) {
                afive[i][m] = 'X';
            }
            for (m = 11; m <= 12; m++) {
                afive[i][m] = 'X';
            }
            for (m = 18; m <= 19; m++) {
                afive[i][m] = 'X';
            }
            for (m = 21; m <= 22; m++) {
                afive[i][m] = 'X';
            }
            for (m = 30; m <= 31; m++) {
                afive[i][m] = 'X';
            }
            for (m = 42; m <= 43; m++) {
                afive[i][m] = 'X';
            }
        }
        // NEW
        if (i == 9) {
            for (m = 9; m <= 11; m++) {
                afive[i][m] = 'X';
            }
            for (m = 16; m <= 17; m++) {
                afive[i][m] = 'X';
            }
            for (m = 19; m <= 25; m++) {
                afive[i][m] = 'X';
            }
            for (m = 27; m <= 28; m++) {
                afive[i][m] = 'X';
            }
            for (m = 32; m <= 34; m++) {
                afive[i][m] = 'X';
            }
            for (m = 38; m <= 39; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 10) {
            for (m = 9; m <= 12; m++) {
                afive[i][m] = 'X';
            }
            for (m = 16; m <= 17; m++) {
                afive[i][m] = 'X';
            }
            for (m = 19; m <= 20; m++) {
                afive[i][m] = 'X';
            }
            for (m = 28; m <= 29; m++) {
                afive[i][m] = 'X';
            }
            for (m = 32; m <= 34; m++) {
                afive[i][m] = 'X';
            }
            for (m = 37; m <= 38; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 11) {
            for (m = 9; m <= 10; m++) {
                afive[i][m] = 'X';
            }
            for (m = 12; m <= 13; m++) {
                afive[i][m] = 'X';
            }
            for (m = 16; m <= 17; m++) {
                afive[i][m] = 'X';
            }
            for (m = 19; m <= 25; m++) {
                afive[i][m] = 'X';
            }
            for (m = 28; m <= 29; m++) {
                afive[i][m] = 'X';
            }
            for (m = 31; m <= 32; m++) {
                afive[i][m] = 'X';
            }
            for (m = 34; m <= 35; m++) {
                afive[i][m] = 'X';
            }
            for (m = 37; m <= 38; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 12) {
            for (m = 9; m <= 10; m++) {
                afive[i][m] = 'X';
            }
            for (m = 14; m <= 17; m++) {
                afive[i][m] = 'X';
            }
            for (m = 19; m <= 20; m++) {
                afive[i][m] = 'X';
            }
            for (m = 29; m <= 31; m++) {
                afive[i][m] = 'X';
            }
            for (m = 35; m <= 37; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 13) {
            for (m = 9; m <= 10; m++) {
                afive[i][m] = 'X';
            }
            for (m = 15; m <= 17; m++) {
                afive[i][m] = 'X';
            }
            for (m = 19; m <= 25; m++) {
                afive[i][m] = 'X';
            }
            for (m = 30; m <= 31; m++) {
                afive[i][m] = 'X';
            }
            for (m = 35; m <= 36; m++) {
                afive[i][m] = 'X';
            }
        }
        // YEAR
        if (i == 16) {
            for (m = 5; m <= 6; m++) {
                afive[i][m] = 'X';
            }
            for (m = 12; m <= 13; m++) {
                afive[i][m] = 'X';
            }
            for (m = 15; m <= 21; m++) {
                afive[i][m] = 'X';
            }
            for (m = 26; m <= 28; m++) {
                afive[i][m] = 'X';
            }
            for (m = 33; m <= 39; m++) {
                afive[i][m] = 'X';
            }
            for (m = 44; m <= 45; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 17) {
            for (m = 6; m <= 7; m++) {
                afive[i][m] = 'X';
            }
            for (m = 11; m <= 12; m++) {
                afive[i][m] = 'X';
            }
            for (m = 15; m <= 16; m++) {
                afive[i][m] = 'X';
            }
            for (m = 25; m <= 26; m++) {
                afive[i][m] = 'X';
            }
            for (m = 28; m <= 29; m++) {
                afive[i][m] = 'X';
            }
            for (m = 33; m <= 34; m++) {
                afive[i][m] = 'X';
            }
            for (m = 39; m <= 40; m++) {
                afive[i][m] = 'X';
            }
            for (m = 44; m <= 45; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 18) {
            for (m = 8; m <= 10; m++) {
                afive[i][m] = 'X';
            }
            for (m = 15; m <= 21; m++) {
                afive[i][m] = 'X';
            }
            for (m = 24; m <= 25; m++) {
                afive[i][m] = 'X';
            }
            for (m = 29; m <= 30; m++) {
                afive[i][m] = 'X';
            }
            for (m = 33; m <= 39; m++) {
                afive[i][m] = 'X';
            }
            for (m = 44; m <= 45; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 19) {
            for (m = 8; m <= 10; m++) {
                afive[i][m] = 'X';
            }
            for (m = 15; m <= 16; m++) {
                afive[i][m] = 'X';
            }
            for (m = 24; m <= 30; m++) {
                afive[i][m] = 'X';
            }
            for (m = 33; m <= 34; m++) {
                afive[i][m] = 'X';
            }
            for (m = 38; m <= 40; m++) {
                afive[i][m] = 'X';
            }
        }
        if (i == 20) {
            for (m = 8; m <= 10; m++) {
                afive[i][m] = 'X';
            }
            for (m = 15; m <= 21; m++) {
                afive[i][m] = 'X';
            }
            for (m = 23; m <= 24; m++) {
                afive[i][m] = 'X';
            }
            for (m = 30; m <= 31; m++) {
                afive[i][m] = 'X';
            }
            for (m = 33; m <= 34; m++) {
                afive[i][m] = 'X';
            }
            for (m = 39; m <= 41; m++) {
                afive[i][m] = 'X';
            }
            for (m = 44; m <= 45; m++) {
                afive[i][m] = 'X';
            }
        }
    }
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            cout << afive[i][j];
        }
        void deLay(int);
        deLay(SPEED);
        cout << endl;
    }
}
// 2021
void year() {
    char asix[NYR][NYC];
    int i, j, m;
    for (i = 0; i < NYR; i++) {
        for (j = 0; j < NYC; j++) {
            asix[i][j] = ' ';
        }
        if (i == 1) {
            for (m = 1; m <= 11; m++) {
                asix[i][m] = '2';
            }
            for (m = 14; m <= 24; m++) {
                asix[i][m] = '0';
            }
            for (m = 28; m <= 37; m++) {
                asix[i][m] = '2';
            }
            for (m = 40; m <= 44; m++) {
                asix[i][m] = '1';
            }
        }
        if (i == 2 || i == 3 || i == 4) {
            for (m = 10; m <= 11; m++) {
                asix[i][m] = '2';
            }
            for (m = 14; m <= 15; m++) {
                asix[i][m] = '0';
            }
            for (m = 23; m <= 24; m++) {
                asix[i][m] = '0';
            }
            for (m = 36; m <= 37; m++) {
                asix[i][m] = '2';
            }
            for (m = 43; m <= 44; m++) {
                asix[i][m] = '1';
            }
        }
        if (i == 5) {
            for (m = 1; m <= 11; m++) {
                asix[i][m] = '2';
            }
            for (m = 14; m <= 15; m++) {
                asix[i][m] = '0';
            }
            for (m = 23; m <= 24; m++) {
                asix[i][m] = '0';
            }
            for (m = 28; m <= 37; m++) {
                asix[i][m] = '2';
            }
            for (m = 43; m <= 44; m++) {
                asix[i][m] = '1';
            }
        }
        if (i == 6 || i == 7 || i == 8) {
            for (m = 1; m <= 2; m++) {
                asix[i][m] = '2';
            }
            for (m = 14; m <= 15; m++) {
                asix[i][m] = '0';
            }
            for (m = 23; m <= 24; m++) {
                asix[i][m] = '0';
            }
            for (m = 28; m <= 29; m++) {
                asix[i][m] = '2';
            }
            for (m = 43; m <= 44; m++) {
                asix[i][m] = '1';
            }
        }
        if (i == 9) {
            for (m = 1; m <= 11; m++) {
                asix[i][m] = '2';
            }
            for (m = 14; m <= 24; m++) {
                asix[i][m] = '0';
            }
            for (m = 28; m <= 37; m++) {
                asix[i][m] = '2';
            }
            for (m = 40; m <= 46; m++) {
                asix[i][m] = '1';
            }
        }
    }
    for (i = 0; i < (NYR - 10); i++) {
        for (j = 0; j < NYC; j++) {
            cout << asix[i][j];
        }
        void deLay(int);
        deLay(SPEED);
        cout << endl;
    }
}
// main functions
int main() {
    void yuan();
    yuan();
    void dan();
    dan();
    void kuai();
    kuai();
    void le();
    le();
    void happynewyear();
    happynewyear();
    void year();
    year();
    cout << "元旦快乐" << endl
         << "Happy New Year 2021" << endl
         << "Made by Mike_Zhang" << endl
         << "http://ultrafish.cn" << endl
         << "2021.1.1" << endl
         << endl;
}
// ********************
// 用1000多行C++代码写给2021元旦的祝福
// 元旦快乐
// Happy New Year 2021
// Made by Mike_Zhang
// http://ultrafish.cn
// 2021.1.1
// 仅供学习交流使用