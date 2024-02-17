#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<long long, long long>>v; 
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back({a, i});
        }
        vector<int>ans(n);
        sort(v.begin(), v.end());

        //for(const auto& pair : v)cout << "("<< pair.first << ", " << pair.second << ")" << " ";
        int cur = 1;
        long long temp = 0;
        for(int i = n - 1; i >= 0; i--){
            ans[v[i].second] = cur;
            temp += (long long)2*(v[i].first*abs(cur));

            if(cur > 0)cur *= -1;
            else{
                cur *= -1;
                cur++;
            }
        }

        cout << temp << endl;
        cout << 0 << " ";
        for(auto it:ans)cout << it << " ";
        cout << endl;

    }
}
