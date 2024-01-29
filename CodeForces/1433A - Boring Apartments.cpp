#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total = 0;
        int size = to_string(n).size();

        total = (int)(n / pow(10, size - 1) - 1) * 10 + size * (size + 1) / 2;
        cout << total << endl;
    }

    return 0;
}
