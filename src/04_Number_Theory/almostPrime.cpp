#include <iostream>
using namespace std;

bool isAlmostPrime(int n){
	int count = 0;
	for(int i = 2; i*i < n;i++){
		if(n % i == 0){
			count++;
			while(n % i == 0)n /=i;
		}
	}
	
	if(n > 1)count++;
	
	if(count == 2)return true;
	else return false;
}


int main() {
	int n;  cin >> n;
	int count = 0;
	for(int i = 6; i <= n; i++)if(isAlmostPrime(i))count++;
	cout << count;
	
    
}
