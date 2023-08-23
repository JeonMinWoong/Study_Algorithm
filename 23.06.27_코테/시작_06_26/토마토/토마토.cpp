#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m, day = 0;
queue<pair<int,int>> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<vector<int>> BFS(vector<vector<int>> v, vector<vector<int>> dayGroup, vector<vector<bool>> check)
{
    while (!q.empty())
    {
        int xIndex = q.front().second;
        int yIndex = q.front().first;
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int xNext = xIndex + dx[i];
            int yNext = yIndex + dy[i];

            if(xNext < 0 || xNext >= n || yNext < 0 || yNext >= m || check[yNext][xNext]) continue;
            
            if(v[yNext][xNext] == 0)
            {
                check[yNext][xNext] = true;
                v[yNext][xNext] = 1;
                dayGroup[yNext][xNext] = dayGroup[yIndex][xIndex] + 1;
                day = max(day, dayGroup[yNext][xNext]);
                q.push({yNext, xNext});
            }
        }
    }

    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    vector<vector<int>> v(m,vector<int>(n, 0));
    vector<vector<int>> dayGroup(m,vector<int>(n, 0));
    vector<vector<bool>> check(m, vector<bool>(n, false));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> v[i][j];
            if(v[i][j] == 1)
            {
                q.push({i, j});
                check[i][j] = true;
            }
        }
    }

    v = BFS(v, dayGroup, check);    
    
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(v[i][j] == 0)
            {
                day = -1;
                break;
            }
        }
    }

    cout << day;
    
    return 0;
}
