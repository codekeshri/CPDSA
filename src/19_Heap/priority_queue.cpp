/* Priority Queue is Nothing but Max Heap or Min Heap
 */

#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main() {

  priority_queue<int> p; // max heap

  p.push(10);
  p.push(1);
  p.push(4);
  p.push(17);

  cout << p.size() << " " << p.top() << endl;
  p.pop();

  while (!p.empty()) {
    cout << p.top() << " ";
    p.pop();
  }
}
