//需要理解什么是先序创建树，所有的创建过程都是先序遍历。
//写树的节点遍历的时候首先需要判空
//if(T){}
//其次开始对子树进行递归访问
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;

char in;
int leaf;

class Tree {
public:
	char info;
	Tree* left = nullptr;
	Tree* right = nullptr;
};

Tree* create(Tree* T) {
	cin >> in;
	if (in == '#') {
		T = nullptr;
	}
	//else if (in == '\n') {
	//	cout << 222 << endl;
	//	return;
	//}
	else {
		T = new Tree;
		T->info = in;
		T->left = create(T->left);
		T->right = create(T->right);
	}
	return T;
}
inline void space(int num) {
	while (num--) {
		cout << " ";
	}
}
void print(Tree* T, int level, bool l = false, bool r = false) {
	cout << T->info << endl;
	if (T->left) {
		//左子结点非空
		l = true;
		space(4 * (level+1));
		print(T->left, level+1);
	}
	if (T->right) {
		//左子结点非空
		r = true;
		space(4 * (level + 1));
		print(T->right, level + 1);
	}
	if (!(l | r)) {
		leaf++;
	}
}
void preOrder(Tree* T) {
	if (T)//节点非空
	{
		cout << T->info;
		preOrder(T->left);
		preOrder(T->right);
	}
	else return;
}
void inOrder(Tree* T) {
	if (T) {
		inOrder(T->left);
		cout << T->info;
		inOrder(T->right);
	}
	else return;
}
void postOrder(Tree* T) {
	if (T) {
		postOrder(T->left);
		postOrder(T->right);
		cout << T->info;
	}
	else return;
}
void swapTree(Tree* T) {
	if (T) {
		Tree* box = nullptr;
		box = T->left;
		T->left = T->right;
		T->right = box;
		swapTree(T->left);
		swapTree(T->right);
	}
}

int main() {
	Tree* T = new Tree;
	T = create(T);
	cout << "BiTree" << endl;
	print(T, 0);
	cout << "pre_sequence  : ";
	preOrder(T);
	cout << endl;
	cout << "in_sequence  : ";
	inOrder(T);
	cout << endl;
	cout << "post_sequence  : ";
	postOrder(T);
	cout << endl;
	cout << "Number of leaf: " << leaf << endl;
	swapTree(T);
	cout << "BiTree swapped" << endl;
	print(T, 0);
	cout << "pre_sequence  : ";
	preOrder(T);
	cout << endl;
	cout << "in_sequence  : ";
	inOrder(T);
	cout << endl;
	cout << "post_sequence  : ";
	postOrder(T);
	cout << endl;
	return 0;
}