#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
Strategy:
There is a pattern in this problem. We walk through 4 diagonals to find the answer.
The directions are -> (1,1), (-1,1), (-1,-1), (1,-1).
Look at the given illustration to understand the pattern.
To detect the directions, you should draw (0, 0) x, y axis
*/
/*DFS START ############################################################################ DFS START*/
const int N = 205;
int mat[N][N];
bool vis[N][N];
int n, m;
// int si, sj, di, dj;
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
vector<pair<int, int>> d = {{1,1}, {-1, 1}, {-1, -1}, {1, -1}};
bool is_valid(int ci, int cj)
{
    if (ci >= n || ci < 0 || cj >= m || cj < 0)
        return false;
    return true;
}
// int cnt, mx = 0;
int ans = 0, mx, finalMx = 0;
bool isFound = false;
void dfs_top_right(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 1; i++)
    {
        int ci = si + d[0].first;  
        int cj = sj + d[0].second; 

        if (is_valid(ci, cj) && !vis[ci][cj])
        {
            // cnt++; mx = max(mx, cnt);
            mx += mat[ci][cj]; ans = max(mx, ans);
            dfs_top_right(ci, cj);
        }
    }
}
void dfs_top_left(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 1; i++)
    {
        int ci = si + d[1].first;  
        int cj = sj + d[1].second; 

        if (is_valid(ci, cj) && !vis[ci][cj])
        {
            // cnt++; mx = max(mx, cnt);
            mx += mat[ci][cj]; ans = max(mx, ans);
            dfs_top_left(ci, cj);
        }
    }
}
void dfs_bottom_left(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 1; i++)
    {
        int ci = si + d[2].first;  
        int cj = sj + d[2].second; 

        if (is_valid(ci, cj) && !vis[ci][cj])
        {
            // cnt++; mx = max(mx, cnt);
            mx += mat[ci][cj]; ans = max(mx, ans);
            dfs_bottom_left(ci, cj);
        }
    }
}
void dfs_bottom_right(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 1; i++)
    {
        int ci = si + d[3].first;  
        int cj = sj + d[3].second; 

        if (is_valid(ci, cj) && !vis[ci][cj])
        {
            // cnt++; mx = max(mx, cnt);
            mx += mat[ci][cj]; ans = max(mx, ans);
            dfs_bottom_right(ci, cj);
        }
    }
}
/*DFS END ############################################################################### DFS END*/
void solve()
{
    cin >> n >> m;
    int ektaMx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if(ektaMx < mat[i][j]) ektaMx = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cnt = 0;
            mx = 0;
            mx += mat[i][j];
            
            // cout << mx << nl;
            memset(vis, false, sizeof(vis));
            dfs_top_right(i, j);
            memset(vis, false, sizeof(vis));
            dfs_top_left(i, j);
            memset(vis, false, sizeof(vis));
            dfs_bottom_left(i, j);
            memset(vis, false, sizeof(vis));
            dfs_bottom_right(i, j);
        }
    }
    cout << max(ans, ektaMx) << nl;
    ans = 0;
    // cout << mx << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}