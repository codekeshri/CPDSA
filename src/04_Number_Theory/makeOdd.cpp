#include <bits/stdc++.h>
using namespace std;
bool sum(int n, vector<int>arr) {
	for (int i = 0; i < n; i++)if (arr[i] % 2 == 0)return false;
	return true;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; i++)cin >> a[i];

		int count = 0; int p;
		while (!sum(n, a)) {
			sort(a.begin(), a.end(), [](int a, int b) {return a > b;});
			int i = 0;
			while (a[i] % 2 != 0)i++;
			
			p = a[i] / 2;
			a[i] = p;
			
			i++;
			while (a[i] == 2 * p) {
				a[i] = p;
				i++;
			}
			count++;

		}

		cout << count << endl;

	}

}