#include <iostream>
#include <string>
using namespace std;

int main(){
  int x;
  cin >> x;

  bool isPrime = true;

  for(int i=2; i<x; i++){
    if(x%i == 0){
        isPrime = false;
        break;
    }
  }

  cout << (isPrime ? "YES" : "NO");
   
  
 return 0;
}