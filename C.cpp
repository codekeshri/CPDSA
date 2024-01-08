#include <iostream>
using namespace std;


int main() {
	int t; cin >> t;
	while(t--){ 
	int n; cin >> n;
	int arr[n];
	int count = 0;
	for(int i = 0; i < n; i++)cin >> arr[i];
	for(int i = 0; i < n - 1; i++){
		if(arr[i] < arr[i + 1])count++;
		//cout << count << " ";
	}
	//cout << endl;
    if(count > 0) cout << count - 1 << endl;
    else cout << count << endl;
}
}