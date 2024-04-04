#include <iostream>
using namespace std;


int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++){
    	int a, b, x; cin >> a >> b;
        if(a >= b) x = a;
        else x = b;
    	cout << (a^x) + (b^x)  << endl;
    	}

}
