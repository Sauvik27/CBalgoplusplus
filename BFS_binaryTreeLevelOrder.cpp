//BFS(breadth first search traversal)(complexity O(n))level order traversal
//we need a queue to do this
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

void printKthLevel(node* root, int k){
	if(root == NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
	}
	printKthLevel(root->left,k-1);
	printKthLevel(root->right,k-1);
	return;
}
void printAllLevels(node* root, int height){
	if(root == NULL){
		return;
	}
	for(int i=1;i<=height;i++){
		cout<<"\n";
		printKthLevel(root, i);
	}
}

void display(node* root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	display(root->left);
	display(root->right);
}

void bfs(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* f = q.front();
		if(f==NULL){
			cout<<"\n";
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<f->data<<",";
			q.pop();
			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			}
		}
	}
	return;
}

int main(){
	node* root = binaryTree();
	// display(root);
	// int h = height(root);
	// printAllLevels(root, h);
	bfs(root);

	return 0;
}
