#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int pos1=0, pos2=0;
        for(int i =0; i<str.size(); i++)
        {
            if(str[i]=='1')
            {
                pos1=pos2=i;
                break;
            }
        }
        for(int i =pos1; i<str.size(); i++)
        {
            if(str[i]=='0')
            {
                pos1=pos2=i;
                break;
            }
        }
        for(int i =pos2; i<str.size(); i++)
        {
            if(str[i]=='1')
            {
                pos2=i;
                break;
            }
        }
        cout << pos2-pos1<< endl;
    }

    return 0;
}
