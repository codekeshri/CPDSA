#include <iostream>
using namespace std;
#include <vector>

void solve(){
	 vector<int>arr = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 4, 9, 25, 36, 49};
 	 int count = 0;
 	 string codeforces;
 	 for(int i = 0; i < arr.size(); i++){
 	 	cout << arr[i] << endl;
 	 	cin >> codeforces;
 	 	if(codeforces == "yes")count++;
 	 	if(count > 1){
 	 		cout << "composite" << endl;
 	 		return;
 	 	}
 	 }
 	 cout << "prime" << endl;

}

int main() {
	solve();
   
 }

