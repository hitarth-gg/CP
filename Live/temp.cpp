#include <bits/stdc++.h>

using namespace std;

#ifdef B01
#include "deb.h"
#else
#define deb(...)
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        if (s == t)
        {
            cout << 0 << '\n';
            continue;
        }
        if (s[0] != t[0])
        {
            cout << -1 << '\n';
            continue;
        }
        if (n < m)
        {
            swap(n, m);
            swap(s, t);
        }
        int p = 0;
        while (p < m && s[p] == t[p])
        {
            p += 1;
        }
        int ss = n, st = m;
        while (st > p && s[ss - 1] == t[st - 1])
        {
            ss -= 1;
            st -= 1;
        }
        if (p >= st)
        {
            cout << 1 << '\n';
            continue;
        }
        cout << 2 << '\n';
    }
    return 0;
}
