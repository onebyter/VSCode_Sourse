#include<iostream>
using namespace std;
#define MAXBIT    100
#define MAXVALUE  INT_MAX
#define MAXLEAF   30
#define MAXNODE   MAXLEAF*2 -1

double Weight[8] = {2, 15, 30, 8, 10, 5, 12, 18};
char ch[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

typedef struct {
	double weight;
	int parent;
	int lchild;
	int rchild;
	char value;
} HNodeType;        

typedef struct {
	int bit[MAXBIT];
	int start;
} HCodeType;        
HNodeType HuffNode[MAXNODE]; 
HCodeType HuffCode[MAXLEAF];

/* 构造哈夫曼树 */
void HuffmanTree (int n) {
	int x1, x2;
	double m1, m2;
	for (int i = 0; i < 2 * n - 1; i++) {
		HuffNode[i].weight = 0; //权值
		HuffNode[i].parent = -1;
		HuffNode[i].lchild = -1;
		HuffNode[i].rchild = -1;
	}
	for (int i = 0; i < n; i++) {
		HuffNode[i].weight = Weight[i];
		HuffNode[i].value = ch[i];
	}
	for (int i = 0; i < n - 1; i++) {
		m1 = m2 = MAXVALUE;
		x1 = x2 = 0;
		for (int j = 0; j < n + i; j++) {
			if (HuffNode[j].weight < m1 && HuffNode[j].parent == -1) {
				m2 = m1;
				x2 = x1;
				m1 = HuffNode[j].weight;
				x1 = j;
			}
			else if (HuffNode[j].weight < m2 && HuffNode[j].parent == -1) {
				m2 = HuffNode[j].weight;
				x2 = j;
			}
		}
		HuffNode[x1].parent  = n + i;
		HuffNode[x2].parent  = n + i;
		HuffNode[n + i].weight = m1 + m2;
		HuffNode[n + i].lchild = x1;
		HuffNode[n + i].rchild = x2;
	}
}

void HuffmanCode(int n) {
	int c, p;  //child, parent
	for (int i = 0; i < n; i++) {
		HuffCode[i].start = n - 1;
		c = i;
		p = HuffNode[c].parent;
		while (p != -1) {
			if (HuffNode[p].lchild == c) {
				HuffCode[i].bit[HuffCode[i].start] = 0;
			}
			else {
				HuffCode[i].bit[HuffCode[i].start] = 1;
			}
			HuffCode[i].start--;
			c = p;
			p = HuffNode[c].parent; 
		}
	}
}

void print(int n) {
	for (int i = 0; i < n; i++) {
		cout << HuffNode[i].value << ": Huffman code is: ";
		for (int j = HuffCode[i].start + 1; j < n; j++) {
			cout << HuffCode[i].bit[j];
		}
		cout << endl;
	}	
}

int main() {
	int n = 8;
	HuffmanTree(n); //构造哈夫曼树
	HuffmanCode(n); // 哈夫曼树编码
	print(n); //输出哈夫曼编码
	return 0;
}

