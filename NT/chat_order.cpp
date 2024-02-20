/*------------------------------------ Author: Codekeshri ---------------------------------------------------*/
#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define chrono() srand(chrono::high_resolution_clock::now().time_since_epoch().count())
#define mod 1000000007
#define INF (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define input(n) int n; cin >> n
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void init_code(){
    fastio();
    chrono();   
    #ifndef ONLINE_JUDGE
      #define debug(x) cerr << #x << " "; _print(x); cerr << endl;
      freopen("input.txt", "r", stdin);
      freopen("Error.txt", "w", stderr);
    #else 
      #define debug(x)
    #endif 
}
/*-------------------------------------------------------------------------------------------------------------*/

void solve() {
  int n; 
  cin >> n;
  
  vector<string>v(n);
  map<string, int>m;
  vector<string>arr;
  for(int i = 0; i < n; i++){
      cin >> v[i]; 
  }
  
  for(int i = 0; i < n/2; i++){
      swap(v[i], v[n-1-i]);
  }
  
  
  // for(int i = 0; i < n; i++){
  //     cout << v[i] << endl;
  // }
  
  
  for(int i = 0; i < n; i++){
      if(m.find(v[i]) == m.end()){
        cout << v[i] << endl;
        m[v[i]] = i; 
        
      }
  }
  
  

  
  
  

}

int main() {
    init_code();   
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }
       
    return 0;
}


























