#include<iostream>
#include<queue>
using namespace std;

#define MaxVnum 100 
bool visited[MaxVnum]; 
typedef char VexType;  
typedef int EdgeType;  
typedef struct {
	VexType Vex[MaxVnum];
	EdgeType Edge[MaxVnum][MaxVnum];
	int vexnum, edgenum; //节点数，边数
} AMGraph;

int locatevex(AMGraph G, VexType x) {
	for (int i = 0; i < G.vexnum; i++) 
		if (x == G.Vex[i]) {
			return i;
		}
	return -1;
}

void CreateAMGraph(AMGraph& G) {
	for (int i = 0; i < G.vexnum; i++) 
		for (int j = 0; j < G.vexnum; j++) {
			G.Edge[i][j] = 0;
		}
	cout << "请输入节点数：" << endl;
	cin >> G.vexnum;
	cout << "请输入边数:" << endl;
	cin >> G.edgenum;
	cout << "请输入节点信息:" << endl;
	for (int i = 0; i < G.vexnum; i++) { 
		cin >> G.Vex[i];
	}
	cout << "请输入每条边的两个节点：" << endl;
	while (G.edgenum--) {
		VexType u, v;
		cin >> u >> v;
		int i = locatevex(G, u); 
		int j = locatevex(G, v); 
		if (i != -1 && j != -1) {
			G.Edge[i][j] = 1;
		}
	}
}

void print(AMGraph G) { //输出邻接矩阵
	cout << "图的邻接矩阵为：" << endl;
	for (int i = 0; i < G.vexnum; i++) {
		for (int j = 0; j < G.vexnum; j++) {
			cout << G.Edge[i][j] << "  ";
		}
		cout << endl;
	}
}

void BFS(AMGraph G) { 
	VexType c;
	cout << "请输入遍历图的起始点：\n";
	cin >> c;
	int n = locatevex(G, c); 
	if (n != -1) {
		cout << "遍历结果：" << endl;
	}
	else {
		cout << "节点信息错误！" << endl;
		return ;
	}
	queue<int>Q;
	cout << G.Vex[n] << "  ";
	visited[n] = true;
	Q.push(n); 
	while (!Q.empty()) {
		int i = Q.front(); 
		Q.pop();
		for (int j = 0; j < G.vexnum; j++) { 
			if (G.Edge[i][j] && !visited[j]) { 
				cout << G.Vex[j] << "  ";
				visited[j] = true;
				Q.push(j);
			}
		}
	}
}

int main() {
	AMGraph G;
	CreateAMGraph(G);
	print(G);
	BFS(G);
	return 0;
}

