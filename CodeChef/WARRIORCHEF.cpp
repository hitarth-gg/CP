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
        int n, h;
        cin >> n >> h;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        int i;
        for (i = n - 1; i >= 0; i--)
        {
                h = h - arr[i];
            // else
            if (h <= 0)
                break;
        }
        if (h > 0)
            cout << 0 << endl;
        else
            cout << arr[i] << endl;
    }

    return 0;
}
