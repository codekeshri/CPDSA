#include <iostream>
using namespace std;
#include <stack>


int main() {

    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    string s; cin >> s;

    stack<char>ans;
    ans.push(s[0]);
    for(int i = 1; i < s.size();){
    	//ans.push(s[i]);
    	if(!ans.empty() && s[i] != ans.top())ans.pop();
    	else ans.push(s[i]);   	

        i += 1; 
    }

    int count = 0;
    while(!ans.empty()){
    	ans.pop();
    	count++;
        //cout << count <<" ";
    }
   // cout << endl;

    cout << count  << endl;
}
}



