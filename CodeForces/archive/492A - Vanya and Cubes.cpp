#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int count = 1;
    while (n > 0)
    {
        n = n - (count * (count + 1) / 2);
        if (n >= 0)
            count++;
    }
    cout << count-1;

    return 0;
}
