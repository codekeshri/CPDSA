#include <iostream>
using namespace std;
#include <vector>

int count = 0;
void f(vector<int>arr, int sum){
    if(sum <= 0){
        cout << sum << endl;
        if(sum == 0){
            count++;
            cout << count << endl;
            return;
        }
        return;
    }
    for(int i = 0; i < arr.size(); i++)f(arr, sum - arr[i]);
}



int main() {
    int sum = 7;
    vector<int>arr = {1, 5, 6};
    f(arr, sum);
    cout << count;
}
