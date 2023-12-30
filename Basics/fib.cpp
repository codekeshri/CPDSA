#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long prev = 0;
	long long cur = 1;
	long long ans;
	if(n==1)ans=0;
	else if(n==2)ans=1;
	else {
		for(int i=3; i<=n; i++){
		ans = prev + cur;
		prev = cur;
		cur = ans;
		}
	}

	cout<<ans;


}
