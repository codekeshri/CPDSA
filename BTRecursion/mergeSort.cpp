#include <iostream>
using namespace std;
#include <vector>

void merge(int arr[], int start, int mid, int end){
	vector<int>temp(end - start + 1);
	int index, left, right;
	left = start;
	right = mid + 1;
	index = 0;

	while(left <= mid && right <= end){
		if(arr[left] <= arr[right])temp[index++] = arr[left++];	
		else temp[index++] = arr[right++];		
	}
	while(left <= mid)temp[index++] = arr[left++];
	while(right <= end)temp[index++] = arr[right++];

	index = 0;
	while(start <= end)arr[start++] = temp[index++];
}

void mergeSort(int arr[], int start, int end){
	int mid = start + (end - start)/2;
	if(start >= end)return;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid + 1, end);
	merge(arr, start, mid, end);
}

int main() {
	int n;	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)cin >> arr[i];
	mergeSort(arr, 0, n);
	for(int i = 0; i < n; i++)cout << arr[i] << " ";

    
}
