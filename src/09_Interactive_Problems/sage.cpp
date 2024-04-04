#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

bool check(vector<int>&a, int k){
	int i = a.size() - 1;
	bool flag = true;
	for(int j = k - 1; j >= 0; j--, i--){
		if(!flag)break;
		flag = a[i] > a[j] && a[i - 1] > a[j] && i > k;
	}
	return flag;
}

int main() {
	int n; cin >> n;
	vector<int>a(n);
	for(int i = 0; i < n; i++)cin >> a[i];
	sort(a.begin(), a.end());
	
	int left = 0, right = n, ans = 0;
	while(left <= right){
		int mid = (left + right)/2;
		if(check(a, mid)){
			ans = mid;
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	cout << ans << endl;
	//fill the resultant array
	vector<int>final(n);
	int i = n - 1; 
	int j = ans - 1;
	for(int k = 0; k < n; k++){
		if(j < 0)final[k] = a[i--];
		else if(k%2 == 0)final[k] = a[i--];
		else final[k] = a[j--];
	}

	for(int i = 0; i < n; i++)cout << final[i] <<" ";
	cout << endl;
}
