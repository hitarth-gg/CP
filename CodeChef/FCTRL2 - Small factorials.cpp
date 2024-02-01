// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

string multiply(string &str, int x)
{
    string str2;
    int carry = 0;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        int temp = (str[i] - '0') * x + carry;
        carry = temp / 10;
        str2.insert(0, 1, (temp % 10 + '0'));
    }
    while (carry)
    {
        str2.insert(0, 1, carry % 10 + '0');
        carry = carry / 10;
    }
    return str2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num = 5;
        cin >> num;
        string str = "1";
        while (num--)
        {
            str = multiply(str, num + 1);
        }
        cout << str << endl;
    }

    return 0;
}
