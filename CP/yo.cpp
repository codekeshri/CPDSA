//Factorial

#include <iostream>
using namespace std;

void table(int n, int current, int range){
	  if(current>range) return ;
	  else {
	  	cout<<n << " X " << current<<"= "<< n*current<<endl;
	  	table(n, current+1, range);
	  }
}


int main() {
	int n, range;
	cout<<"Enter number = ";
	cin>>n;
	cout<<"Enter range = ";
	cin>>range;
    table(n, 0, range);
    
    return 0;
}
