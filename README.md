# Personal Archive of Competitive Programming Problems and Notes

## DEFINEs ////// q(≧▽≦q)

```cpp
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
// #ifndef ONLINE_JUDGE
#ifdef hitarth
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

template <typename T>
struct matrix : vector<vector<T>> {matrix(size_t n, size_t m, T value):vector<vector<T>>(n, vector<T>(m, value)){}};

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
#define bitCheck(n,k) ((n>>k)&1LL)
#define bitSet(n,k) (n|(1LL<<k))
#define bitClear(n,k) (n&(~(1LL<<k)))
#define bitFlip(n,k) (n^(1LL<<k))

typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag,tree_order_statistics_node_update> ordered_set; // find_by_order, order_of_key
// priority_queue<long long, vector<long long>, greater<long long>> pq;
```

## DEBUGGING TEMPLATE ////// ...(*￣０￣)ノ

- [Headers/debug3.h](Headers/debug3.h)

```cpp
#ifndef DEBUG_TEMPLATE_H
#define DEBUG_TEMPLATE_H

#include <bits/stdc++.h>

namespace __DEBUG_UTIL__ {
    using namespace std;

    template <typename T>
    concept is_iterable = requires(T &&x) { begin(x); } && !is_same_v<remove_cvref_t<T>, string>;

    void print(const char *x) { cerr << x; }
    void print(char x) { cerr << "'" << x << "'"; }
    void print(bool x) { cerr << (x ? "T" : "F"); }
    void print(string x) { cerr << "\"" << x << "\""; }
    void print(vector<bool> &v) {
        int f = 0;
        cerr << '{';
        for (auto &&i : v)
            cerr << (f++ ? "," : "") << (i ? "T" : "F");
        cerr << "}";
    }

    template <typename T>
    void print(T &&x) {
        if constexpr (is_iterable<T>)
            if (size(x) && is_iterable<decltype(*(begin(x)))>) {
                int f = 0;
                cerr << "\n~~~~~\n";
                for (auto &&i : x) {
                    cerr << setw(2) << left << f++, print(i), cerr << "\n";
                }
                cerr << "~~~~~\n";
            } else {
                int f = 0;
                cerr << "{";
                for (auto &&i : x)
                    cerr << (f++ ? "," : ""), print(i);
                cerr << "}";
            }
        else if constexpr (requires { x.pop(); }) {
            auto temp = x;
            int f = 0;
            cerr << "{";
            if constexpr (requires { x.top(); })
                while (!temp.empty())
                    cerr << (f++ ? "," : ""), print(temp.top()), temp.pop();
            else
                while (!temp.empty())
                    cerr << (f++ ? "," : ""), print(temp.front()), temp.pop();
            cerr << "}";
        } else if constexpr (requires { x.first; x.second; }) {
            cerr << '(', print(x.first), cerr << ',', print(x.second), cerr << ')';
        } else if constexpr (requires { get<0>(x); }) {
            int f = 0;
            cerr << '(', apply([&f](auto... args)
                               { ((cerr << (f++ ? "," : ""), print(args)), ...); },
                               x);
            cerr << ')';
        } else
            cerr << x;
    }

    template <typename T, typename... V>
    void printer(const char *names, T &&head, V &&...tail) {
        int i = 0;
        for (size_t bracket = 0; names[i] != '\0' and (names[i] != ',' or bracket != 0); i++)
            if (names[i] == '(' or names[i] == '<' or names[i] == '{')
                bracket++;
            else if (names[i] == ')' or names[i] == '>' or names[i] == '}')
                bracket--;
        cerr.write(names, i) << " = ";
        print(head);
        if constexpr (sizeof...(tail))
            cerr << " ||", printer(names + i + 1, tail...);
        else
            cerr << "]\n";
    }

    template <typename T, typename... V>
    void printerArr(const char *names, T arr[], size_t N, V... tail) {
        size_t i = 0;
        for (; names[i] and names[i] != ','; i++)
            cerr << names[i];
        for (i++; names[i] and names[i] != ','; i++)
            ;
        cerr << " = {";
        for (size_t ind = 0; ind < N; ind++)
            cerr << (ind ? "," : ""), print(arr[ind]);
        cerr << "}";
        if constexpr (sizeof...(tail))
            cerr << " ||", printerArr(names + i + 1, tail...);
        else
            cerr << "]\n";
    }

}

#ifndef ONLINE_JUDGE
#define debug(...) std::cerr << "[", __DEBUG_UTIL__::printer(#__VA_ARGS__, __VA_ARGS__)
#define debugArr(...) std::cerr << "[", __DEBUG_UTIL__::printerArr(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...)
#define debugArr(...)
#endif

#endif // DEBUG_TEMPLATE_H
```

# Snippets 🐛

## 1. Binary Search

### a) Normal Implementation

```cpp
bool binarySearch(vector<int> v, int target)
{
    int l = 0, r = v.size() - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        // or -> int mid = l + (r-l) / 2;

        if (v[mid] == target)
            return true; // or return 'mid'
        else if (v[mid] > target)
            r = mid - 1;
        else if (v[mid] < target)
            l = mid + 1;
    }
    return false; // or return -1;
}
```

### b) Alternative Implementation

```cpp
int binarySearch(vector<int> v, int target)
{
    int n = v.size();
    int l = -1, r = n;

    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        if (v[mid] < target)
            l = mid;
        else /* if (v[mid] >= target) */
            r = mid;
    }

    return (r < n && v[r] == target) ? r : -1; // return -1 if not found
}
```

- This gives the first occurrence of the target if it exists.

```txt
L = last true
R = first false

1 1 1 1 2 2 2 3 3 3 3 3 4 4 4
T T T T F F F F F F F F F F F
      L R

T = 2
pred(i) = a[i] < T

```

### c) Finding First Occurrence

```cpp
int first_index(vector<int> v, int target)
{
    int n = v.size();
    int l = 0, r = n - 1;

    while (l < r)
    {
        int mid = (l + r) / 2; // floor

        if (v[mid] < target)
            l = mid + 1;
        else /* if(v[mid] >= target) */
            r = mid;
    }
    return (v[l] == target) ? l : -1; // return -1 if not found
}
```

### d) Finding Last Occurrence

```cpp
int last_index(vector<int> v, int target)
{
    int n = v.size();
    int l = 0, r = n - 1;

    while (l < r)
    {
        int mid = (l + r + 1) / 2; // ceil

        if (v[mid] <= target)
            l = mid;
        else /* if(v[mid] > target) */
            r = mid - 1;
    }
    return (v[l] == target) ? l : -1; // return -1 if not found
}
```

---

### 2. DSU - Disjoint Set Union (by Rank and Path Compression)

```cpp
class DisjointSet
{
    /**
     *  Template from striver G-46
     *  https://youtu.be/aBxjDBC4M1U?si=uTVwvW-k24-61ryY
     */
    vector<ll> rank, parent;
public:
    DisjointSet(ll n)
    {
        rank.resize(n+1, 0); // n+1 so that it works for both 0 & 1 based indexing
        parent.resize(n+1);
        for(int i = 0; i<=n; i++)
            parent[i]=i;
    }

    ll findUPar(ll node) // find ultimate parent
    {
        if(node == parent[node])
            return node;
        parent[node] = findUPar(parent[node]); // path compression
        return parent[node];
    }

    void unionByRank(ll u, ll v) // combine node u & v
    {
        ll ulp_u = findUPar(u); // ulp_u = ultimate parent of u
        ll ulp_v = findUPar(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]) parent[ulp_u] = ulp_v;
        else if(rank[ulp_v] < rank[ulp_u]) parent[ulp_v] = ulp_u;
        else parent[ulp_v] = ulp_u, rank[ulp_u]++;
    }

};
```

- Usage Example:

```cpp
DisjointSet ds(7);
ds.unionBySize(1, 2);
debug(ds.findUPar(1), ds.findUPar(2));
ds.unionBySize(2, 3);
ds.unionBySize(4, 5);
ds.unionBySize(5, 6);
ds.unionBySize(6, 7);

// check if 3 and 7 belong to same component or not
if (ds.findUPar(3) == ds.findUPar(7))
    cout << "YES" << nl;
else
    cout << "NO" << nl;
/* NO */
ds.unionBySize(3, 7);
if (ds.findUPar(3) == ds.findUPar(7))
    cout << "YES" << nl;
else
    cout << "NO" << nl;
/* YES */
```
