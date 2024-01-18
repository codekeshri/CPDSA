#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	  int n;  cin >> n; 
	  string s; cin >>s;
	  string ans = "";
	  int i;
	  for(i = 0; i < n - 1; i++){
	      if(s[i+1] < s[i]){
                break;
	      }
	      else ans += s[i];  
	      
	  }
	  //cout << ans << endl;
	  i++;
	  while(i < n){
	      ans += s[i];
	      i++;
	  }
	    
	    cout << ans << endl;
	}

}
