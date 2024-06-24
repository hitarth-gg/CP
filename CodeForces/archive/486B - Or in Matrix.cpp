#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m + 1, vector<int>(n + 1));
    vector<vector<int>> x(m + 1, vector<int>(n + 1));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            x[i][j] = 1;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (v[i][j] == 0)
            {
                for (int r = 1; r <= m; r++)
                    x[r][j] = 0;
                for (int r = 1; r <= n; r++)
                    x[i][r] = 0;
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (v[i][j] == 1)
            {
                int sum = 0;
                for (int k = 1; k <= n; k++)
                {
                    if (x[i][k] == 1)
                        sum = 1;
                }
                for (int k = 1; k <= m; k++)
                {
                    if (x[k][j] == 1)
                        sum = 1;
                }
                if (sum == 0)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
