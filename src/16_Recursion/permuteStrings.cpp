#include <iostream>
using namespace std;
#include <vector>
//time coplexity O(n*n!)
//space complexity O(n)

void f(vector<int>&arr, vector<vector<int>> &ans, vector<int> &temp, vector<bool> visited){
    if(arr.size() == temp.size()) {
        ans.push_back(temp);
        return;
    }
    for(int i = 0; i < arr.size(); i++){
        if(visited[i] == 0){
            visited[i] = 1;
            temp.push_back(arr[i]);
            f(arr, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

int main() {
    vector<int>arr = {1, 2, 3};
    vector<int>temp;
    vector<vector<int>>ans;
    vector<bool>visited(3, 0);

    f(arr, ans, temp, visited);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++)cout << ans[i][j];
        cout << " ";
    }
}
