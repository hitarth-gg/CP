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
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int n1 = -1;
        int n2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                n1 = i + 1;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                n2 = i + 1;
                break;
            }
        }

        int rooms;

        if (n1 != -1 && n2 !=-1 && n1 == n2)
        {
            rooms = max(n - n1, abs(1 - n1));
            rooms += 1;
            rooms *= 2;
        }
        else if (n1 == -1 && n2 == -1)
            rooms = n;
        else
        {
            rooms = max(n1 - 1, n - n2)*2 ;
            rooms += (n2 - n1 + 1) * 2;
        }

        cout << rooms << endl;
    }

    return 0;
}
