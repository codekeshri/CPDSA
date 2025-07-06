#include <iostream>
#include <string>
using namespace std;

int main(){
  int n; 
  cin >> n;
  string s;
  for(int i=0; i<n; i++)s.push_back('*');
  for(int i=0; i<n; i++){
    if(i==0)cout<< s << endl;
    if(i==n-1)cout << s;
    for(int j=n-i-1; j>1; j--){
        if(j==2)cout<<"*"<<endl;
        else cout << " ";
    }
  }

   
  
 return 0;
}