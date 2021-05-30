//BFS(breadth first search traversal)(complexity O(n))level order traversal
//we need a queue to do this
#include <bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node *left;
	node *right;
	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};
node *buildbt(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	node *root = new node(d);
	root->left = buildbt();
	root->right = buildbt();
	return root;
}

void bfs(node* root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* f = q.front();
		cout<<f->data<<" ";
		q.pop();
		if(f->left){
			q.push(f->left);
		}
		if(f->right){
			q.push(f->right);
		}
	}
}

int main(){
	node* root = buildbt();
	bfs(root);
}
