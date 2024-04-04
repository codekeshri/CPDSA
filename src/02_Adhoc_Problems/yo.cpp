#include <bits/stdc++.h>
using namespace std;

int solve(int sum, int arr[], int n) {
    int ans = 1e9; int count = 1e9, cnt = 1e9;
 
    //if sum is even then no need to change
    if (sum % 2 == 0)return 0;
    
    //otherwise if sum is not even i ll either try to convert an odd to even or even to odd
    else {
        for (int i = 0; i < n; i++) {
            
            if (arr[i] % 4 == 1)return 1;  // 1. now if I get an odd no. in first go it will become even if no%4 ==1
            
            else if (arr[i] % 4 == 3) {    //2. second type of odd will become even at 0; keep dividing by 2
                int temp = arr[i];
                count = 0;
                while (temp != 0) {
                    temp /= 2;
                    count++;
                }
            }
            
            else  {                          //3. at the same time i am checking if making an even to odd is viable
                cnt = 0;
                int temp = arr[i];
                while (temp%2 == 0) {
                    temp /= 2;
                    cnt++;
                }
            }

            ans = min(count, cnt);         //after coming out of the loop just storing the min possible count or cnt
        }

        return ans;                      //at last my ans should contain min 

    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)cin >> arr[i];
        int sum = 0;
        for (int i = 0; i < n; i++)sum += arr[i];
        cout << solve(sum, arr, n) << endl;

    }
}


