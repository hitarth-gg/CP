// clang-format off
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

/* ----------------------- int128 ----------------------- */
// typedef __int128 lll;
// istream &operator>>(istream &cin, lll &x) { x=0; static string s; cin>>s; for (char c:s) x=x*10+(c-'0'); return cin; }
// ostream &operator<<(ostream &cout, lll x) { static char s[60]; int tp=1; s[0]='0'+(x%10); while (x/=10) s[tp++]='0'+(x%10); while (tp--) cout<<s[tp]; return cout; }
/* ------------------------------------------------------ */
/* ------------------------ INPUT ----------------------- */
// 1
#define G(x) ll x; cin >> x;
#define reS(x) string x; cin >> x;
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
/* ----------------------- OUTPUT ----------------------- */
// Base case: single variable
template <typename T>
void print(const T& t) {
    std::cout << t;
}

// Recursive case: multiple variables
template <typename T, typename... Args>
void print(const T& first, const Args&... rest) {
    std::cout << first << " ";
    print(rest...);
}
/* ------------------------------------------------------ */
/* ------------------------ debug ----------------------- */
#ifndef ONLINE_JUDGE
#include "D:\Compi\Headers\debug3.h"
#else
#define debug(...)
#define debugArr(...)
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
#define UB(v, x) distance(v.begin(), upper_bound(v.begin(), v.end(), x));
#define LB(v, x) distance(v.begin(), lower_bound(v.begin(), v.end(), x));
#define UNIQUE(v) vsort(v), v.erase(unique(v.begin(), v.end()), v.end());

#define bitcount __builtin_popcountll
#define bitCheck(n,k) ((n>>k)&1)
#define bitSet(n,k) (n|(1<<k))
#define bitClear(n,k) (n&(~(1<<k)))
#define bitFlip(n,k) (n^(1<<k))

typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag,tree_order_statistics_node_update> ordered_set; // find_by_order, order_of_key
/* ------------------------------------------------------ */
ll mod_add(ll a, ll b, ll m=MOD);
ll mod_mul(ll a, ll b, ll m=MOD);
ll mod_sub(ll a, ll b, ll m=MOD);
ll mod_div(ll a, ll b, ll m=MOD); // only for prime m
ll binpow(ll a, ll b);
ll binpow(ll a, ll b, ll m);
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_inverse(ll a, ll b);
ll kadane( vector<ll> arr,ll n);
ll ncr(ll n, ll r);
ll ncr2(ll n, ll r);
ll factorial(ll n);
ll lcm(ll a, ll b);

bool is_prime(ll n);
vector<bool> sieve(ll n); // vector<bool> isPrime = sieve(1000002);

ll extEuclid(ll a, ll b, ll& x, ll& y); // ll x, y; ll gcd = extEuclid(a, b, x, y); // ax + by = gcd(a, b)
vector<long long> trial_division1(long long n);
vll get_factors(ll num, ll upper_limit = 1000000, bool reset = false);

ll last_index(ll l, ll r, vll &v, bool (&comp)(ll, ll), ll target); // comp function should return true if v[mid] <= target
ll first_index(ll l, ll r, vll &v, bool (&comp)(ll, ll), ll target); // comp function should return true if v[mid] < target

void genPrefix(vll &v);

/* ---------------------- snippets ---------------------- */
// STRING: string_hashing | string_double_hashing/no_mod | rabin_karp | kmp | z_function
// ARRAY: apply_permutation
// OTHERS: custom_hash
/* ------------------------------------------------------ */

// clang-format on
void solve()
{
    re(n, k);
    reV(v, n);

    vll same;
    vector<ll> f(n+1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (v[i-1] == 1)
            f[i] = f[i - 1] + 1;
        else
            f[i] = f[i - 1];
    }

    vll p(n + 1, 0);

    for (ll i = 1; i <= n; i++)
        p[i] = p[i - 1] + v[i - 1];

    while (k--)
    {
        re(a, b);
        if (a == b)
        {
            cout << "NO" << nl;
            continue;
        }
        ll k = (b - a + 1) / 2;
        ll ones = f[b] - f[a - 1];
        if (ones > k)
        {
            ll extra = ones - k;
            ll rem_non_1s = b - a + 1 - ones;
            ll rem_non_1s_sum = p[b] - p[a - 1] - ones;
            ll plugs = rem_non_1s_sum - rem_non_1s;
            debug(extra, rem_non_1s, rem_non_1s_sum, plugs);
            if (plugs < ones)
            {
                cout << "NO" << nl;
                continue;
            }
        }
        cout << "YES" << nl;
    }
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
ll mod_inverse(ll a, ll b) { return binpow(a, b - 2, b); }
ll mod_div(ll a, ll b, ll m) {a = a % m;b = b % m; return (mod_mul(a, mod_inverse(b, m), m) + m) % m;} // only for prime m

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

ll ncr2(ll n, ll r)
{
    static vll fact;
    static bool initialized = false;
    if (!initialized)
    {
        ll sz = 100LL;
        fact.resize(sz, 1);
        for (ll i = 2; i < sz; i++)
            fact[i] = mod_mul(fact[i - 1], i, MOD);
        initialized = true;
        // cout << "initialized" << nl;
    }
    ll ans = mod_div(fact[n], mod_mul(fact[n - r], fact[r], MOD), MOD);
    return ans;
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
ll extEuclid(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extEuclid(b, a % b, x1, y1);
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

vll get_factors(ll num, ll upper_limit, bool reset)
{
    vll factors;
    static ll n;
    static vll spf;
    static bool initialized = false;
    if (!initialized || reset)
    {
        n = upper_limit;
        initialized = true;
        spf.assign(n, -1);
        for (ll i = 2; i < n; i++)
            if (spf[i] == -1)
                for (ll j = i; j < n; j += i)
                    if (spf[j] == -1)
                        spf[j] = i;
    }

    if (num <= 1)
        return factors;
    while (num > 1)
    {
        factors.push_back(spf[num]);
        num /= spf[num];
    }
    return factors;
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
