// Doubly Linked List have two pointers next and pre and a value, so it can traverse both sides usecases - spotify, undo, redo
#include <iostream>
using namespace std;

class Node
{
public:
	int data; 
	Node *next, *pre;
	Node (int value){
		data = value;
		next = nullptr;
		pre = nullptr;
	}
	 Node();
	~ Node();
	
};

int main() {
	// insert at start, end and at any given position
	Node *head = new Node(1);   // assume a doubly linked list of 1 value
	Node *temp = new Node(11); 
	// insert temp pointer at start
	// temp->next = head;
	// temp->pre = nullptr;
	// if(head != nullptr)head->pre = temp;
	// head = temp;
	//Node *k = temp;
	//while(k){cout << k->data << " "; k = k->next;}
    // insert temp pointer at the end
    Node *k = head;
    temp->next = nullptr;
    head->next = temp;
    temp->pre = head;
    while(k){cout << k->data << " "; k = k->next;}

    
    // insert at the kth node
    // traverse till kth node 
    // perform operations
    
    
    
}
