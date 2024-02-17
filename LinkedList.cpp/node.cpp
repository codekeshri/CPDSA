#include <iostream>
using namespace std;

class  Node{
public:
	int data;
	Node *next;
	
	 Node(int value){
	 	data = value;
	 	next = NULL;
	 };
	~ Node(){};
	
};



int main() {
	
	Node *Head, *Tail;
	Tail = Head = NULL;
	
	int arr[]= { 2, 4, 6, 8, 10};
//---------------------------------------------------------------------//

	//insert the node at the begining	
	// for(int i = 0; i < 5; i++){
// 	//LinkedList exists
// 	if(Head == NULL)Head = new Node(arr[i]);
// 	//LinkedList doesn't exist
// 	else {
// 		Node *temp;
// 		temp = new Node(arr[i]);
// 		temp->next = Head;
// 		Head = temp;
		
// 	}
// }

// 	Node *temp = Head;
// 	while(temp){
// 		cout << temp->data << " ";
// 		temp = temp->next;
// 	}


//---------------------------------------------------------------------//
	//Insert the value at the end
	for(int i = 0; i < 5; i++){
	//If LinkedList does not exist
		if(Head == NULL){
			Head = new Node(arr[i]);
			Tail = Head;
		}
		//If it exists
		else {
			Tail->next = new Node(arr[i]);
			Tail = Tail->next; 
		}
	}
	
	
	Node *temp;
	temp = Head;
	while(temp){
		cout << temp->data << " ";
		temp = temp->next;
	}


    
}

