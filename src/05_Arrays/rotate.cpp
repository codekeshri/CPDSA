#include <iostream>
using namespace std;
//matrix rotation clockwise by 1 on outer 

int main() {
    int n; cin >> n;
    int arr[n][n];
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j == n -1)a[i+1][j] = arr[i][j];
            else if(i == n - 1 && j == n -1)a[i][j-1] = arr[i][j];
            else if(i == n - 1 && j == 0)a[i-1][j] = arr[i][j];
            else if(i == 0 && j == 0)a[i][j+1] = arr[i][j];

            else if(i == 0 && j < n-1 && j>0)a[i][j+1] = arr[i][j];
            else if(i == n-1 && j > 0 && j<n-1)a[i][j-1] = arr[i][j];
            else if(j == 0 && i < n-1 && i>0)a[i-1][j] = arr[i][j];
            else if(j == n-1 && i>0 && i<n-1)a[i+1][j] = arr[i][j];
            else a[i][j] = arr[i][j];


        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}
