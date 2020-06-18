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
	cout<<"enter left child of "<<d<<" : ";
	root->left=createTree();
	cout<<"enter right child of "<<d<<" : ";
	root->right=createTree();

	return root;

}
int i=0;
int pre[]={1,2,4,8,5,9,3,6,7};

node* builtTree(int *in,int s,int e)
{
	if(s>e)
	{
		return NULL;
	}

	int key=pre[i];
	i++;
	int k=-1;
	for(int j=s;j<=e;j++)
	{
		if(in[j]==key)
		{
			k=j;
			break;
		}
	}
	node* root=new node(key);
	root->left=builtTree(in,s,k-1);
	root->right=builtTree(in,k+1,e);

	return root;
}

int main()
{
 
	//node *root=createTree();

	int in[]={8,4,2,9,5,1,6,3,7};
	int n=sizeof(in)/sizeof(int);

	node* root=builtTree(in,0,n-1);
}