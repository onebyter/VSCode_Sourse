#include<iostream>
#include<stack>
#include<queue>
using namespace std;

struct node {
	char data;
	node* left;
	node* right;
	node(): data(NULL), left(NULL), right(NULL) {}
	node(char c): data(c), left(NULL), right(NULL) {}
};


class BTree {
	public:
		node* root;
		BTree(): root(NULL) {}
		void creat() {
			creat(this->root);
		}

		void creat(node*& cur) {
			char c;
			cin >> c;
			if (c == '#') {
				cur = NULL;
			}
			else {
				cur = new node(c);
				creat(cur->left);
				creat(cur->right);
			}
		}

		void postorder() {
			postorder(this->root);
			cout << endl;
		}
		void postorder(node* cur) {
			if (cur) {
				postorder(cur->left);
				postorder(cur->right);
				cout << cur->data << " ";
			}
		}

		void leverorder() {
			leverorder(root);
		}
		void leverorder(node* root) {
			queue<node*> q;
			q.push(root);
			while (!q.empty()) {
				node* cur = q.front();
				q.pop();
				cout << cur->data << " ";
				if (cur->left) {
					q.push(cur->left);
				}
				if (cur->right) {
					q.push(cur->right);
				}
			}
			cout << endl;
		}

		void inorder() {
			inorder(root);
		}
		void inorder(node* root) {
			stack<node*> s;
			node* cur = root;
			while (cur || !s.empty()) {
				if (cur) {
					s.push(cur);
					cur = cur->left;
				}
				else {
					cur = s.top();
					s.pop();
					cout << cur->data << " ";
					cur = cur->right;
				}
			}
			cout << endl;
		}
};

int main() {
	BTree t;
	t.creat();
	t.leverorder();
	t.inorder();
	t.postorder();
	return 0;
}

