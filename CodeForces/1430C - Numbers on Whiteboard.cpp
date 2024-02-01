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

    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        priority_queue<int> stk;

        for (int i = 1; i <= t; i++)
            stk.push(i);

        cout << 2 << endl;
        int a, b;
        for (int i = 1; i < t; i++)
        {
            a = stk.top();
            stk.pop();
            b = stk.top();
            stk.pop();
            float avg = round((float)(a + b) / 2);
            stk.push(avg);
            cout << a << " " << b << endl;
        }
    }

    return 0;
}
