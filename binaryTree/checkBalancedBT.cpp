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


class HBPair{
	int height;
	bool balance;
}

HBPair heightBalanceTree(node* root){
	HBPair p;
	if(root == NULL){
		p.balance = true;
		p.height = 0;
		return p;
	}

	HBPair left = heightBalanceTree(root->left);
	HBPair right = heightBalanceTree(root->right);

	p.height = max(left.height,right.height);

	if(abs(left.height-right.height)<=1 && left.balance && right.balance){
		p.balance = true;
	}
	else{
		p.balance = false;
	}
	return p;
}

int main(){
	node* root = binaryTree();
	// display(root);
	// int h = height(root);
	// printAllLevels(root, h);
	// bfs(root);
	// cout<<"Number of nodes in Binary Tree: "<<noOfNodes(root)<<"\n";
	// cout<<"Sum of elements in Binary tree: "<<sumOfElements(root)<<"\n";
	// cout<<"diameter of binary tree is: "<<diameter(root)<<"\n";
	// node* root1 = bin(root);
	// display(root1);
	if(heightBalanceTree(root).balance == true){
		cout<<"tree is height balanced";
	}
	else{
		cout<<"not balanced";
	}
	return 0;
}
