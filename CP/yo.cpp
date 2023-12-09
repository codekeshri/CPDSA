//Factorial

#include <iostream>
using namespace std;

bool checkPrime(int n, int i){
	if (i==1)return true;
	else if(n%i!=0) checkPrime(n, i-1);
	else return false;
}


int main() {
	cout<<checkPrime(17, 16);
    
    return 0;
}
