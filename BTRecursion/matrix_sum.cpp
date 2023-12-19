#include <iostream>
#include <vector>
using namespace std;

 void matrixSum(vector<vector<int>>&matrix1,vector<vector<int>>&matrix2,vector<vector<int>>&matrix,int i=0, int j=0){

	if(i==matrix1.size()) return;

	if(j==matrix1[0].size()) return matrixSum(matrix1, matrix2, matrix, i+1, j=0);
		
	matrix[i][j] = matrix1[i][j] + matrix2[i][j];
	return matrixSum(matrix1, matrix2, matrix, i, j+1);
}


int main() {
	int n, m;
	cin >> n >> m; 
	vector<vector<int>>matrix1(n, vector<int>(m)); 
	vector<vector<int>>matrix2(n, vector<int>(m));
	vector<vector<int>>matrix(n, vector<int>(m));


	for(int i=0; i<n; i++)for(int j=0; j<m; j++)cin>>matrix1[i][j];

	for(int i=0; i<n; i++)for(int j=0; j<m; j++)cin>>matrix2[i][j];
		
	matrixSum(matrix1, matrix2, matrix);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
	return 0;

}
