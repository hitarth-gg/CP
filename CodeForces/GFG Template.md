/* ---------------------- TEMPLATE ---------------------- */

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

#define MOD 1000000007
#define INF 1e18+9
#define nl '\n'
#define ll long long int
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define printVec(v) for(auto it:v)cout<<it<<' '; cout<<endl;
#define cinv(v) for(auto &it:v) cin>>it;
#define ll long long int
#define fr(i, x, n) for (ll i = x; i < n; i ++)
#define loop(n) for(ll i=0;i<n;i++)

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

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_inverse(ll a, ll b) { return binpow(a, b - 2, b); }
ll mod_div(ll a, ll b, ll m) {a = a % m;b = b % m; return (mod_mul(a, mod_inverse(b, m), m) + m) % m;} // only for prime m

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
    return (a*b)/__gcd(a,b);
}

vll get_factors(ll num, ll upper_limit = 1000000, bool reset = false)
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
} // vector<bool> isPrime = sieve(1000002);

