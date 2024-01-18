#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int h, x, y1, y2, k; 
	    cin >> h >> x >> y1 >> y2 >> k;
	    int count = h/y1;
	    int temp = h;
	 	if(k >= h/y1)cout << min(h/x, h/y);
	 	else cout << min(h/x, h/y + (h-h*(h/y))/y2)

}
