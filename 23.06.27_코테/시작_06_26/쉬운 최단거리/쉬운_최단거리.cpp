#include <iostream>
#include <queue>
using namespace std;

int deltaX[4] = {0, 1, 0, -1};
int deltaY[4] = {-1, 0, 1, 0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> answer(n, vector<int>(m));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int value;
            cin >> value;
            if(value == 2)
            {
                q.push({i, j});
            }
            else if(value == 1)
            {
                answer[i][j] = -1;
            }
            else
            {
                answer[i][j] = 0;
            }
        }
    }
    
    while (!q.empty())
    {
        int yValue = q.front().first;
        int xValue = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; ++i)
        {
            int nextY = yValue + deltaY[i];
            int nextX = xValue + deltaX[i];

            if(nextY < 0 || nextY >= n || nextX < 0 || nextX >= m) continue;
            
            if(answer[nextY][nextX] == 0 || answer[nextY][nextX] != -1) continue;
            
            answer[nextY][nextX] = answer[yValue][xValue] + 1;
            q.push({nextY, nextX});
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << answer[i][j] << " ";   
        }
    
        cout << "\n";
    }
    
    return 0;
}