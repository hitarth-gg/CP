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

    int t;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        for (int i = 0; i < 6; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.begin() + 3);
        sort(v.begin() + 3, v.end());

        int n1 = 0;
        int n2 = 0;
        for (int i = 0; i < 3; i++)
            n1 += v[i] * pow(10, i);
        for (int i = 3; i < 6; i++)
            n2 += v[i] * pow(10, i - 3);

        if (n1 > n2)
            cout << "Alice" << endl;
        else if (n1 < n2)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
        v.clear();
    }

    return 0;
}
