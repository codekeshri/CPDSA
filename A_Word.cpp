#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  int lcount = 0, ucount = 0;

  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z') lcount++;
    if(s[i] >= 'A' && s[i] <= 'Z') ucount++;
  }

  if(lcount >= ucount) {
   for(auto& x: s)x = tolower(x);
  }else{
    for(auto& x: s)x = toupper(x);
  }

  cout << s;
   
  
 return 0;
}