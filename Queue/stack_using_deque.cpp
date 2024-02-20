#include<bits/stdc++.h>
using namespace std;

class Stack
{
	deque<int> d;
	
public:
	void push(int x){
		d.push_back(x);
	}
	
	void pop(){
		d.pop_back();
	}	
	
	int top(){
		if(d.empty()) return -1;
		return d.back();
	}
};


int main() {
	Stack s;
	s.push(1);
	s.push(2);
	s.pop();
	s.top();
	
	
	return 0;
}

