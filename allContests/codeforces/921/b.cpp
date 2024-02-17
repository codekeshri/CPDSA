#include <iostream>
using namespace std;


int main() {
    int t; cin >> t;
    while(t--){
    	int n, k; cin >> n >> k;
    	string s = "";
    	string str = "";
    	for(int i = 0; i < k; i++)str += char('a' + i);
    	//cout << "str" << " " << str << endl;
    	for(int i = 0; i < n; i++)s += str;
    	
        cout << s << endl;
    }
}
