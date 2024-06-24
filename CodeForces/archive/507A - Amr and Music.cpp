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

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v;

    loop(n)
    {
        int days;
        cin >> days;
        v.push_back(make_pair(days, i + 1));
    }

    sort(v.begin(), v.end());

    int sum = 0;
    int count = 0;

    if (v[0].first > k)
        cout << 0 << endl;
    else
    {

        for (auto it : v)
        {
            sum += it.first;
            if (sum > k)
                break;
            count++;
            // cout << it.second << " ";
        }
        sum = 0;
        cout << count << endl;
        for (auto it : v)
        {
            sum += it.first;
            if (sum > k)
                break;
            cout << it.second << " ";
        }
    }

    return 0;
}
