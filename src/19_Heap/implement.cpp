/* Heap Implementation Code - Heapify -> Insert -> Delete 
Heapify creates a heap from a binary tree.
so input is an array from there just create a BT and then Heapify
STEPS: 
- create a binary tree from the array
- start from the first index of non-leaf node whose index = n/2 - 1;
- set currentElementIndex i == largest
- leftChildIndex = 2*i + 1 and rightChildIndex = 2*i + 2
- if(leftChild > currentElement)swap and largest = leftChildIndex
- if(rightChild > currentElement) swap and largest = rightChildIndex
- Repeat for all subtrees i.e. while(i > 0 && arr[i] > arr[(i-1)/2])
*/ 


#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
    public: 
        vector<int> arr;

        void upHeapify(int i){
            int smallest = i/2 - 1;
            while(i > 0 && arr[i] > arr[smallest]){
                swap(arr[i], arr[smallest]);
                i = smallest;
                smallest = i/2 - 1;
            }

        }

        void downHeapify(int i){
            int left = 2*i + 1;
            int right = 2*i + 2;

            int largest = i;

            while(left < arr.size() && arr[left] > arr[largest]) {
                if(arr[left] >= arr[largest]) {
                    swap(arr[left], arr[largest]);
                    downHeapify(int largest);
                }else{
                    largest = left;
                }
                
                if(arr[right] >= arr[largest]) {
                    swap(arr[right], arr[largest]);
                    downHeapify(int largest);
                }else{
                    largest = right;
                }
                
            }
        }

        void insert(int val){
            arr.push_back(val);
            upHeapify(arr.size() - 1);
        }

        


}



int main() {

 
    return 0;
    
}