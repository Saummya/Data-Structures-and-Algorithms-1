#include<bits/stdc++.h>
using namespace std;

class node
{
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

int main()
{
	node *root = new node(10);

	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);

	return 0;
}