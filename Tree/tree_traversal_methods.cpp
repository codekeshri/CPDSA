// traveral in a binary tree
// pre-order traversal NLR (print node first and then traverse left)
// in-order traversal LNR (traverse left first then print node)
// post-order traversal LRN (N-Node) (print all left and right first then print node)

#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *left, *right;
	
	Node(int value){
		data = value;
		left = right = nullptr;
		
	}
		
};

// function for pre order traversal
// print node
// go left
// go right

void preorder(Node *root){
	if(root == nullptr)return;
	
	cout << root->data;                   //print root node first
	preorder(root->left);
	preorder(root->right);		
}


void inorder(Node *root){
	if(root == nullptr)return;
	
	inorder(root->left);
	cout << root->data;
	inorder(root->right);
}


void postorder(Node *root){
	if(root == nullptr)return;
	
	postorder(root->left);
	postorder(root->right);
	cout << root->data;
}



int main() {

    
    return 0;
}



