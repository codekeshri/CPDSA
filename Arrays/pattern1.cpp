#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int count=0;
	for(int i=0; i<num; i++){
		if(i%2!=0){
			for(int j=0; j<i+1; j++){
				count++;
				cout<<count<<" ";
			}
		}

		else{
			count += i+2; 
			for(int j=0; j<i+1; j++){
				count--;
				cout<<count<<" ";
			}
			count += i;
		}
		cout<<endl;
	}

}