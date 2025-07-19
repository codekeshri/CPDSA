#include <bits/stdc++.h>
using namespace std;

int main(){
int t=1;
while(t--){
  int n;
  cin >> n;
  int ct=0;
  for(int k = 19; ; k++){
    int sum = 0;
    int i = k;
    while(i>=1){
        sum += i%10;
        i /=10;
    }
    if(sum == 10)ct++;
    if(ct == n){
        cout << k << endl;
        break;
    }
}
   
   
  
}
 return 0;
}