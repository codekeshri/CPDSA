// Implement Queue using Linked List
// first make Node class then Queue class 

#include <iostream>
using namespace std;


class Node{
public:
	int data;
	Node *next;
	
	Node(int value){
		data = value;
		next = nullptr;
	}
	
};

class Queue{
	public:
		Node *front, *rear;
		
		Queue(){
			front = rear = nullptr;
		}
		
		bool isEmpty(){
			return front == nullptr;
		}
		
		//push the element in the queue
		void push(int x){
			if(isEmpty()){
				front = new Node(x);
				rear = front;
				return;
				
			}else{
				rear->next = new Node(x);
				rear = rear->next;
				return;
			}
		}
		
		//pop out the element from front in a queue
		void pop(){
			if(isEmpty()){
				cout << "Segmentation Error\n";
				return;
			}else{
				Node *temp = front;
				front = front->next;
				delete temp;
				
			}
			
		}
		
		//get the element at the front of the queue
		int top(){
			if(isEmpty()){
				cout << "Segmentation error\n";
				return -1;
			}else{
				return front->data;
			}
		}
		
};


int main() {
	Queue q;
    q.push(11);
    q.push(12);
    q.pop();
    int top = q.top();
    cout << top << endl;
    q.pop();
    q.pop();
    top = q.top();
    cout << top << endl;
    
    return 0;
}

