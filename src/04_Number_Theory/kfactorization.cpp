#include <iostream>
using namespace std;
#include <vector>


int main() {
    int n, k; cin >> n >> k;
    vector<int>ans;
    
    for(int i = 2; i*i <= n; i++)if(n % i == 0)while(n % i == 0){ans.push_back(i); n /=i;}
    if(n > 1)ans.push_back(n);
    
    //for(int i = 0; i < ans.size(); i++)cout << ans[i] << " ";
    
    //cout << endl;
    
    if(ans.size() >= k){
        for(int i = 0; i < k - 1; i++)cout << ans[i] << " ";
        int p = 1;
        for(int i = k - 1; i < ans.size(); i++)p *= ans[i];
        cout << p << endl;
    }
    else cout << -1;
    
}
