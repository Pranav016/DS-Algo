#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){}
};

node* createTree()
{

	int d;
	cin>>d;

	if(d==-1)
	{
		return NULL;
	}

	node* root=new node(d);
	cout<<"enter left child of "<<d<<endl;
	root->left=createTree();
	cout<<"enter right child of "<<d<<endl;
	root->right=createTree();

	return root;

}

int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int leftChildHeight=height(root->left);
	int rightChildHeight=height(root->right);

	int h=max(leftChildHeight,rightChildHeight)+1;
	return h;
}


int diameter(node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int op1=height(root->left)+height(root->right);
	int op2=diameter(root->left);
	int op3=diameter(root->right);

	int ans=max(op1,max(op2,op3));
	return ans;
}



int main()
{

	node *root=createTree();
    	cout<<diameter(root)<<endl;
    	return 0;
}














