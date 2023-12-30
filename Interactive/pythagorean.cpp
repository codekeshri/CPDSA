#include <iostream>
using namespace std;


int main() {
	int t;
	cin >> t;

	for(int i=0; i<t; i++){
    	int n;
    	cin >> n;
    	long long a=3, b=4, c=5;
    	int count = 0;
    	while(c<=n){
    		a += 2;
    		b = ((long long)a*a - 1)/2;
    		c = ((long long)a*a + 1)/2;
    		count++;
    	}
    	cout << count << endl;
	}
    
}
