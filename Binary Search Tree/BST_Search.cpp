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

void searchBST(node* root, int searchData){
	if(root == NULL){
		cout<<"Not found";
	}
	if(searchData == root->data){
		cout<<"Found";
		return;
	}
	if(searchData <= root->data){
		searchBST(root->left,searchData);
	}
	else{
		searchBST(root->right,searchData);
	}
}


void BTusingbfs(node* root){
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
			cout<<f->data;
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

node* insertInBST(node *root, int data)
{
	if(root == NULL){
		return new node(data);
	}
	if(data <= root->data){
		root->left = insertInBST(root->left,data);
	}
	else{
		root->right = insertInBST(root->right,data);
	}
	return root;
}
node* build(){
	int d;
	cin>>d;
	node* root = NULL;
	while(d!=-1){
		root = insertInBST(root,d);
		cin>>d;
	}
	return root;
}

void inorder(node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<",";
	inorder(root->right);
}


int main(){

	node* root = build();
	BTusingbfs(root);
	searchBST(root, 7);
}
