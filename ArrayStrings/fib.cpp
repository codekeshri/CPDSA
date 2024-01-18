#include <iostream>
using namespace std;
 
int main() {
    int64_t t; cin >> t;
    while(t--){
    int64_t n; cin >> n;
    int64_t matrix[n][n] = {};
    for(int64_t i = 0; i < n; i++)for(int64_t j = 0; j < n; j++)cin >> matrix[i][j];
    int64_t x = n/2, y = n/2;
    if(n % 2 == 1)y++;
 
    int64_t count = 0, k;
    for(int64_t i = 0; i < x; i++){
        for(int64_t j = 0; j < y; j++){
            k = 0;
            k += matrix[i][j] + matrix[j][n - i - 1] + matrix[n - i - 1][n - j - 1] + matrix[n - j - 1][i];
            if(k == 2) count += 2;
            else if(k == 1 || k == 3) count++;
 
        }
    }    
 
    cout << count << endl;
}
}
    

















    // for(int64_t i = 0; i != n; ++i){
    // 	for(int64_t j = 0; j != n; ++j)cout << matrix[i][j] << " ";
    // 	cout << endl;
    // }