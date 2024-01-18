#include <bits/stdc++.h>
using namespace std;

bool solve(long long a, long long b, long long c){
	if(c >= (b - a)/2 && (b - a)%2 == 0)return true;
	if(c - 1 >= (b - a)/2 && (b - a)%2 != 0)return true;

	return false;
	
    
}

int main() {
	long long t; cin >> t;
	while(t--){
	long long l, r, k; cin >> l >> r >> k;
    if(solve(l, r, k))cout << "YES" << endl;
    else cout << "NO" << endl;
    
  	
}
    
}