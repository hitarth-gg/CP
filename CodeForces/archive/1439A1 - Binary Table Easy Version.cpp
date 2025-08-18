// GARBAGE QUESTION, DONT BOTHER DOING THIS SHIT

#include <algorithm>
#include <iostream>

using namespace std;

#define all(x) (x).begin(), (x).end()
int main()
{
    int q;
    cin >> q;
    
    while (q-->0) /// For each query
    {
        /// Input
        int n, m;
        cin >> n >> m;
        
        string s[n];
        for (int i = 0; i < n; ++i)
            cin >> s[i];
            


        /// Calculation
        int cnt = 0;
        for (int i = 0; i < n; ++i)           /// For each '1' appear
            cnt += 3 * count(all(s[i]), '1'); /// We use 3 operations to turn off it
                                              /// These operations are independent
 
        /// Output the result
        cout << cnt << '\n';
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (s[i][j] == '1')
                {
                    int cx = i + 1; /// +1 because we use 0-based loop
                    int cy = j + 1; /// +1 because we use 0-based loop
                    int px = (cx < n) ? cx + 1 : cx - 1; /// Next row
                    int py = (cy < m) ? cy + 1 : cy - 1; /// Next col

                    /// Notice that these operation are independent
                    /// They wont affect others cells, just turn off [i][j]

                    cout << px << ' ' << cy << ' ';  ///  X O  |  + +  |  O X
                    cout << cx << ' ' << py << ' ';  ///  O O  |  + _  |  X O
                    cout << cx << ' ' << cy << '\n'; ///   Operation: 1 -> 2

                    cout << px << ' ' << cy << ' ';  ///  O X  |  + _  |  X X
                    cout << px << ' ' << py << ' ';  ///  X O  |  + +  |  O X
                    cout << cx << ' ' << cy << '\n'; ///   Operation: 2 -> 3

                    cout << cx << ' ' << py << ' ';  ///  X X  |  + +  |  O O
                    cout << px << ' ' << py << ' ';  ///  O X  |  _ +  |  O O
                    cout << cx << ' ' << cy << '\n'; ///   Operation: 3 -> 0
                }
            }
        }
    }
    return 0;
}
