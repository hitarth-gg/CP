// clang-format off
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
/* ------------------------ INPUT ----------------------- */
// 1
#define G(x) ll x; cin >> x;
#define GS(x) string x; cin >> x;
// 2
#define re(...) ll __VA_ARGS__; read(__VA_ARGS__)
void read() {}
template <typename T, typename... Args>
void read(T& first, Args&... args) {
    cin >> first;
    read(args...);
}
// 3
#define reV(v, n) vll v(n); cinv(v);
/* ------------------------------------------------------ */
/* ------------------------ debug ----------------------- */
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" |\
                                     "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" |\
                                     "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" |\
                                     "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<< c<<" |\
                                 "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl


                                 void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/* ------------------------------------------------------ */

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MOD 1000000007
#define INF 1e18+9
#define nl '\n'
#define precision(x) cout<<fixed<<setprecision(x)

#define fr(i, x, n) for (ll i = x; i < n; i ++)
#define loop(n) for(ll i=0;i<n;i++)

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#define vll vector<ll>
#define vp vector<pair<ll,ll>>

#define printVec(v) for(auto it:v)cout<<it<<' '; cout<<endl;
#define cinv(v) for(auto &it:v) cin>>it;

#define vsort(v) sort(v.begin(), v.end())
#define vsortrev(v) sort(v.rbegin(),v.rend())
#define vrev(v) reverse(v.rbegin(),v.rend())
#define v_sum(v) accumulate(v.begin(),v.end(),0LL)
#define v_min(v) *min_element (v.begin(),v.end())
#define v_max(v) *max_element (v.begin(),v.end())
#define v_count(v, target) count(v.begin(), v.end(), target)

#define bitcount __builtin_popcountll
#define bitCheck(n,k) ((n>>k)&1)
#define bitSet(n,k) (n|(1<<k))
#define bitClear(n,k) (n&(~(1<<k)))
#define bitFlip(n,k) (n^(1<<k))

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> ordered_set; // find_by_order, order_of_key
/* ------------------------------------------------------ */
ll mod_add(ll a, ll b, ll m);
ll mod_mul(ll a, ll b, ll m);
ll mod_sub(ll a, ll b, ll m);
ll binpow(ll a, ll b);
ll binpow(ll a, ll b, ll m);
ll kadane( vector<ll> arr,ll n);
ll ncr(ll n, ll r);
ll factorial(ll n);
ll lcm(ll a, ll b);

bool is_prime(ll n);
vector<bool> sieve(ll n); // vector<bool> isPrime = sieve(1000002);

vector<int> applyPermutation(vector<int> sequence, vector<int> permutation);
vector<int> permute(vector<int> sequence, vector<int> permutation, long long k);
int extEuclid(int a, int b, int& x, int& y); // int x, y; int gcd = extEuclid(a, b, x, y); // ax + by = gcd(a, b)
vector<long long> trial_division1(long long n);

ll last_index(ll l, ll r, vll &v, bool (&comp)(ll, ll), ll target); // comp function should return true if v[mid] <= target
ll first_index(ll l, ll r, vll &v, bool (&comp)(ll, ll), ll target); // comp function should return true if v[mid] < target

void genPrefix(vll &v);
/* ------------------------------------------------------ */

// clang-format on
// ctrl + shift + O : @Solve
vll v = {11, 12, 13, 14, 15, 16, 17};

vll v2 = {1, 2, 3, 4, 5, 6, 7};
set<ll> st = {0, 1, 2, 3, 4, 5, 6, 7, 8};
void solve()
{
    string s;
    cin >> s;
    ll count = 0;
    bool ans = true;
    if (s[s.size() - 1] == '9' || s[0] != '1')
    {
        ans = false;
    }

    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == '0')
        {
            ans = false;
            break;
        }
    }
    if (ans)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}

// clang-format off
int32_t main()
{
    fastio();

    clock_t begin = clock();
    int t=1; 
    cin >> t;
    while(t--)
    {
        solve();
    }
    clock_t end = clock();
    double duration = (double)(end - begin) / CLOCKS_PER_SEC;
#ifndef ONLINE_JUDGE
    // cerr << "Time: " << duration << endl;
#endif


    return 0;
}






















/* ------------------------------------------------------ */
/* ------------------------------------------------------ */
/* ------------------------------------------------------ */
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

ll binpow(ll a, ll b) {
    ll res = 1;
    while(b>0)
    {
        if(b&1)
            res = res*a;
        a=a*a;
        b>>=1;
    }
    return res;
}
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m; // m = mod
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll kadane( vector<ll> arr,ll n) {
    ll max_end = 0;
    ll mx =0;
    for(ll i =0;i<n;i++){
        max_end+=arr[i];
        if(mx<max_end)
            mx = max_end;
        if(max_end<0)
            max_end=0;
    }
    return mx;
}
ll ncr(ll n, ll r) {
    if (n==r) return 1;
    if(r==1) return n;
    return ncr(n-1, r-1) + ncr(n-1, r);
}
ll factorial(ll n) {
    return tgamma(n+1);
}
ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}
bool is_prime(ll n) {
    if (n == 1)
        return false;
    ll i = 2;
    while (i*i <= n) {
        if (n % i == 0)
            return false;
        i += 1;
    }
    return true;
}
vector<int> applyPermutation(vector<int> sequence, vector<int> permutation) {
    vector<int> newSequence(sequence.size());
    for(int i = 0; i < sequence.size(); i++) {
        newSequence[i] = sequence[permutation[i]];
    }
    return newSequence;
}

vector<int> permute(vector<int> sequence, vector<int> permutation, long long k) {
    while (k > 0) {
        if (k & 1) {
            sequence = applyPermutation(sequence, permutation);
        }
        permutation = applyPermutation(permutation, permutation);
        k >>= 1;
    }
    return sequence;
}
// Sieve of Eratosthenes
vector<bool> sieve(ll n)
{
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(ll i = 2; i*i<=n; i++)
    {
        if(is_prime[i] == true && (ll)i*i <=n)
        {
            for(int j = i*i; j<=n; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;
}

// extended euclidean algorithm
int extEuclid(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extEuclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

/* ------------------------------------------------------ */

/* -------------------- BINARY SEARCH ------------------- */

/* Compartor function for last_index example */
// bool find(ll mid, ll target)
// {
//     if (mid <= target)
//         return true;
//     else
//         return false;
// }
// Calling : cout << first_index(l, r, v, find, target) << nl;

ll last_index(ll l, ll r, vll &v, bool (&comp)(ll, ll), ll target)
{
    while (l < r)
    {
        ll mid = (l + r + 1) / 2; // ceil
        if (comp(v[mid], target)) // if v[mid] <= target
            l = mid;
        else                      // if v[mid] > target
            r = mid - 1;
    }
    return (comp(l, target)) ? l : -1;
}
ll first_index(ll l, ll r, vll &v, bool (&comp)(ll, ll), ll target)
{
    while (l < r)
    {
        ll mid = (l + r) / 2;      // floor
        if (comp(v[mid], target))  // if v[mid] < target
            l = mid + 1;
        else                       // if v[mid] >= target
            r = mid;
    }
    return (comp(l, target)) ? l : -1;
}

/* ----------------- BINARY SEARCH ENDS ----------------- */

void genPrefix(vll &v)
{
    for (int i = 1; i < v.size(); i++)
        v[i] = v[i - 1] + v[i];
}
