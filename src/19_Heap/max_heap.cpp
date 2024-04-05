/* Build a Max Heap in O(n) time complexity. and possibly O(n) space complexity
Heap can be built in On time, prviously we built in O(nlogn) time
Heap sort is better than Merge sort, Quick sort.

    Max Heap
              10
            /    \
          /        \
         5          15
       /  \        /  \
      2    7     12    20
     / \  / \   / \   /  \
    1  3 6  8  11 13 18  25


    Min Heap
               1
            /      \
          /          \
         2            3
       /   \         /   \
      4     5       6     7
     / \   / \     / \   / \
    8   9 10 11   12 13 14 15

    Height of a binary tree = logn
    so time to heapify is nlogn



HEAPIFY = compare child with parent = take child up = start comparing from first
child

-----Optimized Approach (using STEPDOWN)---------------

STEPDOWN = compare parent with child = take parent down = start comparing from
last child

As in this approach there is no need to compare leaf nodes as they don't have
children so time complexity will reduce significantly.

So t.c. = n/4 * (1 step) + n/8 * (2 steps) + ....... + logn (root node will
traverse height) = n * (1/4 + 2/8 + 3/16 + ...) = n

now space complexity = O(n)

*/

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
  int largest = i; // will store biggest element index among parent, left, right
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (arr[left] > arr[largest] && left < n)
    largest = left;

  if (arr[right] > arr[largest] && right < n)
    largest = right;

  if (largest != i) {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

void maxHeap(int arr[], int n) {
  // build maxHeap using STEPDOWN method for O(n) time complexity
  for (int i = n / 2 - 1; i >= 0; i--) {
    heapify(arr, n, i);
  }
}

int main() {

  int arr[] = {10, 3, 8, 9, 5, 13, 18, 14, 11, 70};
  maxHeap(arr, 10);
  for (auto i : arr)
    cout << i << " ";
}
