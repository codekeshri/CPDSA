#include <iostream>
using namespace std;

signed int main() {
	int64_t t; cin >> t;
	while(t--){
    int64_t n; cin >> n;
    int64_t a[n];
    for(int64_t i = 0; i < n; i++)cin >> a[i];
    int64_t count = 0, sum=0;
	bool flag = false;
	for(int64_t i = 0; i < n - 1; i++){
		sum += a[i];
		if(a[i] > 0)flag = true;
		if(a[i] == 0 && flag == true)count++;
		
	}
	cout << sum + count << endl;
}
}
