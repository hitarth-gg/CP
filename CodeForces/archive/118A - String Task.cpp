#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;

    string res;
    for(auto i : str)
        if(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'Y' || i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y')
            continue;
        else
            {
                res.push_back('.');
                if(i >= 'A' && i <= 'Z')
                    i += 32;
                res.push_back(i);
            }
            cout << res;;

    return 0;
}
