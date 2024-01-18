#include <iostream>
using namespace std;
#include <vector>

void validParenthesis(int n, int left, int right, vector<string>& ans, string &temp){

	if(left == n && right == n) {
		cout << temp << endl;
		ans.push_back(temp);
		return;
	}

	if(left < n) {
		temp.push_back('(');
		validParenthesis(n, left + 1, right, ans, temp);
		temp.pop_back();
	}

	//cout <<"*"<< temp << endl;
	
	if(left > right){ 
		temp.push_back(')');
		validParenthesis(n, left, right + 1, ans, temp);
		temp.pop_back();
	}

	//cout <<"**"<< temp << endl;
	
}



int main() {
	int n; cin >> n;
    int left = 0, right = 0;
    vector<string> ans;
    string temp;

    validParenthesis(n, left, right, ans, temp);

    // for(int i = 0; i < ans.size(); i++){
    // 	for(int j = 0; j < ans[i].size(); j++)cout << ans[i][j];
    // 	cout << " ";
    // }



}
