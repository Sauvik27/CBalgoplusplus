//O(n2)

#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

int height(node* root){
	if(root == NULL){
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls,rs) + 1;
}

int diameter(node* root){
	if(root == NULL){
		return 0;
	}
	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1, max(op2,op3));
}


node* binaryTree(){
	int data;
	cin>>data;
	if(data == -1){
		return NULL;
	}
	node* root = new node(data);
	root->left = binaryTree();
	root->right = binaryTree();
	return root;
}



void display(node* root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	display(root->left);
	display(root->right);
}

int main(){
	node* root = binaryTree();
	// display(root);
	// int h = height(root);
	// printAllLevels(root, h);
	// bfs(root);
	cout<<"Number of nodes in Binary Tree: "<<noOfNodes(root)<<"\n";
	cout<<"Sum of elements in Binary tree: "<<sumOfElements(root)<<"\n";
	cout<<"diameter of binary tree is: "<<diameter(root)<<"\n";
	return 0;
}
