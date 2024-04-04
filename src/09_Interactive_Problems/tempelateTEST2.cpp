#include <iostream>
using namespace std;
#include<assert.h>
#include<cstdlib>

struct Interactor {
	int hiddenNumber;
	int queriesTillNow;
	int limit;
	bool printInteraction;
	Interactor(){
		hiddenNumber = rand()%100;
		queriesTillNow = 0;
		limit = 10;
		printInteraction = false;
	}
	void checkTotalQueries(){
		if(queriesTillNow >= limit){
			cout << " Made more than limit queries for " << hiddenNumber << endl;
		}
		assert(queriesTillNow < limit); 
	}
	char make_query(int x){
		checkTotalQueries();
		queriesTillNow++;
		if(x < hiddenNumber)
			return '<';
		if(x > hiddenNumber)
			return '>';
		return '=';
	}
	bool isValidOutput(int x){
		queriesTillNow++;

		if(printInteraction)
			cout << queriesTillNow << endl;
		if(x != hiddenNumber){
			cout << "Failed for " << hiddenNumber << endl;
		}
		else {
			cout << "Passed for " << hiddenNumber << endl;
		}
	}
};

void query(int x){
	cout << "?" << x << endl;
}

int main() {
	for(int iterations = 1; iterations <= 100; iterations++){
	Interactor interactor = Interactor();	
	int left = 1, right = 100;
	int ans = -1;
	while(left <= right){
		int mid = (left + right)/2;
		// query(mid);
		char codeforcesOutput;
		//cin>>codeforcesOutput;
		codeforcesOutput = interactor.make_query(mid);
		//cout << codeforcesOutput << endl;
		if(codeforcesOutput == '='){
			ans = mid;
			break;
		}else{
			if(codeforcesOutput == '<'){
				left = mid + 1;
			}else{
				right = mid - 1;
			}
		}
	}
    interactor.isValidOutput(ans);
}
   //cout << "! " << ans << endl;
};

























