#include <iostream>
using namespace std;
#include <vector>
#include<assert.h>
#include<cstdlib>

struct Interactor {
	vector<int>arr;
	int index;
	Interactor(){
		arr.resize(100);
		for(int i = 0; i < 51; i++){
			arr[i] = 10;
		}
		for(int i = 51; i < 100; i++){
			arr[i] = rand()%10;
		}
	}
	bool query(int index){
		return arr[index] == 10;
	}
	bool isValidOutput(int index){
		if(arr[index] == 10){
			cout << "Passed" << endl;
		}else{
			cout << "Failed" << endl;
		}
		//cout << endl;
	}
};


int main() {
	int maxQueriesTaken = 0;
	for(int i = 0; i < 10000000; i++){
		int queries = 0;
		int ans = -1;
		Interactor it = Interactor();

		while(true){
			int x = rand()%100;
			//cout << "? " <<  x << endl;
			queries++;
			if(it.query(x)){
				ans = x;
				break;
			}
		}
		maxQueriesTaken = max(maxQueriesTaken, queries);
		//it.isValidOutput(ans);
		//cout << "queries: "<< queries << "  maxQueriesTaken: "<< maxQueriesTaken << endl;
	}

	cout << maxQueriesTaken << endl;
}


























