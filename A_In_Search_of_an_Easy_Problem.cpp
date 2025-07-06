#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  bool ans=false;
  for(int i=0; i < n; i++){
    cin >> a[i];
    if(a[i]==1){ans=true; break;}
  }

  cout << (ans ? "HARD" : "EASY");
   
  
 return 0;
}