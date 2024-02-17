#include <iostream>
using namespace std;
#include <vector>

//define the list node data structure
struct ListNode{
	int value;
	ListNode* next;
	ListNode(int val) : value(val), next(nullptr){}
};

class Solution{
public:
	
	ListNode* reverseList(ListNode* head){
		vector<int>ans;
		ListNode* temp = head;
		
		//Method one using only values
		// while(temp){ans.push_back(temp->value); temp = temp->next;}
		// int i = ans.size() - 1;
		// temp = head;
		// while(i>=0){temp->value = ans[i]; temp = temp->next; i--;}
		
		//Method two using with pointers also
		
		ListNode* cur = head;
		ListNode* pre = nullptr;
		
		cout << endl;
		
		while(temp){
			temp = cur->next;
			cur->next = pre;
			pre = cur;
			cur = temp;
			
			cout << pre<< " ";
			
		}	
		return pre;
	}
};

void printList(ListNode* head){
	ListNode* temp = head;
	while(temp){
		cout << temp->value << " ";
		temp = temp->next;
	}
}


int main() {
	int n;
	cin >> n;
	
	ListNode* head = nullptr;
	ListNode* tail = nullptr;
	
	cout << "Enter elements of the linked list: ";
	for(int i = 0; i < n; i++){
		int val;
		cin >> val;
		if(!head)head = tail = new ListNode(val);
		else {
			tail->next = new ListNode(val);
			tail = tail->next;
		}
	}
	
	cout <<"\nOriginal:";
	printList(head);
	
	Solution solution;
	ListNode* reverseHead = solution.reverseList(head);
	//solution.reverseList(head);
	
	
	cout << "\nReversed: ";
	printList(reverseHead);
		
	
    
}

//note only data have been reversed in the above example what if we have to reverse pointers too

