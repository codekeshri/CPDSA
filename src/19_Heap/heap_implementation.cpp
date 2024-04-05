#include <iostream>
using namespace std;

class MaxHeap {
  int *arr, size,
      total_size; // total_size is array size and size is total elements in heap

public:
  MaxHeap(int n) {
    arr = new int[n];
    size = 0;
    total_size = n;
  }

  void insert(int val) {
    if (size == total_size) {
      cout << "Heap Overflow";
      return;
    }

    arr[size] = val; // inserting in array at last
    int i = size;
    size++;

    // heapify - compare last element with parent, swap, repeat
    while (arr[(i - 1) / 2] < arr[i] && i > 0) {
      swap(arr[(i - 1) / 2], arr[i]);
      i = (i - 1) / 2; // update the index to parent
    }

    cout << " inserted" << endl;
  }

  void print() {
    for (int i = 0; i < size; i++)
      cout << arr[i] << " ";

    cout << endl;
  }

  void Heapify(int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && arr[left] > arr[i])
      largest = left;
    if (right < size && arr[right] > arr[i])
      largest = right;

    if (largest != i) {
      swap(arr[i], arr[largest]);
      Heapify(largest);
    }
  }

  void Delete() { // can only delete root element and Heapify
    arr[0] = arr[size - 1];
    size--;

    if (size == 0)
      return;

    Heapify(0);
  }
};

int main() {
  MaxHeap H1(6);
  H1.insert(4);
  H1.insert(14);
  H1.insert(40);

  H1.print();
  H1.Delete();
  H1.print();
}
