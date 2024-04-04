
//lowercase to uppercase
#include <iostream>
using namespace std;

string reverse(string s, string str="", int i=0){

 // base condition 
	if(i>=s.size()) return str;
	else {
		if(s[i]>=97 && s[i]<=122)str += s[i] - 32;
		else str += s[i];
		return reverse(s, str, i+1);
	}

}


int main() {
	string s;
	cout<< "Enter string" << endl;
	cin >> s;
	cout<<"Reversed String"<< "  " << reverse(s);
}



