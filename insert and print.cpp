#include<iostream>
#include<stack>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};
Node* root= NULL;
void insert(int);
void print_post(Node*);
Node* insertr(int,Node*);
void print_pre(void);
main()
{
	int n;
	cout << "Enter the no. of elements: ";
	cin>>n;
	cout << "Enter the elements: ";
	for (int i=0; i<n ; i++)
	{
		int data;
		cin>>data;
		root = insertr(data,root);
	}
	cout << "\n\n\nHere is what you have entered: ";
	print_pre();


}

void insert(int data)
{
	Node* temp1 = root;
	if (root==NULL)
	{
		Node* temp = new Node;
		temp->right = NULL;
		temp->left = NULL;
		temp->data = data;
		root = temp;
		return;		
	}
		while( 1 )
		{
			if ( data > temp1->data && temp1->right==NULL)
			{
				Node* temp = new Node;
				temp->right = NULL;
				temp->left = NULL;
				temp->data = data;
				temp1->right = temp;
				break;
			}
			else if( data <= temp1->data && temp1->left==NULL ) 
			{
				Node* temp = new Node;
				temp->right = NULL;
				temp->left = NULL;
				temp->data = data;
				temp1->left = temp;
				break;
			}
			//now i have to iterate temp1 accordingly
			if ( data > temp1->data)
			temp1 = temp1->right;
			else if ( data <= temp1->data )
			temp1 = temp1->left; 
		}
		return;
}
Node* insertr(int data, Node* temp1)
{
	if (temp1==NULL)				//base condition
	{
		Node* temp = new Node;
		temp->right = NULL;
		temp->left = NULL;
		temp->data = data;
		return temp;		
	}
	if ( data > temp1->data)			//Divide step
	temp1->right = insertr(data,temp1->right);
	else
	temp1->left = insertr(data,temp1->left);
	return temp1;						//LOOK THIS OUT. I WAS FACING A PROBLEM 	, weather return type should be 
										//void or node*
}
/* The conclusion we draw from the above made 2 functions is that recrusion need a temp varible
or a iterative varible in as arguments. and it is more intutive.
simple loops need only data as argument
*/
void print_post(Node* temp)
{
	if(temp==NULL)return;
	print_post(temp->left);
	print_post(temp->right);
	cout << temp->data <<" ";
}

void print_pre() 				//i think i wont be able to make it without using stack
{
	int flag=0, flg=0;
	stack <Node*> S;
	Node* temp = root;
	if(temp==NULL)return;
	
	while ( 1 )
	{	
		cout << temp->data <<" ";
		if(temp->right != NULL)
		{	S.push(temp->right); flg=1;}
		
		if(temp->left != NULL && flag==0)
		temp = temp->left;
		else
		{
			if(S.empty())break;
			temp = S.top();
			S.pop();
			flag=1;
		}
		if(S.empty()&&flg==1)
		break;
	}
	
	return;
}
