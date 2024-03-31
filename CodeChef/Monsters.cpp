#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MOD 1000000007
#define INF 1e18+9

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

#define printVec(v) for(auto it:v)cout<<it<<' '; cout<<endl; // EDIT
#define cinv(v) for(auto &it:v) cin>>it;

#define vsort(v) sort(v.begin(), v.end())
#define vsortrev(v) sort(v.rbegin(),v.rend())
#define vrev(v) reverse(v.rbegin(),v.rend())
#define v_sum(v) accumulate(v.begin(),v.end(),0LL)
#define v_min(v) *min_element (v.begin(),v.end())
#define v_max(v) *max_element (v.begin(),v.end())

#define v_count(v, target) count(v.begin(), v.end(), target) // ADD 

#define bitcount __builtin_popcountll
#define bitCheck(n,k) ((n>>k)&1)
#define bitSet(n,k) (n|(1<<k))
#define bitClear(n,k) (n&(~(1<<k)))
#define bitFlip(n,k) (n^(1<<k))


/* ------------------------------------------------------ */
ll binpow(ll a, ll b);
ll binpow(ll a, ll b, ll m);
ll kadane( vector<ll> arr,ll n);
ll ncr(ll n, ll r);
ll factorial(ll n);
ll lcm(ll a, ll b);
bool is_prime(ll n);
vector<int> applyPermutation(vector<int> sequence, vector<int> permutation);
vector<int> permute(vector<int> sequence, vector<int> permutation, long long k);
/* ------------------------------------------------------ */

// vector<ll> sieve(ll n) // ADD
// {
//     vector<bool> is_prime(n+1, true);
//     is_prime[0] = is_prime[1] = false;
//     for(ll i = 2; i<=n; i++)
//     {
//         if(is_prime[i] == true && (ll)i*i <=n)
//         {
//             for(int j = i*i; j<=n; j += i)
//                 is_prime[j] = false;
//         }
//     }


//     vector<ll> prime_numbers;
//     for(ll i =0; i<=n;i++)
//     {
//         if(is_prime[i] == true)
//             prime_numbers.push_back(i);
//     }
//     return prime_numbers;

// }
vector<bool> sieve(ll n) // ADD
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
vector<bool> isPrime = sieve(1000002);


int main()
{
    fastio();

    int t; cin >> t;
    while(t--)
    {
        int h ; cin >> h ;
        
        int ans=0;
        ll curr = 1;
        while(h>0)
        {
            if(isPrime[h])
            {
                ans++;
                cout << ans << endl;
                break;
            }
            else
            {
                h-=curr;
                curr*=2;
                ans++;
            }
            if(h==0)
            {
                cout << ans << endl;
                break;
            }
            if(h<0)
            {
                cout << -1 << endl;
                break;
            }
        }
    }

    return 0;
}






















/* ------------------------------------------------------ */
/* ------------------------------------------------------ */
/* ------------------------------------------------------ */
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

/* ------------------------------------------------------ */
