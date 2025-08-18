#include "bits/stdc++.h"
#include <cstdint>
using namespace std;
#define vi vector<int>
#define vll vector<long long>
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)((x).size())
#define ff first
#define ss second
#define s(x) sort(all(x))
#define sr(x) sort(x.rbegin(), x.rend())
#define bg begin()
#define ed end()
#define pii pair<int, int>
#define fr(i, a, b) for (int i = a; i < b; i++)
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 1e6 + 5;
double func(double x, double b, double c)
{
    return (x * x + b * x + c) / sin(x);
}
void solve()
{
    double b, c;
    cin >> b >> c;
    double lo = 0, hi = M_PI / 2;
    double mid1, mid2;
    while (hi - lo >= 1e-9)
    {
        mid1 = lo + (hi - lo) / 3.0;
        mid2 = hi - (hi - lo) / 3.0;
        double f1 = func(mid1, b, c);
        double f2 = func(mid2, b, c);
        if (f1 > f2)
        {
            lo = mid1;
        }
        else if (f1 < f2)
        {
            hi = mid2;
        }
        else
        {
            lo = mid1;
            hi = mid2;
        }
    }
    cout << fixed << setprecision(10);
    cout << func(lo, b, c) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
