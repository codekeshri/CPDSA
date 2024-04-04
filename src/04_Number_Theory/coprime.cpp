#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i*i <= n; i++)if(n%i == 0)return false;
	return true;
}

int main() {
    int n; cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++)cin >> arr[i];
    vector<int>ans;
	ans.push_back(arr[0]);
	int count = 0;
	for(int i = 1; i < n; i++){
		if(__gcd(arr[i-1], arr[i]) != 1){count++;ans.push_back(69899);ans.push_back(arr[i]);}
		else ans.push_back(arr[i]);
	}
	//cout << isPrime(69899) << endl;
	cout << count << endl;
	for(int i = 0; i < ans.size(); i++)cout << ans[i] << " ";

	
    
}