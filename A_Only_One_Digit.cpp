#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    char ans = '9';
    for (auto &c : s)
      ans = min(ans, c);
    cout << ans << "\n";
  }
  return 0;
}
