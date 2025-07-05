#include <iostream>
#include <string>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int a, b;
    cin >> a >> b;
    cout << (b < -1 ? "NO" : "YES") << endl;
  }
   
  
 return 0;
}