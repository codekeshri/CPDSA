// #include <iostream>
// using namespace std;
// #include <vector>


// int main() {
//     int t; cin >> t;
//     while(t--){
//     long long n; cin >> n;
//     long long ans = 1, count = 1;
//     for(long long i = 1; i*i <= n; i++){
//     	if(n % i == 0 && n % (i+1) == 0)count++;
//         else count = 0;
        
//         ans = max(ans, count);
    		
//     	} 
    
//     cout << ans << endl;

        
//     }
    	
// }


#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){
      long long n; cin >> n;
      long long i = 1;
      while(n % i == 0)i++;
      cout << i - 1 << endl;     
  }     
}