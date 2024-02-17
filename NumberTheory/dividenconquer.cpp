#include <bits/stdc++.h>
using namespace std;

int solve(int sum, int arr[], int n) {
    int ans = 1e9;

    if (sum % 2 == 0)return 0;

    else {
        for (int i = 0; i < n; i++) {
            int count = 0;
            if(arr[i] & 1)while(arr[i] & 1){count++; arr[i] /= 2;}
            else while (arr[i] % 2 == 0) {count++; arr[i] /= 2;}
            ans = min(count, ans);
        }

        return ans;

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


