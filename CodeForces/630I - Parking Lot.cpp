#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define fr(i, x, n) for (ll i = x; i < n; i ++)
#define loop(n) for(ll i=0;i<n;i++)
#define ll long long int
#define sortv(v) sort(v.begin(), v.end()),
#define sortrv(v) sort(v.rbegin(),v.rend())

// typedef long long ll;

/* ------------------------------------------------------ */

ll binpow(ll a, ll b)
{
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
ll maxvec(vector<ll> &v) {
    ll mx  = LLONG_MIN;
    for(ll i=0;i<v.size();i++) mx = max(v[i], mx);
    return mx;
}
ll minvec(vector<ll> &v) {
    ll mn  = LLONG_MAX;
    for(ll i=0;i<v.size();i++) mn = min(v[i], mn);
    return mn;
}
ll sumvec(vector<ll> &v) {
    ll sum = 0;
    for(ll i=0;i<v.size();i++) sum += v[i];
    return sum;
}
ll kadane( vector<ll> arr,ll n) {
        
    ll max_end = 0;
    ll mx =0;
 
    for(ll i =0;i<n;i++){
        max_end+=arr[i];
        if(mx<max_end){
            mx = max_end;
        }
        if(max_end<0){
            max_end=0;
        }
    }
    return mx;
}
ll ncr(ll n, ll r)
{
    if (n==r) return 1;
    if(r==1) return n;
    return ncr(n-1, r-1) + ncr(n-1, r);
}
ll factorial(ll n)
{
    return tgamma(n+1);
}
ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}
/* ------------------------------------------------------ */

int main()
{
    fastio();

    ll n ; cin >> n ;
        cout << 4*((ncr(n-1, 1))-2)*binpow(3,2)*binpow(4, n-2-2) + 2*4*3*binpow(4, n-3) << endl;

    return 0;
}
