// clang-format off
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

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

/* ------------------------------------------------------ */
ll mod_add(ll a, ll b, ll m);
ll mod_mul(ll a, ll b, ll m);
ll mod_sub(ll a, ll b, ll m);
ll binaryToDecimal(string str);
ll binaryToDecimal(ll n);
ll binpow(ll a, ll b);
ll binpow(ll a, ll b, ll m);
ll kadane( vector<ll> arr,ll n);
ll ncr(ll n, ll r);
ll factorial(ll n);
ll lcm(ll a, ll b);
bool is_prime(ll n);
vector<int> applyPermutation(vector<int> sequence, vector<int> permutation);
vector<int> permute(vector<int> sequence, vector<int> permutation, long long k);
vector<bool> sieve(ll n); // vector<bool> isPrime = sieve(1000002);
int extEuclid(int a, int b, int& x, int& y); // int x, y; int gcd = extEuclid(a, b, x, y); // ax + by = gcd(a, b)
/* ------------------------------------------------------ */

// clang-format on
// ctrl + shift + O : @Solve
void solve()
{
    ll n, k ; cin >> n >> k ;
    vll v;
    ll temp = k;
    k--;
    for(ll i = 2; i*i<=n && k && n>1; i++ )
    {
        while(n%i == 0 && k && n > 1)
        {
            v.push_back(i);
            n = n/i;
            k--;
        }
    }
    if(n>1)
        v.push_back(n);
    if(v.size() != temp)
        cout << -1;
    else
        printVec(v);
}

// clang-format off
int main()
{
    fastio();

    clock_t begin = clock();
    int t=1; 
    // cin >> t;
    while(t--)
    {
        solve();
    }
    clock_t end = clock();
    double duration = (double)(end - begin) / CLOCKS_PER_SEC;
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration << endl;
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
ll binaryToDecimal(string str)
{
    ll base = 1;
    ll dec_value = 0;
    while(str.size())
    {
        ll temp = (str.back()) - '0';
        str.pop_back();
        dec_value += temp * base;
        base = base*2;
    }
    return dec_value;
}
ll binaryToDecimal(ll n)
{
    ll num = n;
    ll dec_value = 0;
    // Initializing base value to 1, i.e 2^0
    ll base = 1;
    ll temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
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

/* ------------------------------------------------------ */
