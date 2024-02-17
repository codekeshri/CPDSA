#include <iostream>
using namespace std;
#include<vector>

vector<int> solve(int n){
    vector<int>ans;
    for(int i = 1; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(n%i == n%j){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
}

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>ans;
        ans = solve(n);
        for(int i = 0; i < 2; i++)cout << ans[i] << " ";
        cout << endl;

   }
}
