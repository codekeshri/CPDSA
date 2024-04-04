
//check palindrome using recursion
#include <iostream>
using namespace std;

bool isPalindrome(string s, int i){
	
	return i>s.size()/2 ? true : s[i]==s[s.size()-i-1] && isPalindrome(s, i+1);

}


int main() {
	string s;
	cout<< "Enter string" << endl;
	cin >> s;
	cout<<isPalindrome(s, 0);
}
