#include <bits/stdc++.h>
using namespace std;

bool canHike(int i, int k, vector<int>&arr){
    int j = i;
    if(i+k > arr.size())return false;
    while(j < i+k){
        if(arr[j] == 1)return false;
        j++;
    }
    return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    vector<int>arr(n);
    for(int i = 0; i < n; i++)cin >> arr[i];
    
    int count = 0;
    for(int i = 0; i < n;){
        if(canHike(i, k, arr)) {
            i = i + k + 1;
            count++;
        }else i++;
    }
    cout << count << "\n";
  }
  return 0;
}