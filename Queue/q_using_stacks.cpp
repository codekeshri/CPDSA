#include <iostream>
using namespace std;
#include <stack>

// Implementation of Queue using Stack
class Queue
{
	stack <int> st1; //to keep pushed elements
	stack <int> st2; // to keep popped elements
public:
	bool isEmpty(){
		return st1.empty() && st2.empty();
	}
	
	void push(int x){
		st1.push(x);
	}
	
	int pop(){
		if(isEmpty())return 0;
		else {
			if(!st2.empty()){
				int element = st2.top();
				st2.pop();
				return element;
			}
			else {
				//push elements from st1 to st2
				while(!st1.empty()){
					st2.push(st1.top());
					st1.pop();
				}
				
				int element = st2.top();
				st2.pop();
				return element;
			}
		}
		
	}
	
	int peek(){
		if(isEmpty())return 0;
		// top element is always present in stack 2
		
		if(!st2.empty())return st2.top();
		else{
			while(!st1.empty()){
				st2.push(st1.top());
				st1.pop();
			}
			
			return st2.top();
			
		}
		
	}
	
	
	
	Queue();
	~Queue();
	
};



int main() {

    
    return 0;
}
