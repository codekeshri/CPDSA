#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n){
	if(n<=1)return false;
	for(int i = 2; i*i <= n; i++)if(n%i == 0)return false;
	return true;
}
 
int main() {
 int n, m; cin >> n >> m;
 vector<vector<int>>a(n, vector<int>(m));
 for(int i = 0; i < n; i++)for(int j = 0; j < m; j++)cin >> a[i][j];
 
 int ans = 100000;
 for(int i = 0; i < n; i++){
 	int count = 0;
 	for(int j = 0; j < m; j++){
 		if(!isPrime(a[i][j])){
 			int k = 0;
 			while(!isPrime(a[i][j]+k)){count += 1;k++;}
 		}
 	}
 	ans = min(ans, count);
 }
 //cout << ans << endl;
 
 for(int i = 0; i < m; i++){
 	int count = 0;
 	for(int j = 0; j < n; j++){
 		if(!isPrime(a[j][i])){
 			int k = 0;
 			while(!isPrime(a[j][i]+k)){count += 1;k++;}
 		}
 	}
 	ans = min(ans, count);
 
    }
    
    cout << ans << endl;
    
}
