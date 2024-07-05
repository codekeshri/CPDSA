#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;

int solve(vector<vector<char>> &arr, vector<vector<int>> &memo, int n, int i,
          int j) {
  // base case out of bond or hurdle will make it return
  if (i == n - 1 && j == n - 1 && arr[n - 1][n - 1] != '*') {
    return 1;
  }
  if (i >= n || j >= n || arr[i][j] == '*')
    return 0;

  if (memo[i][j] != -1)
    return memo[i][j];

  // go right
  int right = solve(arr, memo, n, i + 1, j);

  // go down
  int down = solve(arr, memo, n, i, j + 1);

  return memo[i][j] = (right + down) % mod;
}

int main() {
  int n;
  cin >> n;
  vector<vector<char>> arr(n, vector<char>(n));

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  // task is to calculate number of paths
  int i = 0, j = 0;
  vector<vector<int>> memo(n, vector<int>(n, -1));
  cout << solve(arr, memo, n, i, j);

  return 0;
}
