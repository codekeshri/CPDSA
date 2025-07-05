#include <iostream>
#include <string>
using namespace std;

bool helper(int w){

  if(w == 2) return false;
  if(w%2 == 0 ) return true; 
  else return false;

}

int main(){
  int w;
  cin >> w;
  cout << (helper(w) ? "YES" : "NO");
  
   
  
 return 0;
}