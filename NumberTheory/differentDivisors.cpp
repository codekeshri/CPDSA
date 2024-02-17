#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
bool sieve[N+1];

//vector<bool>sieve(N+1, true)


int main() {
    memset(sieve, true, sizeof(sieve));
    for(int i = 2; i*i <= N; i++){
    	if(sieve[i]){
    		for(int j = i*i; j <= N; j += i){
    			sieve[j] = false;
    		}
    	}
    }
    
    int t; cin >> t;
    while(t--){
    	int d; 
    	cin >> d;
    	int temp = 1 + d;
    	int ans = 1;
    	for(int i = temp; i <= N; i++){
    		if(sieve[i]){
    			ans *= i;
    			temp = i;
    			break;
    		}
    	}
    	
    	temp += d;
    	for(int i = temp; i <= N; i++){
    		if(sieve[i]){
    			ans *= i;
    			break;
    		}
    	}
    	
    	cout << ans << endl;
    }
    
}