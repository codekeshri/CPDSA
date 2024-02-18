#include <iostream>
#include <queue>
#include <stack>
using namespace std;


// Print queue elements without taking any space
	void printQueue(queue<int> q){
		int n = q.size();
		while(n--){
			cout << q.front() << " ";
			q.push(q.front());
			q.pop();
			
		}
		cout << endl;
	}
	
	
int main() {
	queue<int>q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(30);
	q.push(40);
	q.push(50);
	q.pop();
	cout << q.empty() << " " << q.front() << " " << q.back() << " "<< q.size() << endl;

	printQueue(q);	
	//print when removing of elements allowed space complexity O(n)
	// vector<int>ans;
	// while(q.size()){
	// 	cout << q.front() << " ";
	// 	ans.push_back(q.front());
	// 	q.pop();
	// }
    
    // cout << endl;
    // for(int i = 0; i < ans.size(); i++){
    // 	cout << ans[i] << " ";
    // 	q.push(ans[i]);
    // }
    // cout << endl;
    
    // //print when removing not allowed
    // int i = 0;
    // while(i < q.size()){
    // 	cout << q.front() << " ";
    // 	q.pop();
    // }
    
    
    // Queue Reversal
    stack<int> stack;
    while(q.size()){
    	stack.push(q.front());
    	q.pop();
    }
    
    while(stack.size()){
    	q.push(stack.top());
    	stack.pop();
    }
    
    printQueue(q);
    
    //Reverse first k elements k = 3
    int k = 3;
    cout << stack.size() << endl;
    while(k--){
    	stack.push(q.front());
    	q.pop();
    }
    
    k = 3;
    while(k--){
    	q.push(stack.top());
    	stack.pop();
    }
    
    printQueue(q);
    
    int ok = q.size() - k;
    //q.pop();
    //k = q.size() - k;
    cout << ok << endl;
    
    //ok =2;
    while(ok--){
    	q.push(q.front());
    	q.pop();
    }
    
    printQueue(q);
    
    
    
    
    
    
    return 0;
}
