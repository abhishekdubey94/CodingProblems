#include <iostream>
using namespace std;

// Data structure to store a Binary Tree node
struct Node
{
	int data;
	Node *left, *right;

	Node(int data)
	{
		this->data = data;
		this->left = this->right = nullptr;
	}
};

// Recursive function to perform post-order traversal of the tree
void postorder(Node *root)
{
	if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);

    cout<<root->data<<" ";
}

int main()
{
	/* Construct below tree
              1
            /   \
           /     \
          2       3
         /      /   \
        /      /     \
       4      5       6
             / \
            /   \
           7     8
	*/

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->right->left = new Node(5);
	root->right->right = new Node(6);
	root->right->left->left = new Node(7);
	root->right->left->right = new Node(8);

	postorder(root);

	return 0;
}