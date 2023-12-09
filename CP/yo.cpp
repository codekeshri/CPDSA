//Factorial

#include <iostream>
using namespace std;

int fib(int n){
	return n==1?1:n*fib(n-1);
}


int main() {
	cout<<fib(6);
    
    return 0;
}
