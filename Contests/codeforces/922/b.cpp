#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
	
	int t; 
	cin >> t;
	while(t--){
    int a, b, r; 
    cin >> a >> b >> r;
    
    int ans = 1e8;
    int y = a^b;
    
    for(int i = 0; i <= r; i++) {
    	int z = abs(y - (a^i));
    	ans = min(ans, z);
    }
    cout << ans << endl;
	}
}
