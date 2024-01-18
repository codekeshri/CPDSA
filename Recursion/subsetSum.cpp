#include <iostream>
using namespace std;
#include<vector>


void subsetsum(int n, int i, vector<int>temp, vector<vector<int>>& ans, int sum, vector<int>arr, vector<int>& nums){
	if(i == n){
		ans.push_back(temp);
		nums.push_back(sum);
		return;
	}

	temp.push_back(arr[i]);
	subsetsum(n, i + 1, temp, ans, sum + arr[i], arr, nums);

	temp.pop_back();
	subsetsum(n, i + 1, temp, ans, sum, arr, nums);
}


int main() {
    int n = 3; 
    vector<int>arr = {1, 2, 3};
    int i = 0;
    vector<int> temp;
    vector<int> nums;
    vector<vector<int>> ans;
    int sum = 0;
    subsetsum(n, i, temp, ans, sum, arr, nums);
    for(int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
    cout << endl;
    for(int i = 0; i < ans.size(); i++){
    	sum = 0;
    	for(int j = 0; j < ans[i].size(); j++){
    	 sum += ans[i][j]; 
    	 cout << ans[i][j];
    	}
    	cout  << endl ;
    	cout << "   sum = " << sum << endl;
    }
    cout << endl;
	cout << sum << endl;


}
