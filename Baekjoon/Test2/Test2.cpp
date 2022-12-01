#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<vector<int>> field, int farmSize) {
    int answer = INT32_MAX, cnt = 0;
    queue<pair<int, int>> q;

    int f_Y = field.size();
    int f_X = field[0].size();

    for (int i = 0; i < f_Y; i++)
    {
        for (int j = 0; j < f_X; j++)
        {
            if (j <= f_X - farmSize && i <= f_Y - farmSize)
            {
                q.push(make_pair(i, j));
            }
        }
        cout << endl;
    }

    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        cnt = 0;
        for (int i = y; i < y + farmSize; i++)
        {
            for (int j = x; j < x + farmSize; j++)
            {
                if (field[i][j] == 1)
                    cnt++;
                else if (field[i][j] == 2)
                {
                    cnt = INT32_MAX;
                    break;
                }
            }
            if (cnt == INT32_MAX)
                break;
        }
        answer = min(answer, cnt);
    }
    if (answer == INT32_MAX)
        answer = -1;

    return answer;
}