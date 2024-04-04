#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int h, x, y1, y2, k; 
	    cin >> h >> x >> y1 >> y2 >> k;
	    int count = 0;
	    while(h >= 0){
	        if(count < k){
	            h -= y1;
	            count++;
	        }
	        if(count >= k){
	            h -= y2;
	            count++;
	        }
	        cout << count << endl; 
	    }
	    cout << "-------------------" << endl;
	    cout << min(ceil(h/x), count) << endl;
	}

}
