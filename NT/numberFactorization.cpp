#include <bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, int>m;
        int x = 0;
        for (int i = 0; i * i <= n; i++) {
            if (n % i == 0) {
                int count = 0;
                while (n % i == 0) {
                    count++;
                    n /= i;
                }
                m[i] = count;
                x = max(x, count);
            }
        }

        if (n > 1)m[n] = 1;
        cout << n << endl;

        long long ans = 0;
        for (int i = 1; i <= x; i++) {
            long long product = 1;
            for (auto j = m.begin(); j != m.end(); j++) {
                if (j->second > 0) {
                    m[j->first]--;
                    product *= j->first;
                }

            }
            ans += product;
        }

        cout << ans << endl;

    }
}