#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void check(int n, int k, int m, string p){
        string s = "";
        string str = "";
        for(int i = 0; i < k; i++)str += char('a' + i);
        for(int i = 0; i < n; i++)s += str;
        //if(s.size() == m)return true;
        //else return false;
            
        //i will store s and p in a map with freq
        vector<int>count(26, 0);
        vector<int>ct(26, 0);
        for(int i = 0; i < s.size(); i++)count[s[i] - 'a']++;
        for(int i = 0; i < p.size(); i++)count[p[i] - 'a']++;
        for(int i = 0; i < 26; i++){
            if(count[i] != ct[i]){
                cout << "NO" << endl;
                string ans = "";
                for(int j = 0; j < ct[i]; j++)ans += char('a' + i);
                    
                

                
            }
        }
        
        return true;

        

        
}

int main() {
    int t; cin >> t;
    while(t--){
    	int n, k, m; cin >> n >> k >> m;
        string s; cin >> s;
        check(n, k, m, s);

    }
}
