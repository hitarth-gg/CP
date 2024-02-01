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

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string str1, str2;
        cin >> str1;
        cin >> str2;
        int temp = INT_MAX;
        int x = 0;
        for (int i = 0; i < n - m + 1; i++)
        {
            for (int j = 0; j < m; j++)
            {
                x += min(abs(str1[i + j] - str2[j]), 10 - abs(str1[i + j] - str2[j]));
                // cout << x << endl;
            }
            if (x < temp)
                temp = x;
            x = 0;
        }
        cout << temp << endl;
    }

    return 0;
}
