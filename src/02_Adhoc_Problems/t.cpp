#include <bits/stdc++.h>
using namespace std;
void solve(int n){
for(int i = 2; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(__gcd(i, j) != i && __gcd(i, j) != j && i + j + __gcd(i, j) == n && __gcd(i, j) != 1){
                cout << i << " " << j << " "<< __gcd(i, j) << endl;
                return;
            }
        }
    }
}

int main() {
 int t; cin >> t;
 while(t--){
    int n; cin >> n;
    solve(n);
 }   
    
}