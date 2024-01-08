#include <iostream>
using namespace std;
#include <vector>
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int>m, t;
    for(int i = 0; i < n; i++){
        if(s[i] == 'T')t.push_back(i);
        else m.push_back(i);
    }
//for(int i = 0; i < t.size(); i++)cout << t[i];
  //  for(int i = 0; i < m.size(); i++)cout << m[i];

    bool flag = true;
    if(t.size() != 2*m.size())flag = false;
    else for(int i = 0; i < m.size(); i++)if(!(t[i] < m[i] && m[i] < t[i + m.size()]))flag = false;
    if(flag)cout << "YES\n";
    else cout << "NO\n";
    return;

}

int main() {
    int t; cin >> t;
    while(t--)solve();
}
