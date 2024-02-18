// Implement Stack using queue empty, push, pop, top
// we need two queues, push elements in which there is already element
// push all elements in q1
// for pop take all elements of q1 in q2 leaving last one that will be popped
// again we can push in q2
// now for pop take all elements from q2 to q1 leaving last one that will be popped


#include <iostream>
using namespace std;
#include <queue>


class MyStack
{
	queue<int> q1;
	queue<int> q2;
	
public:
	bool empty(){
		return q1.empty() && q2.empty();
	}
	
	void push(int x){
		if(empty())q1.push(x);
		else{
			if(q1.empty())q2.push(x);
			else q1.push(x);
		}
	}
	
	int pop(){
		if(empty())return 0;
		else{
			if(q1.empty()){
				// bring all elements from q2 to q1 leaving last
				// and pop that
				while(q2.size() > 1){
					q1.push(q2.front());
					q2.pop();
				}
				int element = q2.front();
				q2.pop();
				return element; 
				
			}
			
			else {
				while(q1.size() > 1){
					q2.push(q1.front());
					q1.pop();
				}
				int element = q1.front();
				q1.pop();
				return element;
			}
		}
	}
	
	
	int top(){
		if(empty())return 0;
		else if(q1.empty())return q2.back();
		else return q1.back();
	}
	
	
	
	MyStack();
	~MyStack();
	
};


int main() {

    
    return 0;
}


