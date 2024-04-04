#include <iostream>
using namespace std;

int ask(int l, int r){
    cout << "? " << l << " " << r << endl;
    int sum;
    cin >> sum;
    return r - l + 1 - sum; 
}



int main() {
    int n, t, k;
    cin >> n >> t >> k;
    int left = 1, right = n, ans = 0;

    while(left<=right){
        int mid = (left + right)/2;
        int check = ask(1, mid);
        if(check<=k) {
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "! " << ans << endl;
    
}
