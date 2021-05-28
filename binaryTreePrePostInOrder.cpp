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
	cout<<root->data;
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
void printPostOrder()
{
	if(root==NULL)
	{
		return;
	}
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}
int main(){
	node* root = buildBT();
	printPreOrder(root);
	cout<<"\n";
	printPostOrder(root);
	cout<<"\n";
	printInOrder(root);

	return 0;
}
