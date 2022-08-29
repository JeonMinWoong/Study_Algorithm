#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    vector<vector<int> > maps;
    int answer = 0;
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, -1, 0, 1 };
    vector<vector<int>> dis(maps.size() + 1, vector<int>(maps[0].size() + 1, 0));
    queue<pair<int, int> > q;

    q.push(make_pair(0, 0));
    maps[0][0] = 0;
    dis[0][0] = 1;
    while (!q.empty())
    {
        pair<int, int> value = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = value.first + dx[i];
            int y = value.second + dy[i];

            if (x >= 0 && x < maps.size() && y >= 0 && y < maps[0].size() && maps[x][y] == 1)
            {
                q.push(make_pair(x, y));
                maps[x][y] = 0;
                dis[x][y] = dis[value.first][value.second] + 1;
            }
        }
    }

    if (dis[maps.size() - 1][maps[0].size() - 1] != 0)
        answer = dis[maps.size() - 1][maps[0].size() - 1];
    else
        answer = -1;
}