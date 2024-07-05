#include <bits/stdc++.h>
using namespace std;

int solve(int n, int x, vector<int> &arr, vector<int> &dp) {

  // base case
  if (x == 0)
    return 1;
  if (x < 0)
    return 0;

  if (dp[x] != -1)
    return dp[x];

  // loop
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = (ans + solve(n, x - arr[i], arr, dp)) % 1000000007;
  }

  return dp[x] = ans;
}

int main() {

  int n, x;
  cin >> n >> x;
  vector<int> dp(x + 1, -1);

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << solve(n, x, arr, dp);
  return 0;
}
