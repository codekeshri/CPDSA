/*------------------------------------ Author: Codekeshri ---------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define chrono() srand(chrono::high_resolution_clock::now().time_since_epoch().count())
#define mod 1000000007
#define INF (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define input(n) int n; cin >> n

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
    // #ifndef ONLINE_JUDGE
    //   //#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    //   freopen("error.txt", "w", stderr);
    // //#else
    //   //freopen("output.txt", "w", stdout);      
    //   //freopen("error.txt", "w", stderr);
    //  // #define debug(x)
    // #endif 
}
/*-------------------------------------------------------------------------------------------------------------*/


string solve() {
  int64_t n, m, a = 0, b = 0;
  cin >> n;
  vector<int64_t>arr(n);
  for(int64_t i = 0; i < n; i++){
    cin >> arr[i]; 
  }
  sort(arr.rbegin(), arr.rend());
  
  for(int64_t i = 0; i < n; i++){
    if(i%2 == 0 && arr[i]%2 == 0) a += arr[i];
    if(i%2 != 0 && arr[i]%2 !=0) b += arr[i];
  }
  //debug(a)
  if(a == b)return "Tie";
  if(a < b) return "Bob";
  else return "Alice";
}


int main() {
    init_code();
    
    int t;
    cin >> t;
    while(t--) {
      string ans = solve();
      cout << ans << endl;
    }
       
    return 0;
}
