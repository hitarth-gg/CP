#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a1(n), a2(n);
        loop(n)
        {
            int temp;
            cin >> temp;
            a1[i] = temp;
        };
        loop(n)
        {
            int temp;
            cin >> temp;
            a2[i] = temp;
        };

        // for(auto i : a1)
        // cout << i << " ";

        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());

        vector<int> l, r;

        for (int i = 0; i < n - 1; i++)
        {
            if (a1[i] == a1[i + 1])
            {
                l.push_back(a1[i]);
                l.push_back(a1[i]);
                a1[i] = -1;
                a1[i + 1] = -1;
                i++;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a2[i] == a2[i + 1])
            {
                r.push_back(a2[i]);
                r.push_back(a2[i]);
                a2[i] = -1;
                a2[i + 1] = -1;
                i++;
            }
        }

        int i = 0, j = 0;
        while (i < n && j < n)
        {
            // if (a1[i] == -1)
            // i++;
            // else if (a2[i] == -1)
            // j++;
            while (i < n && a1[i] == -1)
                i++;
            while (j < n && a2[j] == -1)
                j++;

            if (i >= n || j >= n)
                break;
            if (a1[i] == a2[j])
            {
                l.push_back(a1[i]);
                r.push_back(a2[j]);
                i++;
                j++;
            }
            else if (a1[i] < a2[j])
            {
                l.push_back(a1[i]);
                i++;
            }
            else
            {
                r.push_back(a2[j]);
                j++;
            }
        }

        for (int i = 0; i < 2 * k; i++)
            cout << l[i] << " ";
        cout << endl;
        for (int i = 0; i < 2 * k; i++)
            cout << r[i] << " ";
        cout << endl;

        // for (int i = 0; i < l.size(); i++)
        //     cout << l[i] << " ";
        // cout << endl;
        // for (int i = 0; i < r.size(); i++)
        //     cout << r[i] << " ";
        // cout << endl;
    }

    return 0;
}
