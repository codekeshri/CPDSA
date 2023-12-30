#include <iostream>
using namespace std;
#define int int64_t

bool check(int x, int t[], int n, int k){
    int numOfProducts = 0;
    for(int i=0; i<n; i++){
        numOfProducts += x/t[i];
        if(numOfProducts >= k)return true;
    }
    return numOfProducts >= k;
}



signed main() {
    int n, k;
    cin>>n>>k;
    int t[n];
    for(int i=0; i<n; i++)cin>>t[i];

    int l = 0, r = 1e18;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(check(mid, t, n, k)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
        
    }    
    cout<<ans<<endl;
    return 0;
}