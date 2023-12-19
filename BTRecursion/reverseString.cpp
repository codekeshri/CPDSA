
//reverse a string using recursion
#include <iostream>
using namespace std;

string reverse(string s, string str="", int i=0){

 return i>=s.size() ? str : reverse(s, str = s[i]+str, i+1);

}


int main() {
	string s;
	cout<< "Enter string" << endl;
	cin >> s;
	cout<<reverse(s);
}












































//base condition 
	// if(i>=s.size()) return str;
	// else {
	// 	str = s[i]+str;
	// 	return reverse(s, str, i+1);
	// }
	