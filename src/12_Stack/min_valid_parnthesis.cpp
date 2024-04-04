#include<iostream>
#include <stack>
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
        }

        cout << p.size() << endl;
}

