#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((c > a && c < b) && (d < a && d > b)) cout << "YES" << endl;
    else if ((d > a && d < b) && (c < a && c > b)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 return 0;
}