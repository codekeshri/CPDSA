#include <iostream>
using namespace std;
#include<vector>


int main() {
    int n; cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++)cin >> arr[i];
    for(int i = 0; i < n; i++)cout << arr[i] << " ";
    cout << endl;
    int k = 3;
    int sum = 0;
    int i = 0, j = k;
    while (i < k){
        sum += arr[i]; 
        i++;
    }
    i = 0;
    vector<int>a;
    a.push_back(sum);
    while(j < n){
        sum = max(sum, sum + arr[j] - arr[i]);
        i++;
        j++; 
    
    }
    cout << sum;

}
