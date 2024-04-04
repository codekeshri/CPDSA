#include<bits/stdc++.h>
using namespace std;

int main() {
	
	 string s;
  cin >> s;
  stack <char>p;
        for(auto i: s){
            if(!p.empty()){
            if(i == ')' && p.top() == '(')p.pop();
            else p.push(i);
            }
            else p.push(i);
            cout << p.top() << endl;
        }

        cout << p.size() << endl;
	return 0;
}

arr[6];
arr = [11, 9, 12, 1, 11, 3, 4]-------------stack = [2, 4,]     

[0, 1, 2, 3, 4, 5]
ans = [12, 12, -1, 11, 4, -1] answer;

[]
