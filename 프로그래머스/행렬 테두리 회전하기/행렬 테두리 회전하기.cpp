#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    vector<vector<int>> m(rows, vector<int>(columns, 0));
    int count = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            m[i][j] = count++;
        }
    }

    for (int i = 0; i < queries.size(); i++)
    {
        int x1 = queries[i][0] - 1;
        int y1 = queries[i][1] - 1;
        int x2 = queries[i][2] - 1;
        int y2 = queries[i][3] - 1;
        int tmp = m[x1][y1];
        int mini = tmp;

        for (int a = x1; a < x2; a++)
        {
            m[a][y1] = m[a + 1][y1];
            mini = min(mini, m[a][y1]);
        }
        for (int a = y1; a < y2; a++)
        {
            m[x2][a] = m[x2][a + 1];
            mini = min(mini, m[x2][a]);
        }
        for (int a = x2; a > x1; a--)
        {
            m[a][y2] = m[a - 1][y2];
            mini = min(mini, m[a][y2]);
        }
        for (int a = y2; a > y1; a--)
        {
            m[x1][a] = m[x1][a - 1];
            mini = min(mini, m[x1][a]);
        }

        m[x1][y1 + 1] = tmp;

        answer.push_back(mini);
        //cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    }

    return answer;
}