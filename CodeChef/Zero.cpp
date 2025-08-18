#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c++;
        }
        if (c == n)
            cout << 0;
        else if (c == 0)
            cout << 1;
        else if (c == n - c)
            cout << c;
        else
        {
            if (c > n - c)
            {
                cout << n - c;
            }
            else
                cout << c + 1;
        }
        cout << endl;
    }
    return 0;
}
