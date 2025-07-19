#include <bits/stdc++.h>
using namespace std;


bool check(string s, string t, string p){
    map<char, int>m;
    map<char, int>n;

    // store chars of t in a map
    for(char c: t)m[c]++;

    // check if chars count in map fall short of s
    for(char c: s){
        m[c]--;
        if(m[c] < 0)return false;
    }

    // store chars of p in another map
    for(char c: p)n[c]++;

    // now compare the two maps, if first map has more count of a char return false
    for(const auto& pair: m){
       if(pair.second > 0 && n[pair.first] < pair.second) return false;
    }

    return true;

}

int main(){
int t=1;
cin >> t;
while(t--){
    string s, t, p;
    cin >> s >> t >> p;
    cout << (check(s, t, p) ? "yes" : "no") << endl;
}
 return 0;
}