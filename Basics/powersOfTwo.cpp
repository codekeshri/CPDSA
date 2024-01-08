#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n, k; cin >> n >> k;
    int kmin = 0;
    int temp = n;
    while(temp>=1){
        if((temp & 1) == 1)kmin++;
        temp = temp >> 1;
    }
    if(k > n){
        cout << "NO" << endl;
        return 0;
    }
    if(k < kmin){cout << "NO" << endl; return 0;};
    vector<int>a;
    for(int i = 0; i < 32; i++)if(n & (1 << i))a.push_back(1 << i);
    //for(int i = 0; i < a.size(); i++)cout << a[i] << " ";
    cout << endl;

    
    if(a.size() > k){cout << "NO" << endl; return 0;};
    int i = 0;
    while(a.size() < k){
        while(a[i] == 1)i++;
        a[i] /= 2;
        a.push_back(a[i]);

    }
    cout << "YES" << endl;
    int j = 0;
    while(j < a.size()){cout << a[j] << " ",j++;};

    return 0;


}