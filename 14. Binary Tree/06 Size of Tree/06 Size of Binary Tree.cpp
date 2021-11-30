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

int size(node *root)//time comp. O(n) ; space comp. O(h) ; h:height of tree (logn)
{
	if (root == NULL)
	{
		return 0;
	}

	return (1 + size(root->left) + size(root->right));
}

int main()
{
	node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);

	cout << size(root);
	return 0;
}