

// Deque implementation using array
// we will have to make a circular array for optimized operations
// Deque has a definite size as we are using array
// push_front, push_back, pop_front, pop_back, start, end elements
// so for push (rear + 1) % size == front gives full condition
// and for push_front, front = (front - 1 + size) % size 
// initially front and rear both are -1
// for push_back rear++
// for push_front front--
// for pop_back rear--
// for pop_front front++

#include <iostream>
using namespace std;
#include <vector>

class Deque
{
	int front, rear, size;
	int *arr;
public:
	Deque(int n){
		size = n;
		arr = new int[n];
		front = rear = -1;
	}
	
	bool isEmpty(){
		return front == -1;
	}
	
	bool isFull(){
		return (rear+1)%size == front;
	}
	
	void push_front(int x){
		if(isFull()) cout << "Deque is full\n";
		else {
			if(isEmpty()){
				front = rear = 0;
				arr[front] = x;
			}
			else{
				front = (front - 1 + size) % size;
				arr[front] = x;
				
			}
		}
		
	}
	
	void push_back(int x){
		if(isFull()) cout << " Deque is full\n";
		else{
			if(isEmpty()){
				front = rear = 0;
				arr[rear] = x;
			}
			else{
				rear = (rear + 1) % size;
				arr[rear] = x;
			}
		}
	}
	
	void pop_front(){
		if(isEmpty())cout << " Deque is empty\n";
		else{
			if(size == 1){
				front = rear = -1;
			}
			else front = (front + 1) % size;
			
		} 
	}
	
	void pop_back(){
		if(isEmpty()) cout << " Deque is empty\n";
		else{
			if(size == 1)front = rear = -1;
			else rear = (rear - 1 + size) % size;
		}
	}
	
	int start(){
		if(isEmpty()) cout << " Deque is empty\n";
		else return arr[front];
	}
	
	int end(){
		if(isEmpty()) cout << " Deque is empty\n";
		else return arr[rear];
	}
	
	void printDeque(int n){
		
		for(int i = front; i <= rear; i++){
			cout << arr[i] << " "; 
		}
		
	}
	
};



int main() {
	Deque d(5);
	d.push_back(2);
	d.push_front(3);
	d.push_back(4);
	d.push_front(5);
	d.push_front(6);
	d.pop_back();
	cout << d.start() << endl;
	cout << d.end() << endl;
	//d.printDeque(d(5));

    
    return 0;
}




