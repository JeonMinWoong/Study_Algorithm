#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int a[51][51];
int ch[51][51];

int dx[8] = { 1, 0, -1, 0 , 1 , 1,-1,-1 };
int dy[8] = { 0, 1, 0 , -1, -1, 1,-1, 1 };

int w, h;

void BFS(int x, int y)
{
    queue<pair<int,int>> q;

    q.push(make_pair(x, y));
    ch[x][y] = true;

    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
            if (a[nx][ny] == 1 && ch[nx][ny] == 0)
            {
                ch[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

void DFS(int y, int x)
{
    ch[y][x] = 1;
    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
        if (a[ny][nx] == 1 && ch[ny][nx] == 0)
        {
            DFS(ny, nx);
        }
    }
}

int main()
{
    int cnt = 0;

    while (true)
    {
        cnt = 0;

        cin >> w >> h;
        if (w == 0 || h == 0)
            break;

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (a[i][j] == 1 && ch[i][j] == 0)
                {
                    //BFS(i, j);
                    DFS(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
        memset(ch, 0, sizeof(ch));
    }
}