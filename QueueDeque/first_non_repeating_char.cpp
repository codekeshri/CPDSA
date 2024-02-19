#include <iostream>
#include <string>
#include <queue>
using namespace std;

string solve(string A) {
    string ans = "";
    queue<char>q;
    q.push(A[0]);
    ans += A[0];
    cout << A[0] << endl;
    cout << " ans=" << ans << " front=" << q.front() << "  size=" << q.size() << endl; 
    for(int i = 1; i < A.size(); i++){
        if(A[i] == q.front())q.pop();
        else q.push(A[i]);
         
         
        ans += q.front();
        cout << ans << " front=" << q.front() << "  size=" << q.size() << endl; 
    }
    
    return ans;
}
int main() {

    string A;
    cin >> A;
    string ans;
    ans = solve(A);
    cout << ans;
    return 0;
}
