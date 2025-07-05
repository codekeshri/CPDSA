#include <iostream>
#include <string>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
      int a, b;
      cin >> a >> b;
      string s; 
      cin >> s;
      int count = 1;
      string str;
      for(int i=1; i < a; i++){
          cin >> str;
          str == s ? count++ : count;
    }

    cout << count << endl;
}
   
  
 return 0;
}