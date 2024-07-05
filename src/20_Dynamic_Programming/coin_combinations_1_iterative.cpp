// coin combinations 1 recursive
#include <bits/stdc++.h>
using namespace std;

// Big Problem - no. of ways to get k from n coins
// Break Problem -
// Smallest subproblem - no. of ways to get 0 is 1 i.e. dp[0] = 1
// state - dp[k] = sum of ways to get k
// transition: dp[k] = dp[k-c1] + dp[k-c2] + ...... + dp[k-cn]
// final subproblem: dp[x]
// T.C. = O(nx)
// S.C. = O(x)

void solve() {
  int n, x; // n is number of coins and x is the value to construct
  cin >> n >> x;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> dp(x + 1, 0);
  // dp[i] = total number of ways to generate a sum of i
  // initially dp[i] = 0, for all i

  // base case
  dp[0] = 1;

  // getting value of every single dp state
  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < n; j++) {
      if (a[j] <= i)
        dp[i] = (dp[i] + dp[i - a[j]]) % 1000000007;
    }
  }

  // final subproblem
  cout << dp[x] << endl;
}

int main() {

  solve();

  return 0;
}
