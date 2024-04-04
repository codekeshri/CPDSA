//find no. of smaller elements in b for each element of a 
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h> 
using namespace std;


int main() {
    int n, m; cin >> n >> m;
    vector<int>a(n), b(m), c;

    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < m; i++)cin >> b[i];

    int i = 0, j = 0, count = 0;
    while(i < n){
        while(j < m && b[j] < a[i]){
            j++;
        }
        c.push_back(j);
        i++;
    }

    for(int i = 0; i < c.size(); i++)cout << c[i] << " ";
        
}
