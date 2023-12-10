#include <iostream>
using namespace std;

int helper(int n){
	if(n==1)return 1;
	else if (n%2==0)return 1+helper(n/2);
	else return 1+helper(3*n+1);
}


int main() {
	int n;
	cin>>n;
	int length = helper(n);
	cout<<length;
    return 0;
}