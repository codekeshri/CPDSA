#include<iostream>
using namespace std;
#include<vector>

struct Node
{
	int data;
	Node *left;
	Node *right;
	
};

class Solution
{
public:
	
	vector<int> inOrder(Node* root){
		vector<int>ans;
		while(root){
			//left part doesn't exist
			if(!root->left){
				ans.push_back(root->data);
				root = root->right;
			}
			else{ // left part exist
				
				Node *curr = root->left;
				// left subtree not traversed
				while(curr->right && curr->right != root) curr = curr->right;
				
				if(curr->right == nullptr){
					curr->right = root; // make connection with root
					root = root->left;
				}
				else{ // left subtree is traversed
					curr->right = nullptr; //break the connection
					ans.push_back(root->data);
					root = root->right;
				}
				
				
				
			}
			
			
		}
	}
	
	
	
};