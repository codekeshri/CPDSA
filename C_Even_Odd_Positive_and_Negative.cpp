#include <iostream>
#include <string>
using namespace std;

int main(){
  int m;
  cin >> m;
  int e=0, o=0, p=0, n=0;
  int arr[m];
  for(int i = 0; i < m; i++){
    cin >> arr[i];
    if(arr[i]%2 == 0)e++;
    else o++;

    if(arr[i] > 0)p++;
    if(arr[i] < 0) n++;
  }

  cout << "Even: "<< e << endl;
    cout << "Odd: "<< o << endl; 
    cout << "Positive: "<< p << endl;
     cout << "Negative: "<< n << endl;   
  
 return 0;
}