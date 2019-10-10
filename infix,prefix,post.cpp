#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};
Node* root= NULL;
main()
{
	int post[10];
	int in[10];
	int pre[10];
	
	cout << "Enter post: ";
	scanf("%s",post);
	cout << "\nEnter in: ";
	scanf("%s",in);
	
	get_tree(post,in);
	
}

get_tree(int* post, int* in)
{
	i1=i2=0;
	j1=j2=n-1;
	root = post[n-1];
	
}
