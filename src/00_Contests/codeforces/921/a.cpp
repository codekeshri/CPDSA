#include <bits/stdc++.h>
using namespace std;


int main() {
 long long t; cin >> t;
 while(t--){
 	long long n, x;
 	cin >> x >> n;
 	long long m = x/n;
 	while(m){
 		if((x - m*(n-1))%m == 0){
 			cout << m << endl;
 			break;
 		}
 		m--;
 	}
 	
 }   
    
}