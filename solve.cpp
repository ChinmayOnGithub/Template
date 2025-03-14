#include <bits/stdc++.h>
using namespace std;

// Type aliases for convenience
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Fast I/O
#define fastio() ios::sync_with_stdio(false), cin.tie(nullptr)

// Debugging macros (only enabled during local testing)
#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#define dbgarr(x)        \
  {                      \
    cerr << #x << ": ";  \
    for (auto &el : (x)) \
      cerr << el << " "; \
    cerr << "\n";        \
  }
#else
#define dbg(x)
#define dbgarr(x)
#endif

// Common macros
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)((x).size())
#define endl "\n"
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

// Constants
const int MOD = 1e9 + 7;
const ll INF = 1e18;

// Modular arithmetic functions
ll modAdd(ll a, ll b, ll mod = MOD)
{
  a %= mod;
  b %= mod;
  ll res = a + b;
  if (res >= mod)
    res -= mod;
  return res;
}

ll modMul(ll a, ll b, ll mod = MOD)
{
  a %= mod;
  b %= mod;
  return (a * b) % mod;
}

ll modExp(ll a, ll b, ll mod = MOD)
{
  ll res = 1;
  a %= mod;
  while (b > 0)
  {
    if (b & 1)
      res = modMul(res, a, mod);
    a = modMul(a, a, mod);
    b >>= 1;
  }
  return res;
}

// Utility functions for input/output
template <typename T>
void readVector(vector<T> &v)
{
  for (auto &x : v)
    cin >> x;
}

template <typename T>
void printVector(const vector<T> &v, char sep = ' ')
{
  for (auto &x : v)
    cout << x << sep;
  cout << "\n";
}

// Main solver function: place your problem-specific solution code here.
void solve()
{
  // Example: read an integer and print it (replace with your solution)
  int n;
  cin >> n;
  vi arr(n);
  readVector(arr);
  // For debugging, print the array when testing locally.
  dbgarr(arr);
  // Write your solution below...
  cout << "Processed " << n << " elements." << endl;
}

// Main function
int main()
{
  fastio();
  int t = 1;
  // Uncomment below if multiple test cases are provided.
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
