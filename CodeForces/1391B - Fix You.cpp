#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        int count = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        for (int i = 0; i < n - 1; i++)
            if (arr[i][m - 1] != 'D')
                count++;
        for (int j = 0; j < m - 1; j++)
            if (arr[n - 1][j] != 'R')
                count++;
        cout << count << endl;
    }

    return 0;
}
