#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    int k;
    cin >> k;
    string str;
    cin >> str;
    int l = str.size();
    sort(str.begin(), str.begin() + l);

    char ch;
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        if (i % k == 0)
            ch = str[i];

        if (ch == str[i])
            count++;
    }
    
    if (l==count && count%k==0)
    {
        for (int j = 0; j < k; j++)
            for (int i = 0; i < l; i = i + k)
                cout << str[i];
    }
    else cout << -1 << endl;
    return 0;
}

// aabbc
