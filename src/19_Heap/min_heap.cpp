#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
  int largest =
      i; // will store smallest element index among parent, left, right
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (arr[left] < arr[largest] && left < n)
    largest = left;

  if (arr[right] < arr[largest] && right < n)
    largest = right;

  if (largest != i) {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

void minHeap(int arr[], int n) {
  // build minHeap using STEPDOWN method for O(n) time complexity
  for (int i = n / 2 - 1; i >= 0; i--) {
    heapify(arr, n, i);
  }
}

int main() {

  int arr[] = {10, 3, 8, 9, 5, 13, 18, 14, 11, 70};
  minHeap(arr, 10);
  for (auto i : arr)
    cout << i << " ";
}
