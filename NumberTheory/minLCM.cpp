#include <iostream>
#include <math.h>
using namespace std;



int solve(int n){
	//if(n%2 == 0)return n/2;
	//find the first divisor
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0)return n/i;
	}
	return 1;
    	
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


 