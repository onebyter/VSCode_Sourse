#include<iostream>
using namespace std;

#define MaxVnum 100  
bool visited[MaxVnum];  
typedef char VexType;   

typedef struct Node{
	char val;
	struct Node* lchild;
	struct Node* nextsibling;
}*Tree;

typedef struct AdjNode {
	int v; 
	struct AdjNode* next; 
} AdjNode;

typedef struct VexNode { 
	VexType data; 
	AdjNode* first;
} VexNode;

typedef struct { 
	VexNode  Vex[MaxVnum];
	int vexnum, edgenum; 
} ALGraph;

int locatevex(ALGraph G, int x) {
	for (int i = 0; i < G.vexnum; i++) {
		if (x == G.Vex[i].data) {
			return i;
		}
	}
	return -1;
}

void insertedge(ALGraph& G, int i, int j) {
	AdjNode* t = (AdjNode*)malloc(sizeof(AdjNode));
	t->v = j;
	t->next = G.Vex[i].first;
	G.Vex[i].first = t;
}

void print(ALGraph G) {
	cout << "邻接表：\n";
	for (int i = 0; i < G.vexnum; i++) {
		cout << G.Vex[i].data << " ";
		AdjNode* p = G.Vex[i].first;
		while (p) {
			cout << p->v << " ";
			p = p->next;
		}
		cout << endl;
	}
}

void CreateALGraph(ALGraph& G) { 
	cout << "请输入顶点数和边数:" << endl;
	cin >> G.vexnum >> G.edgenum;
	cout << "请输入顶点信息:" << endl;
	for (int i = 0; i < G.vexnum; i++) { 
		cin >> G.Vex[i].data;
		G.Vex[i].first = NULL;
	}
	cout << "请依次输入每条边的两个顶点u,v" << endl;
	for (int num = 0; num < G.edgenum; num++) {
		VexType u, v;
		cin >> u >> v;
		int i = locatevex(G, u); 
		int j = locatevex(G, v); 
		if (i != -1 && j != -1) {
			insertedge(G, i, j);
			insertedge(G, j, i);
		}
	}
}

void DFSTree(ALGraph G, Tree& T, int v) {
	visited[v] = true;
	bool first = true;
	Tree q = NULL;
	AdjNode* p = G.Vex[v].first;
	for (int w; p; p = p->next) {
		w = p->v;
		if (!visited[w]) {		
			Tree t = (Tree)malloc(sizeof(Node));
			t->val = G.Vex[w].data;
			t->lchild = NULL;
			t->nextsibling = NULL;
			if (first){
				T->lchild = t;
				first = false;
			}
			else q->nextsibling = t;
			q = t;
			DFSTree(G, q, w);
		}
	}
}

void DFSForest(ALGraph G, Tree& T) {
	T = NULL;
	Tree q = NULL;
	for (int i = 0; i < G.vexnum; i++) {
		if (!visited[i]) {
			Tree p = (Tree)malloc(sizeof(Node));
			p->val = G.Vex[i].data;
			p->lchild = NULL;
			p->nextsibling = NULL;
			if (!T) {
				T = p;
			}
			else q->nextsibling = p;
			q = p;
			DFSTree(G, q, i);
		}
	}
}

void preorder(Tree T) {
	if (T) {
		cout << T->val << " ";
		preorder(T->lchild);
		preorder(T->nextsibling);
	}
}

int main() {
	ALGraph G;
	CreateALGraph(G);
	print(G);
	Tree T;
	DFSForest(G, T);
	cout << "先序遍历结果: ";
	preorder(T);
	return 0;
}


