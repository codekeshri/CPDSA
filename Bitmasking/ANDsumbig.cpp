#include <iostream>
using namespace std;
#include<math.h>
#include<climits>

#define mod (ll)(1e9 + 7)
typedef long long ll;

ll helper(ll n, ll k){
    if(k==0)return 1;
    ll ans = helper(n, k-1);
    ans %= mod;
    ans *= n;
    ans %= mod;
    return ans;
}

int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++){
    ll n, k; cin >> n >> k;
    ll ans = helper(n, k);
    cout << ans << endl;
    }
}
