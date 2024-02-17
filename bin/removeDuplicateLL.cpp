// remove duplicates from a sorted linked list
// note we cannot access elements of a vector without resizing it
#include <iostream>
using namespace std;
#include <map>
#include <vector>

class Node {
	public:
		int value;
		Node *next, *pre;
		Node(int data){
			value = data;
			next = nullptr;
			pre = nullptr;
			
		}
};


int main() {
	int n; cin >> n;
	vector<int>dll(n);
	vector<int>arr;
	map<int, int>mp;
	Node *head = new Node(1); 
	Node *cur = head;
	Node *prev = nullptr;
	
	for(int i = 0; i < n; i++){
		cin >> dll[i];
		Node *temp = new Node(dll[i]);
		
		auto it = mp.find(dll[i]);
		if(it == mp.end()){mp[dll[i]]++; arr.push_back(dll[i]);}
		//if(mp[dll[i]] == 1) arr.push_back(dll[i]);                 // second way
		
		cur->pre = prev;
		cur->next = temp;
		prev = cur;
		cur = cur->next;		
	}
		
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	// printing our node
	Node *temp = head;
	while(temp){
		cout << temp->value << " ";
		temp = temp->next;
	}
    
    // freeing memory it's advisable with linked list
    temp = head;
    while(temp){
    	Node *nextNode = temp->next;
    	delete temp;
    	temp = nextNode;
    }
}
