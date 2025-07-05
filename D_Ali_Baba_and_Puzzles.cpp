#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


bool helper(long long int a, long long int b, long long int c, long long int d){

    if(a+b-c == d){
        return true;
    }else if(a-b+c == d){
        return true;
    }else if(a+b*c == d){
        return true;
    }else if(a*b+c == d){
        return true;
    }else if(a-b*c == d){
        return true;
    }else if(a*b-c == d){
        return true;
    }else {
        return false;
    }

}

int main(){
  long long int a, b, c, d;
    cin >> a >> b >> c >> d;

  cout << (helper(a, b, c, d) ? "YES" : "NO");

   
  
 return 0;
}