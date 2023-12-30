#include <iostream>
using namespace std;
#include <vector>

void solve(){
	int n;
	//cout << "Enten no of cages: ";
	cin >> n;
	int sum1to3, sum1to2, sum2to3;
	cout << "?13" << endl;
	cin >> sum1to3;
	cout << "?12"<< endl;
	cin >> sum1to2;
	cout << "?23" << endl;
	cin >> sum2to3;

	vector<int>a(n+1);
	a[1] = sum1to3 - sum2to3;
	a[2] = sum1to2 - a[1];
	a[3] = sum1to3 - sum1to2;

	int cur;
	for(int i = 4; i < n+1; i++){
		cout << '?' << i-1 << " " << i << endl;
		cin >> cur;
		a[i] = cur - a[i - 1];
	}

	cout << '!';
	for(int i = 1; i <= n; i++)cout << a[i] << " ";
	cout << endl; 
}

int main() {
	solve();
   	return 0;
 }

