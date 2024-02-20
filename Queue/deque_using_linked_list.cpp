// Deque or double ended queue means we can push/pop/top elements on both sides
// push_front and pop_front as well as push_back and pop_front
// push_front, push_back, pop_front, pop_back, start, end
// can be implemented thru array or linked list

#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *prev, *next;
	
	Node(int value){
		data = value;
		prev = nullptr;
		next = nullptr;
	}
	
};

class Dequeue
{
public:
	Node *front, *rear;
	
	Dequeue(){
		front = nullptr;
		rear = nullptr;
	}
		
	void push_front(int x){
		if(front == nullptr) {
			front = rear = new Node(x);
			return;
		}
		else{
			Node *temp;
			temp = new Node(x);
			temp->next = front;     // temp->next was nullptr
			front->prev = temp;    //front->prev was nullptr
			front = temp;
			return;
		}
	}
		
	void push_back(int x){
		if(front == nullptr) {
			front = rear = new Node(x);
			return;
		}
				
		else{
			Node *temp = new Node(x);
			rear->next = temp;
			temp->prev = rear;
			rear = temp;
			return;
				
		}
	}
		
	void pop_front(){
		if(front == nullptr)return;
		else{
			Node *temp = front->next;
				if(temp != nullptr){
					temp->prev = nullptr;
					front->next = nullptr;
				}
			delete front;
			front = temp;
				
				
		}
	}
		
	void pop_back(){
		if(front == nullptr)return;
		else{
			Node *temp = rear;
			rear = rear->prev;
			if(rear)rear->next = nullptr;
			else front = nullptr;
			delete temp;
				
		}
	}
		
		
	int start(){
		if(front == nullptr)return -1;
		else return front->data;
		
	}
		
	int end(){
		if(front == nullptr)return -1;
		else return rear->data;
	}
	
	void printDequeue(Dequeue d){
		if(d.front == nullptr)cout << "Dequeue is empty\n";
		else{
			Node *temp = d.front;
			while(temp){
				cout << temp->data << " ";
				temp = temp->next;
			}
		}
	}
};


int main() {
	Dequeue d;
	d.push_back(2);
	d.push_front(3);
	d.push_back(4);
	d.push_front(5);
	d.push_front(6);
	d.pop_back();
	cout << d.start() << endl;
	cout << d.end() << endl;
	d.printDequeue(d);
    
    return 0;
}
