#include <iostream>
using namespace std;
//greatest common divisor
int helper(int n1, int n2, int i){
	if(n1%i == 0 &&  n2%i == 0)return i;
	else return helper(n1, n2, i-1);
}


int main() {
	int n1, n2;
	cin>>n1>>n2;
	cout<< helper(n1, n2, min(n1, n2));
	
    return 0;
}