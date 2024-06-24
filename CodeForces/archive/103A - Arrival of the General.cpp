// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    int n, size, max = INT_MIN, min=INT_MAX, maxIndex, minIndex;
    cin >> size;
    for ( int i = 0; i<size ;i++)
    {
        cin >> n;
        if(n > max)
        {
            max = n;
            maxIndex = i;
        }
        if ( n<= min)
        {
            min = n;
            minIndex = i;
        }
    }
    // cout << maxIndex << " " << minIndex << endl;
    cout << maxIndex + (maxIndex > minIndex ? size - minIndex -2 : size - minIndex -1);
    return 0;
}
