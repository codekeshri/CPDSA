#include <iostream>
using namespace std;
#include<math.h>


int main() {
    int n, k; cin >> n >> k;
    long long ans = pow(n, k)%(1e9 + 7);
    cout << ans << endl;
}
