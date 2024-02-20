
#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n; 
    cout<<"Enter the number"<<endl;
    cin>>n;

    ll l = 1, r = 1e6, ans = 1e16;
	while(l<=r){
		ll mid = (l+r)/2;
		if(mid*mid<=n){
			l = mid + 1;
			ans = mid;
		}
		else r = mid - 1;
		cout<<ans<<" "<<mid<<endl;
	}
	cout<<ans<<endl;
}
