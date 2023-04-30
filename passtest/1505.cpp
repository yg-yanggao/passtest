#include <bits/stdc++.h>
using namespace std;
int n, m;
class pp
{
public:
    int x, y;
} a[500];
int dir[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool check(int x, int y)
{
    if (x < 1 || x > m || y < 1 || y > n)
        return 0;
    return 1;
}
int main()
{
 
    while (cin >> n >> m && n && m)
    {
        char a[21][21];
        int vis[21][21];
        memset(vis, 0, sizeof(vis));
        pp start;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '@')
                {
                    start.x = i;
                    start.y = j;
                }
            }
        }
        vis[start.x][start.y] = 1;
        queue<pp> que;
        que.push(start);
        while (!que.empty())
        {
            pp now = que.front();
            que.pop();
            for (int i = 0; i < 4; i++)
            {
                pp next;
                next.x = dir[i][0] + now.x;
                next.y = dir[i][1] + now.y;
                if (check(next.x, next.y) && vis[next.x][next.y] == 0 && a[next.x][next.y] == '.')
                {
                    vis[next.x][next.y] = 1;
                    que.push(next);
                }
            }
        }
        int sum = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
                if (vis[i][j])
                    sum++;
        }
        cout << sum << endl;
    }
}
