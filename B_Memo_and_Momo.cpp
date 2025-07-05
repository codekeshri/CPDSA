#include <iostream>
#include <string>
using namespace std;

string helper(long long a, long long b, long long k){
    if(a%k == 0 && b%k == 0){
        return "Both";
    }else if(a%k == 0 && b%k != 0){
        return "Memo";
    }else if(a%k != 0 && b%k == 0){
        return "Momo";
    }else if(a%k != 0 && b%k != 0){
        return "No One";
    }
}

int main(){
  
   long long a, b, k;

   cin >> a >> b >> k;

   cout << helper(a, b, k);

  
 return 0;
}