#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    
    for(int j = 0; j < t ; j++){
    	cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)cin >> a[i];
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < n; i++){
           if(i%2 != a[i]%2){
                if(a[i]%2 == 0)count1++;
                else count2++;
            }
        }
        if(count1 == count2) cout << count1 << endl;
        else cout << -1 << endl;
        count1 = 0; count2 = 0;
    }
}