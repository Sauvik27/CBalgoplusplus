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

int noOfNodes(node* root){
	if(root==NULL){
		return 0;
	}
	return 1+noOfNodes(root->left)+noOfNodes(root->right);
}
int sumOfelements(node* root){
	if(root==NULL){
		return 0;
	}
	return root->data + sumOfelements(root->left) + sumOfelements(root->right);
}
int main(){
	node* root = buildbt();
	int n =noOfNodes(root);
	cout<<"\n"<<n<<"\n";
	int sum = sumOfelements(root);
	cout<<"Sum is "<<sum;
}
