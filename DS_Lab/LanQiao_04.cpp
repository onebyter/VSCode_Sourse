#include<iostream>
//#include"Test1.cpp"
#include<queue>
#include<stack>
using namespace std;

//运行时从键盘输入先序序列，创建对应二叉树T
class Bnode{
public:
    char data;
    Bnode *lchild;
    Bnode *rchild;
    Bnode(char data){
        this->data=data;
        lchild=NULL;
        rchild=NULL;
    }
};
class BiTree{
public:
    Bnode *root;
    BiTree(){
        root=NULL;
    }
    void createBiTree(Bnode *&T){
        char data;
        cin>>data;
        if(data=='#'){
            T=NULL;
        }else{
            T=new Bnode(data);
            createBiTree(T->lchild);
            createBiTree(T->rchild);
        }
    }
    void preOrder(Bnode *T){
        if(T!=NULL){
            cout<<T->data<<" ";
            preOrder(T->lchild);
            preOrder(T->rchild);
        }
    }
    void inOrder(Bnode *T){
        if(T!=NULL){
            inOrder(T->lchild);
            cout<<T->data<<" ";
            inOrder(T->rchild);
        }
    }
    void postOrder(Bnode *T){
        if(T!=NULL){
            postOrder(T->lchild);
            postOrder(T->rchild);
            cout<<T->data<<" ";
        }
    }
    void levelOrder(Bnode *T){
        queue<Bnode *> q;
        q.push(T);
        while(!q.empty()){
            Bnode *p=q.front();
            q.pop();
            cout<<p->data<<" ";
            if(p->lchild!=NULL)
                q.push(p->lchild);
            if(p->rchild!=NULL)
                q.push(p->rchild);
        }
    }
};
int main() {
	BiTree t;
	t.createBiTree(t.root);
	t.preOrder(t.root);
	cout << endl;
	t.levelOrder(t.root);
	system("pause");
}
