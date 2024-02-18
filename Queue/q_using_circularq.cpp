#include <iostream>
using namespace std;

//implement queue using circular array, circular queue

class Queue
{
	int *arr;
	int front, rear, size;
	
public:
	Queue(int n){
		arr = new int[n];
		size = n;
		front = rear = -1;
	}
	
	bool isEmpty(){
		return front == -1;
	}
	
	bool isFull(){
		return (rear+1)%size == front; //rear == size - 1 in normal queue
	}
	
	void push(int x){
		if(isFull()){
			cout << "Queue overflow\n"; 
			return;
		}
		else {
			if(isEmpty()){
				front = rear = 0;
				arr[front] = x;
				return;
			}
			
			else {
				rear = (rear + 1)%size;
				arr[rear] = x;
			}
		}
	}
	
	void pop(){
		if(isEmpty()){
			cout << "Segmentation Error\n";
			return;
		}
		else if(front == rear) {
			front = rear = -1;
		}
		else{
			front = (front + 1)%size;
		}
	}
	
	
	//get the starting element or the top element
	int top(){
		if(isEmpty()){
			cout << "Segmentation Error\n";
			return -1;
		}
		else {
			return arr[front];
		}
	}
	
};



int main() {

    Queue q(5);
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
