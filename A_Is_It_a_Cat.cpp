#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype>  
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(auto& x: s) x = tolower(x);

    char c = s[0];
    string ans = "";
    ans += c;
    for(int i=1; i < s.size(); i++){
        if(c != s[i]) {
            c = s[i];
            ans += c; 
        }
    }

    cout << (ans == "meow" ? "YES" : "NO") << endl;

  }
   
  
 return 0;
}