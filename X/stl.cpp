#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>

using namespace std;


int main() {
/*---------------------------------------VECTORS---------------------------------------------*/
    vector<int> v;   //vector is dynamic array can declare the size or not both ok
    				// we can not assign if size not declared, in that case we can do push_back
    for(int i = 0; i < 10; i++){
    	v.push_back(i + 1);
    }
      
    //for(int i = 0; i < 10; i++){
    // 	cout << v[i] << " ";
    // }
    // cout << endl;
    
    //iterator in set, vector, multiset
    //it is a pointer to the range of elements from starting index to end index
    
    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++)cout << *it << " ";
    	
	sort(v.begin(), v.end()); //requires algorithm header
	sort(v.rbegin(), v.rend()); //sorting in descending order, rbegin returns the reverse of begin pointer thar is end pointer and vice-versa
	reverse(v.begin(), v.end()); // it reverses the order of elements
	
	
/*------------------------------STRINGS------------------------------------------------------*/
	string str = "codekeshri";
	string str1(str);         //copy the string 
	cout << endl << "str, str1: " << str1 << endl;
	string str2(str, 1, 5);   											//starts from index 1 and gives 5 letters
	cout << "str2: " << str2 << endl;
	
	//substring
	string str3 = str.substr(1, 5);
	cout << "str3: " << str2 << endl;
	
	//compare strings
	cout << str.compare(str1) << endl;									// equal string outputs 0
	cout << str2.compare(str1) << endl; 								// lexicographically greater str2 will return +ve value and vice-versa
	cout << str1.compare(str2) << endl;
		

/*------------------------------PAIR------------------------------------------------------*/
	pair<int, char> p(1, 'a');
	cout << p.first << " " << p.second << endl;
	pair<int, char> p2;
	p2 = make_pair(2, 'b');
	cout << p2.first << " " << p2.second << endl;


/*------------------------------SET------------------------------------------------------*/
	set<int> s;	// Set uses Binary Search Red Black Tree to find, insert and delete an element in O(logn) time complexity
	int arr[]  = {1, 2, 4, 2, 1, 5, 7, 7, 3, 1};
	
	for(int i = 0; i < 10; i++){
		s.insert(arr[i]);											   // inserting values in set 
	}
		
	for(auto i : s) cout << i << " ";								  // iterating thru set
	
	set<int> :: iterator itt;
	for(itt = s.begin(); itt != s.end(); itt++)cout << *itt << " ";  // iterating thru set
	
	if(s.find(4) != s.end()) cout << "found" << endl;				// search  a value in a set


/*------------------------------MAP------------------------------------------------------*/
// js has hash map O(1) and c++ has tree map and tree set with O(logn) time complextity for crud operations
// MAP is ordered and an unordered map uses hashing O(1) like unordered map<int, int> mp; pls use unordered map in the header also	
	map<int, int> mp;
	int nums[] = {2, 4, 5, 2, 1, 4, 6, 7, 3, 7};
	
	for(int i = 0; i < 10; i++){ //initialize the map
		mp[nums[i]]++;
	}
	
	
	map<int, int> :: iterator k;
	for(k = mp.begin(); k != mp.end(); k++) cout << k->first << " => " << k->second << endl;
	

/*------------------------------QUEUE------------------------------------------------------*/

	queue<int> q; // push from back and pops from front FIFO, push(), pop(), front(), back(), empty(), size() in O(1)
				 //  if stack or queue is empty this will result in runtime error pop(), front() and back()
	for(int i = 0; i < 5; i++){
		q.push(i + 1);      // enqueue is same as push
	}
	
	cout << q.front() << " " << q.back() << endl;
	
	//sum of elements in queue
	int sum = 0;
	while(!q.empty()){
		sum += q.front();
		q.pop();			// pop() is same as dequeue() and pop() is popular
		cout << sum << " ";
	}
	cout << endl;
	//size is q.size()
	

/*------------------------------STACK------------------------------------------------------*/
	
	stack<int> st;
	
	for(int i = 0; i < 7; i++){
		st.push(i + 1);
	}
	
	cout << "Stack-Top: " << st.top() << endl;
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}


/*------------------------------DEQUE------------------------------------------------------*/
	// Double Ended QUEues, unlike queues they are not allocated contigious memory locations
	// insertion and deletion possible at both ends but more efficient these operations than in vector
	// But the random access in queue is marginally slower than vectors
	// It supports indexing as well, so its better than vector
	// push_back(), push_front(), pop_back(), pop_front(), front(), back(), size(), empty()
	// All these operations are O(1), even indexing is O(1)
	
	deque<int> d;
	
	d.push_back(1);
	d.push_front(1);
	d.pop_back();
	d.pop_back();
	d.front();
	d.back();
	
	





























/*------------------------------SINGLY LINKED LIST / FORWARD LIST------------------------------------------------------*/
	// not a preferrable data structure to use :)
	     
}
