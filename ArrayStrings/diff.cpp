#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    int t; cin >> t;
    while(t--){
        string x, y; cin >> x >> y;
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        int posx = 0, posy = 0;

        for(int i = 0; i < y.length(); i++){
            if(y[i] == '1'){
                posy = i;
                break;
            }
        }
        for(int i = posy; i < x.length(); i++){
            if(x[i] == '1'){
                posx = i;
                break;
            }
        }
        //cout << posx << " " << posy << endl;
        if(posx >= posy)cout << posx - posy << endl;
        else cout << 0 << endl;
    }

}
