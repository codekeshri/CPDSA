#include <iostream>
#include<vector>
using namespace std;
using ll = long long;

bool checker(ll x, vector<ll>&w, int k){
	int workers=1;
	ll curr_sum = 0;
	int n = w.size();
	for(int i=0; i<n; i++){
		if(w[i] > x)return false;
		if(curr_sum + w[i] <= x) curr_sum += w[i];
		else {
			curr_sum = w[i];
			workers++;
		}
	}
	return workers<=k;
}

int main() {
    int n, k; 
    cin>>n>>k;
    vector<ll>w(n);
    for(int i = 0; i<n; i++)cin>>w[i];

    //now do binary search on answer(is all numbers 1 to 1e16)
    ll l = 1, r = 1e16, ans = 1e16;
	while(l<=r){
		ll mid = (l+r)/2;
		if(checker(mid, w, k)){
			r = mid - 1;
			ans = mid;
		}
		else l = mid + 1;
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
}














































