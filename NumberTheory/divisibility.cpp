#include <iostream>
using namespace std;

bool isPrime(int n){
   for(int i = 2; i*i <= n; i++)if(n%i == 0)return false;
   return true;
}

int main() {
   int n; cin >> n;
   int count = 0;
   int cnt = 0;
   int t = 6;
   while(t <=21){
   for(int i = 2; i*i <= t; i++){
      if(t%i == 0){
         count++;
         while(t%i == 0) t /= i;
      }
      
      //cout << i << 'i' << t << "count = " << count << endl;
   }
   if(t > 1) count++;
   if(count == 2) cnt++;
   //cout << cnt << " " << t <<endl;
   t++;
   }
   
   
   
}
   

