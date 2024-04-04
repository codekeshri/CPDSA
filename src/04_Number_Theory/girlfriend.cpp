#include <iostream>
using namespace std;
#include <vector>

bool isPrime(int n){
	for(int i = 2; i*i <= n; i++)if(n%i == 0)return false;
	return true;
}

int main() {
	int n; cin >> n;
	vector<int>ans;
	int count = 1;
	for(int i = 2; i < n + 2; i++){
		if(!isPrime(i)){
			count = 2;
			ans.push_back(2);
		}
		else {
			
			ans.push_back(1);
		}
		
	}
	
	cout << count << endl;
	for(int i = 0; i < ans.size(); i++)cout << ans[i] << " ";
    
}
