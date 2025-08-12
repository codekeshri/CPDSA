/*---Author: Codekeshri---*/
#include <bits/stdc++.h>
#define init_random() \
  srand(chrono::high_resolution_clock::now().time_since_epoch().count())
#define mod 1000000007
#define INF (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define fast_io()                   \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T>
void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

void init_code() {
  fast_io();
  init_random();
#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#else
#define debug(x)
#endif
}
/*------------------------------------*/

void solve() { 
  string s;
  cin >> s;

  if(s.size() < 3){
    cout << s <<"\n";
  }else{
  for(int i = 2; i < s.size(); i++){
    string st2 = s.substr(i-2, 3);
    if(st2 == "FFT")swap(s[i], s[i-1]);
    if(st2 == "NTT")swap(s[i], s[i-2]);
  } 

  cout << s << "\n";

  }
}

int main() {
  init_code();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}