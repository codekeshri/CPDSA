#include <iostream>
using namespace std;
#include<vector>
#include<queue>
#include<set>
//the time complexity with queue will be O(n)

int main() {
    int n; cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++)cin >> arr[i];
    cout << endl;
    int k = 3;
    queue<int>s;
    int i = 0;
    while (i < k){
        if(arr[i] < 0)s.push(i);
        i++;
        }

    vector<int>ans; 
    if(!s.empty())ans.push_back(s.front());
    else ans.push_back(-1);
    cout << ans[0] << endl;
    int j = k;
    while(j < n){
         if(arr[j] < 0)s.push(j);
         if(arr[j - k] < 0)s.pop();
         if(!s.empty())ans.push_back(s.front());
         else ans.push_back(-1);
         j++;
    }
    for(auto i : ans)if(i >= 0) cout << arr[i] << " ";  


   

}
