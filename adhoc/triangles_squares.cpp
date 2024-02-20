#include <iostream>
using namespace std;
#include <set>
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       set<int>set;
       for(int i = 0; i < n; i++){
           string s;
           cin >> s;
           int size = 0;
           for(auto &j: s) size += (j  == '1');
           if(size)set.insert(size);
       }

       cout << (set.size() != 1 ? "TRIANGLE" : "SQUARE") << "\n";
    }
    return 0;
}
