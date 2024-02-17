#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n <= 1)return false;
	for(int i = 2; i*i <= n; i++)if(n%i == 0)return false;
	return true;
}

int main() {
	int t; cin >> t;
	while(t--){
		long long int n;  cin >>n;
		long long int ans = sqrt(n);
		if(ans*ans == n && isPrime(ans))cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    
}
