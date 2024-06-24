// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp =1;
    int arr[n], arr2[n];
    for ( int i=1; i<=n; i++)
        cin >> arr[i-1];

    for (int i : arr)
    {
        arr2[i-1] = temp++;
    }

    for (int i : arr2)
        cout << i << " ";

    return 0;
}
