#include <iostream>
using namespace std;

//二叉树搜索的实现
class Node {
	public:
		int value;
		Node* left;
		Node* right;
		Node() {
			value = 0;
			left = NULL;
			right = NULL;
		}
		Node(int value) {
			this->value = value;
			this->left = NULL;
			this->right = NULL;
		}
};

class BinarySearchTree {
	public:
		BinarySearchTree();
		~BinarySearchTree();
		void insert(int value);
		void remove(int value);
		bool search(int value);
		void print();

		Node* root;
		void insert(Node* Node, int value);
		void remove(Node* Node, int value);
		bool search(Node* Node, int value);
		void print(Node* Node);
};

BinarySearchTree::BinarySearchTree() {
	root = NULL;
}

BinarySearchTree::~BinarySearchTree() {
	delete root;
}

void BinarySearchTree::insert(Node* node, int value) {
	if (value < node->value) {
		if (node->left == NULL) {
			node->left = new Node(value);
		}
		else {
			insert(node->left, value);
		}
	}
	else {
		if (node->right == NULL) {
			node->right = new Node(value);
		}
		else {
			insert(node->right, value);
		}
	}
}

void BinarySearchTree::insert(int value) {
	if (root == NULL) {
		root = new Node(value);
	}
	else {
		insert(root, value);
	}
}

void BinarySearchTree::remove(Node* node, int value) {
	if (node == NULL) {
		return;
	}
	if (value < node->value) {
		remove(node->left, value);
	}
	else if (value > node->value) {
		remove(node->right, value);
	}

	else {
		if (node->left == NULL && node->right == NULL) {
			delete node;
			node = NULL;
		}
		else if (node->left == NULL) {
			Node* temp = node;
			node = node->right;
			delete temp;
		}
		else if (node->right == NULL) {
			Node* temp = node;
			node = node->left;
			delete temp;
		}
		else {
			Node* temp = node->right;
			while (temp->left != NULL) {
				temp = temp->left;
			}
			node->value = temp->value;
			remove(node->right, temp->value);
		}
	}
}

void BinarySearchTree::remove(int value) {
	remove(root, value);
}

bool BinarySearchTree::search(Node* Node, int value) {
	if (Node == NULL) {
		return false;
	}
	if (value < Node->value) {
		return search(Node->left, value);
	}
	else if (value > Node->value) {
		return search(Node->right, value);
	}
	else {
		return true;
	}
}

bool BinarySearchTree::search(int value) {
	return search(root, value);
}

void BinarySearchTree::print(Node* Node) {
	if (Node == NULL) {
		return;
	}
	print(Node->left);
	cout << Node->value << " ";
	print(Node->right);
}

void BinarySearchTree::print() {
	print(root);
}

int main() {
	BinarySearchTree bst;
	bst.insert(10);
	bst.insert(5);
	bst.insert(15);
	bst.insert(3);
	bst.insert(100);
	bst.insert(7);
	bst.insert(13);
	bst.insert(17);
	bst.insert(11);
	bst.insert(14);
	bst.insert(16);
	bst.insert(18);
	bst.insert(19);
	bst.insert(20);
	bst.insert(21);
	bst.insert(22);
	bst.insert(23);
	bst.insert(24);
	bst.insert(25);
	bst.insert(26);
	bst.insert(27);
	bst.insert(28);
	bst.insert(29);
	bst.insert(30);
	bst.insert(31);
	bst.insert(32);
	bst.insert(33);
	bst.insert(34);
	bst.insert(35);
	bst.insert(36);
	bst.insert(37);
	bst.insert(38);
	bst.insert(39);
	bst.insert(40);
	bst.insert(41);
	bst.insert(42);
	bst.insert(43);
	bst.insert(44);
	bst.insert(45);
	bst.insert(46);
	bst.insert(47);
	bst.insert(48);
	bst.insert(49);
	bst.insert(50);
	bst.insert(51);
	bst.insert(52);
	bst.insert(53);
	bst.insert(54);
	bst.insert(55);
	bst.insert(56);
	bst.insert(57);
	bst.insert(58);
	bst.insert(59);
	bst.insert(60);
	bst.insert(61);
	bst.insert(62);
	bst.insert(63);
	bst.insert(64);
	bst.insert(65);
	bst.insert(66);
	bst.insert(67);
	bst.print();
	return 0;
}
