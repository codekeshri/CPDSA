#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <vector>

int f(int i, int n, vector<int> &dp) {
  // base case - number of ways to reach from n to n is 1
  // my state is number of ways to reach n from i
  // my transition is dp[i] = dp[i+1] + dp[i+2] + dp[i+3] + dp[i+4] + dp[i+5] +
  // dp[i+6]

  if (i > n)
    return 0;
  if (i == n)
    return dp[n] = 1;

  if (dp[i] != -1)
    return dp[i];
  else {
    int ways = 0;
    for (int j = 1; j <= 6; j++) {
      ways += f(i + j, n, dp);
      ways = ways % 1000000007;
    }

    return dp[i] = ways;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> dp(n + 1, -1);
  cout << f(0, n, dp) << endl;
  return 0;
}
