#include <iostream>
#include <vector>
#include <string>
using namespace std;

int LCS(const string &str1, const string &str2)
{
    int m = str1.length();
    int n = str2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

string getLCS(const string &str1, const string &str2, const vector<vector<int>> &dp)
{
    string lcs;
    int i = str1.length(), j = str2.length();

    while (i > 0 && j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            lcs = str1[i - 1] + lcs;
            --i;
            --j;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            --i;
        }
        else
        {
            --j;
        }
    }
    return lcs;
}

int main()
{
    string str1 = "AGGTAB";
    string str2 = "GXTXAYB";

    int lcsLength = LCS(str1, str2);
    cout << "Length of LCS: " << lcsLength << endl;

    vector<vector<int>> dp(str1.length() + 1, vector<int>(str2.length() + 1, 0));
    for (int i = 1; i <= str1.length(); ++i)
    {
        for (int j = 1; j <= str2.length(); ++j)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    string lcsString = getLCS(str1, str2, dp);
    cout << "LCS: " << lcsString << endl;

    return 0;
}
