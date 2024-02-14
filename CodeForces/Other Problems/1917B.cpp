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
        int n;
        cin >> n;
        string str;
        cin >> str;

        set<char> st;

        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            st.insert(str[i]);
            count += st.size();
        }
        cout << count << endl;
    }

    return 0;
}
