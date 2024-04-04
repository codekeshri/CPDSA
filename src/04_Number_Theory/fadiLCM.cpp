#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b){
    return (a*b/__gcd(a, b));
}

int main() {
    long long n; cin >> n;
    long long ans = 1e12;
    for(long long i = 1; i*i < n; i++){
    	if(n % i == 0 && lcm(i, n/i) == n)ans = min(ans, max(i, n/i));
    		
    	} 
    
    
    if(n > ans)cout << ans << " " << n/ans << endl;
    else  cout << 1 << " " << n << endl;
        

    	
}


