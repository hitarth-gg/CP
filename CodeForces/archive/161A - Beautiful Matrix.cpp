#include <iostream>
using namespace std;
int main()
{
    // (3, 3)
    // (3, 2)
 
    //(2, 5)
    int arr[5][5] = {-1};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                break;
        }
 
        if (arr[i][j] == 1)
            break;
    }
    // cout << i << " " << j << endl;
    cout << abs(3 - (i+1)) + abs(3 - (j+1));
 
    return 0;
}
