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

    int n;
    cin >> n;
    vector<int> v(n);

    loop(n)
    {
        cin >> v[i];
    }

    vector<int> ans;

    int i = 0;
    int flag = 0;

    while (i < n)
    {
        if (v[i] % 2 == 0)
            ans.push_back(v[i] / 2);
        else if (flag == 0)
        {
            flag = 1;
            ans.push_back(ceil((double)v[i] / 2));
        }
        else if (flag == 1)
        {
            flag = 0;
            ans.push_back(floor((double)v[i] / 2));
        }
        i++;
    }
    for (auto it : ans)
        cout << it << endl;

    return 0;
}
