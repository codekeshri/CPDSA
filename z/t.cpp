//sort and merge two sorted array
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h> 
using namespace std;


int main() {
	int n, m; cin >> n >> m;
	vector<int>a(n), b(m), c(n + m);

	for(int i = 0; i < n; i++)cin >> a[i];
	for(int i = 0; i < m; i++)cin >> b[i];

    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
    	if(a[i] < b[j]){c[k] = a[i]; i++; k++;}
    	else {c[k] = b[j]; j++; k++;}

    }
    while(i < n){c.push_back(a[i]); i++; k++;}
    while(i < m){c.push_back(b[i]); i++; k++;}

    for(int i = 0; i < n + m; i++)cout << c[i] << " ";
    	
}
