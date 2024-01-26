#include<iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
 
    for (int i = 0; i < str.size(); i++)
    {
        if((str[i] - '0' < 9- (str[i] - '0')))
        {
            cout << str[i];
        }
        
        else
        {
            if (i==0 && str[i] == '9')
                cout << 9;
                else
        cout << 9 - (str[i] - '0');
        }
    }
    
 
    return 0;
}
