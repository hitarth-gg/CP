// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;

//     set<char> str2;
//     for (auto it : str)
//         str2.insert(it);
//     if(str2.size()%2 == 0)
//         cout << "CHAT WITH HER!";
//     else
//         cout << "IGNORE HIM!";
//     return 0;
// }

/* ---------------------- Method 2 ---------------------- */

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int ans =0;
    for(int i =0; i<str.size(); i++)
        if(str[i] != str[i+1])
            ans++;
    if(ans%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
