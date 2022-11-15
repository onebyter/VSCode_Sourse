#include <iostream>
using namespace std;


typedef struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int data) : data(data), left(NULL), right(NULL) {}
} * BSTree;

void insert(BSTree &root, int data) {
    if (root == NULL)
        root = new Node(data);
    else if (data < root->data) {
        insert(root->left, data);
    } else {
        insert(root->right, data);
    }
}

BSTree createBSTree() {
    BSTree root = NULL;
    int data;
    cout << "Enter 10 datas:\n";
    for (int i = 0; i < 10; i++) {
        cin >> data;
        insert(root, data);
    }
    return root;
}

void inorder(BSTree root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    BSTree root = createBSTree();
    cout << "Result:";
    inorder(root);
    cout << endl;
    system("pause");
    return 0;
}
