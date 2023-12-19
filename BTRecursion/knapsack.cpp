#include <iostream>
using namespace std;
#include <climits>

int solve(int value[1013], int weight[1013], int i, int W, int N){
	if(W<0)return INT_MIN;
	if(i==N) return 0;
	return max(solve(value, weight, i+1, W, N), solve( value,  weight, i+1, W-weight[i], N)+value[i]);
}



int main() {
	int N, W;
	cout<<"Enter N and W"<<endl;
	cin>>N>>W;
	int value[1013], weight[1013];
	for(int i=0; i<N; i++)cin>>weight[i]>>value[i];
	cout<<solve(value, weight, 0, W, N);
	
    
}
