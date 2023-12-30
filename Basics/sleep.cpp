#include <iostream>
using namespace std;
#include<math.h>


int main() {
    int t;
    cin >> t;
    while(t--){
    int n, H, M;
    cin >> n >> H >> M;
    int ans = 10000; int s = 10000;
    while(n--){
        int h, m;
        cin >> h >> m;
        if(h<H)ans = min((60*(h - H + 24) + (m - M)), s);
        else if(h==H && m >= M) ans = min((60*(h - H) + (m - M)), s);
        else if(h > H) ans = min((60*(h - H) + (m - M)), s);
        else if
        s = ans;
       // cout << s << endl;
    }
        int ansh = s/60;
        int ansm = s%60;
        
        cout << ansh << " " << ansm << endl;
    }
    
    
}
