#include <iostream>
using namespace std;
#include <map>
#include <vector>


int main() {

    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	vector<int>a(n);
    	map<int, int>mp;
    	
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
    		mp[a[i]]++;
    	}
    	
    	int x = a[0], y = a[0];
    	
    	for(int i = 0; i < n; i++){
    		x = max(x, a[i]);
    		y = min(y, a[i]);
    		
    	}
    	
    	
    	for(int i = y; i < x + 1; i++){
    		
    	}
    	
    	
    	
    }
    return 0;
}
