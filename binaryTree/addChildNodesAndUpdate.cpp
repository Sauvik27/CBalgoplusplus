//add child nodes of current node and update the addition to the current node
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


int sumOfElements(node* root){
	if(root == NULL){
		return 0;
	}
	return root->data + sumOfElements(root->left) + sumOfElements(root->right);
}


node* btAddition(node* root)
{
	if(root == NULL){
		return NULL;
	}
	int sum = sumOfElements(root);
	if(root->left != NULL || root->right != NULL){
		sum = sum - root->data;
	}
	root->data = sum;
	bin(root->left);
	bin(root->right);
	return root;
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
	node* root1 = bin(root);
	display(root1);
	return 0;
}
