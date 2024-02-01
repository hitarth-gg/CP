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

    int tPages;
    cin >> tPages;
    int arr[7];
    int day = 0;

    for (int i = 0; i < 7; i++)
        cin >> arr[i];

    for (int i = 0; i < 7 && tPages > 0; i = (i + 1) % 7)
    {
        tPages -= arr[i];
        day++;
    }
    if (day%7==0)
        cout << 7 << endl;
    else
        cout << day % 7 << endl;

    return 0;
}
