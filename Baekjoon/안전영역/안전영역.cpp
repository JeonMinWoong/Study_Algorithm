#include <iostream>

using namespace std;

int a[101][101];
int ch[101][101];

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

int n;

void DFS(int x, int y, int k)
{
    ch[x][y] = 1;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (a[nx][ny] > k && ch[nx][ny] == 0)
            DFS(nx, ny, k);
    }
}

int main()
{
    int cnt = 0,max_cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (int k = 0; k < 100; k++)
    {
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] > k && ch[i][j] == 0)
                {
                    DFS(i, j, k);
                    cnt++;
                }
            }
        }
        if (cnt > max_cnt)
            max_cnt = cnt;
        memset(ch, 0, sizeof(ch));
    }
    cout << max_cnt << endl;
}