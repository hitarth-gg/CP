#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define fr(i, x, n) for (ll i = x; i < n; i++)
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int
#define sortv(v) sort(v.begin(), v.end()),
#define sortrv(v) sort(v.rbegin(), v.rend())

// typedef long long ll;

/* ------------------------------------------------------ */
ll binpow(ll a, ll b);
ll binpow(ll a, ll b, ll m);
ll maxvec(vector<ll> &v);
ll minvec(vector<ll> &v);
ll sumvec(vector<ll> &v);
ll kadane(vector<ll> arr, ll n);
ll ncr(ll n, ll r);
ll factorial(ll n);
ll lcm(ll a, ll b);
bool is_prime(ll n);
vector<int> applyPermutation(vector<int> sequence, vector<int> permutation);
vector<int> permute(vector<int> sequence, vector<int> permutation, long long k);
/* ------------------------------------------------------ */

vector<int> appPerm(vector<int> sequence, vector<int> permutation)
{
    vector<int> newSequence(sequence.size());
    fr(i, 1, sequence.size())
    {
        newSequence[i] = sequence[permutation[i]];
    }

    return newSequence;
}

vector<int> permute2(vector<int> sequence, vector<int> permutation, long long k)
{
    while (k > 0)
    {
        if (k & 1)
        {
            sequence = appPerm(sequence, permutation);
        }
        permutation = appPerm(permutation, permutation);
        k >>= 1;
    }
    return sequence;
}

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        v[0] = 0;

        int i = 1, j = ceil((double)n / 2) + 1;
        int k2 = 1;
        while (j <= n)
        {
            if (k2 & 1)
            {
                v[i] = k2;
                k2++;
                i++;
            }
            else
            {
                v[j] = k2;
                k2++;
                j++;
            }
        }


        k--;
        vector<int> v2 = permute2(v, v, k);

        fr(i, 1, n+1)
            cout << v2[i] << " ";
        cout << endl;

    }

    return 0;
}

/* ------------------------------------------------------ */
/* ------------------------------------------------------ */
/* ------------------------------------------------------ */
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
ll binpow(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m; // m = mod
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll maxvec(vector<ll> &v)
{
    ll mx = LLONG_MIN;
    for (ll i = 0; i < v.size(); i++)
        mx = max(v[i], mx);
    return mx;
}
ll minvec(vector<ll> &v)
{
    ll mn = LLONG_MAX;
    for (ll i = 0; i < v.size(); i++)
        mn = min(v[i], mn);
    return mn;
}
ll sumvec(vector<ll> &v)
{
    ll sum = 0;
    for (ll i = 0; i < v.size(); i++)
        sum += v[i];
    return sum;
}
ll kadane(vector<ll> arr, ll n)
{
    ll max_end = 0;
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        max_end += arr[i];
        if (mx < max_end)
            mx = max_end;
        if (max_end < 0)
            max_end = 0;
    }
    return mx;
}
ll ncr(ll n, ll r)
{
    if (n == r)
        return 1;
    if (r == 1)
        return n;
    return ncr(n - 1, r - 1) + ncr(n - 1, r);
}
ll factorial(ll n)
{
    return tgamma(n + 1);
}
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}
bool is_prime(ll n)
{
    if (n == 1)
        return false;
    ll i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return false;
        i += 1;
    }
    return true;
}
vector<int> applyPermutation(vector<int> sequence, vector<int> permutation)
{
    vector<int> newSequence(sequence.size());
    for (int i = 0; i < sequence.size(); i++)
    {
        newSequence[i] = sequence[permutation[i]];
    }
    return newSequence;
}

vector<int> permute(vector<int> sequence, vector<int> permutation, long long k)
{
    while (k > 0)
    {
        if (k & 1)
        {
            sequence = applyPermutation(sequence, permutation);
        }
        permutation = applyPermutation(permutation, permutation);
        k >>= 1;
    }
    return sequence;
}

/* ------------------------------------------------------ */
