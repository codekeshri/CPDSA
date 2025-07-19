#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int>arr, int n){
    int i = 1;
    while(arr[i] <= arr[i-1]){
        while(arr[i+1] <= arr[i]){
            i++;
            if(i == n) return true;
        }
        i++;

    }
   

  return false;

}

int main(){
int t=1;
while(t--){
  int n;
  cin >> n;
  vector<int>arr;
  for(int i = 0; i < n; i++) cin >> arr[i];
  cout << (helper(arr, n) ? "yes" : "no") << endl;
   
  
}
 return 0;
}