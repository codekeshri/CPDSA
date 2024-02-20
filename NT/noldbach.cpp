#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i*i <= n; i++)if(n%i == 0)return false;
	return true;
}


int main() {
    int n, k; cin >> n >> k;
    vector<int>a;
    for(int i = 2; i <= n; i++)if(isPrime(i))a.push_back(i);
	//for(int i = 0; i < a.size(); i++)cout << a[i] << " ";

	int count = 0;   
	//cout << endl; 
	for(int i = 1; i < a.size(); i++){
		int p = a[i]+a[i-1]+1;
		if(isPrime(p) && p <= n)count++;
		//cout << count << " ";
	}	
	
	if(count >= k)cout << "YES" << endl;
	else cout << "NO" << endl;
}