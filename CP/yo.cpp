//Factorial

#include <iostream>
using namespace std;

int helper(int n){
	return n==0?1:4*helper(n-1);
}


int main() {
	cout<<helper(4);
    
    return 0;
}
