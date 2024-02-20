#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
	
	int64_t t; 
	cin >> t;
	while(t--){
    int64_t a, b, r; 
    cin >> a >> b >> r;
    
    int64_t ans = 1e8;
    
    
    for(int64_t i = 0; i <= r; i++) {
    	int64_t z = abs((a^i) - (b^i));
    	ans = min(ans, z);
    }
    cout << ans << endl;
	}
}
