#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }

    sort(temp, temp+n);
    sort(arr, arr+n);

    bool flag = true;

    for(int i = 0; i < n; i++){
        if(arr[i] != temp[i]){
            flag = false;
            break;
        }
    }

    cout << (flag ? "yes" : "no");


    return 0;
}