#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
	if( n == 1)return false;
	for(int i = 2; i < n; i++){
		if(n%i == 0)return false;
	}
	
	return true;
}


vector<int> f(int arr[], int n){
		vector<int>ans(n);
    	bool flag = true;
    	for(int i = 1; i <= n; i++){
    		for(int j = i + 1; j <= n; j++){
    			if(isPrime(arr[i]+arr[j]) == false){
    				ans.push_back(arr[j]);
    				flag = false;
    				continue;
    			}
    			flag = true;
    		}
    		if(flag)return vector<int>{-1};
    		
    	}
    	return ans;
    }
    	


int main() {
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int arr[n];
    	for(int i = 1; i <= n; i++)cin >> arr[i];
    	vector<int>ok;
    	ok = f(arr, n);
    	for(int i = 1; i <= ok.size(); i++)cout << ok[i] <<" ";

    	

    	
    }
    
}