#include <iostream>
using namespace std;
#define int int64_t

bool check(int x, int n){
	int ans = 0;
	//no. of elements that are <= x
	for(int i=1; i<=n; i++)ans += min(n, x/i);
	return ans >= n*n/2 + 1 ? true : false;
}

signed main() {
    int n;
    cin>>n;
    int l = 0, r = 1e18;
    while(l+1<r){
    	int mid = l+(r-l)/2;
    	if(check(mid, n)) r = mid;
    	else l = mid;
    }	
    cout<<r<<endl;
}
