#include <iostream>
using namespace std;
#include <vector>

void subsequence(int arr[], int i, int n, vector<vector<int>>& ans, vector<int>& temp){

	if(i == n) {
		ans.push_back(temp);
		return;
	}


	//take i-th element in temp and make recursive call 
	temp.push_back(arr[i]);
	subsequence(arr, i+1, n, ans, temp);

	//do not take, for that simply pop and make recursive call
	temp.pop_back();
	subsequence(arr, i+1, n, ans, temp);

}



int main() {
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;

    subsequence(arr, 0, 3, ans, temp);

    for(int i = 0; i < ans.size(); i++){
    	for(int j = 0; j < ans[i].size(); j++)cout << ans[i][j];
    	cout << " ";
    }



}
