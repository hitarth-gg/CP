class Solution
{
public:
    void solve(vector<vector<char>> &g)
    {
        int n = g.size();
        int m = g[0].size();

        int zr[] = {-1, 0, 0, 1};
        int zc[] = {0, -1, 1, 0};

        vector<pair<int, int>> q;

        for (int i = 0; i < n; i++)
        {

            if (g[i][0] == 'O')
                q.push({i, 0}), g[i][0] = '$';
            if (g[i][n - 1] == 'O')
                q.push({i, n - 1}), g[i][n - 1] = '$';
        }
        for (int i = 0; i < m; i++)
        {
            if (g[0][i] == 'O')
                q.push({0, i}), g[0][i] = '$';
            if (g[n - 1][i] == 'O') 
                q.push({n - 1, i}), g[n - 1][i] = '$';
        }

        while (!q.empty())
        {
            int nr = q.front().first;
            int nc = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int r = nr + zr[i];
                int c = nc + zc[i];

                if (r >= 0 && r < n && c >= 0 && c < m && g[r][c] == 'O')
                {
                    q.push({r, c});
                    g[r][c] = '$';
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (g[i][j] == 'O')
                    g[i][j] = 'X';
                if (g[i][j] == '$')
                    g[i][j] = 'O';
            }
        }
    }
};
