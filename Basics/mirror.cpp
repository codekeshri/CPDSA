
#include <iostream>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    char matrix[n][n];
    for(int i = 0; i < n; i++)for(int j = 0; j < n; j++)cin >> matrix[i][j];
 
    int x = n/2, y = n/2;
    if(n % 2 == 1)y++;
 
    int count = 0, k;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            k = 0;
            k += matrix[i][j] - '0';
            k += matrix[j][n - i - 1] - '0';
            k += matrix[n - i - 1][n - j - 1] - '0';
            k += matrix[n - j - 1][i] - '0';



            if(k == 2) count += 2;
            else if(k == 1 || k == 3) count++;
 
        }
    }    
 
    cout << count << endl;
}
    
}