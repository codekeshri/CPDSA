#include <iostream>
using namespace std;
#include<stack>

bool solve(string s, string t){
	
        string s1 = "", s2 = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#')if(!s1.empty())s1.pop_back();
            else s1.push_back(s[i]);
            cout << "s1 " << s1 << endl;
        }
        
         for(int i = 0; i < t.size(); i++){
            if(t[i] == '#')if(!s2.empty())s2.pop_back();
            else s2.push_back(t[i]);
            cout << "s2 " << s2 << endl;
        }
        cout << s1 << endl << s2 << endl;

        return s1 == s2;
}


int main() {
	string s, t;
	cin >> s >> t;
	bool a = solve(s, t);
    cout << a << endl;
    return 0;
}
