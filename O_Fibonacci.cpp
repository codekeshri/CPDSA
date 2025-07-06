#include <iostream>
#include <string>
using namespace std;

int helper(int n){

  int curr=1, prev=0;
  if(n==1)return 0;
  if(n==2)return 1;

//   cout << curr << " " << prev << endl;
  for(int i=3; i<=n; i++){
    int temp = curr;
    curr = curr + prev;
    prev = temp;
    // cout << curr << " " << prev <<  endl;
  }
  return curr;

}

int main(){
  int n;
  cin >> n;

  cout << helper(n);


   
  
 return 0;
}