#include <iostream>
#include <vector>
using namespace std;

int v[51][51];
int ch[51][51];
vector<int> answer;
int cnt = 0;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int n, m;

void Reset()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ch[i][j] = false;
            v[i][j] = 0;
        }
    }
}

void DFS(int x, int y)
{
    ch[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
        if (v[nx][ny] == 1 && !ch[nx][ny])
            DFS(nx, ny);
    }
}


int main()
{
    int t, k, x, y;
    
    cin >> t;

    for (int nt = 0; nt < t; nt++)
    {
        cin >> m >> n >> k;

        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            v[x][y] = 1;
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                if (v[i][j] == 1 && !ch[i][j])
                {
                    DFS(i, j);
                    cnt++;
                }
        }
        answer.push_back(cnt);
        cnt = 0;
        Reset();
    }

    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << endl;
}