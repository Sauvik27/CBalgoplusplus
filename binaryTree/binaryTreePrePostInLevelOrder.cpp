#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node *left;
	node *right;
	node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};
node* buildBT()
{
	int d;
	cin>>d;
	if(d == -1)
	{
		return NULL;
	}
	node* root = new node(d);
	root->left = buildBT();
	root->right = buildBT();
	return root;
}
void printPreOrder(node *root){
	if(root == NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	printPreOrder(root->left);
	printPreOrder(root->right);
}
void printInOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	printInOrder(root->left);
	cout<<root->data<<" ";
	printInOrder(root->right);
}
void printPostOrder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

int height(node *root){
	if(root==NULL){
		return 0;
	}
	int leftSubtree = height(root->left);
	int rightSubtree = height(root->right);
	return max(leftSubtree,rightSubtree)+1;
}
void printkthLevel(node* root,int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	printkthLevel(root->left,k-1);
	printkthLevel(root->right,k-1);
}
void printAllLevels(node* root){
	int H=height(root);
	for(int i=0;i<H;i++){
		printkthLevel(root,i);
		cout<<endl;
	}
}
int main(){
	node* root = buildBT();
	printPreOrder(root);
	cout<<"\n";
	printPostOrder(root);
	cout<<"\n";
	printInOrder(root);
	cout<<"\n";
	cout<<height(root)<<"\n";
	printAllLevels(root);
	return 0;
}
