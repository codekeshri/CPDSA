#include <iostream>
using namespace std;
 
int solve(int n){
	int i = n/2;
    	while(i > 0){
    		if((n-i)%i == 0)return i;
    		i--;
    	}
    	
    	
}
 
int main() {
	int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a = solve(n);
    	int b = n - a;
    	
    	cout << a << " " << b << endl;
    }
}