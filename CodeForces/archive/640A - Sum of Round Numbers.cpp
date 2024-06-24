#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, tens = 1, size = log10(n) + 1;
        cin >> n;
        vector<int> res;
        while (n)
        {
            if (n % 10)
            {
                count++;
                res.push_back((n % 10) * tens);
            }
            tens *= 10;
            n /= 10;
        }
        cout << count << endl;
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
}
