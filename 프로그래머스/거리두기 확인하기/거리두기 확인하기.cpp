#include <string>
#include <vector>

using namespace std;

bool check(int y, int x, vector<string> place)
{
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, 1, -1 };
    int findP = 0;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (ny >= 0 && ny <= 4 && nx >= 0 && nx <= 4)
        {
            if (place[ny][nx] == 'P')
            {
                findP++;
            }

            if (place[y][x] == 'O')
            {
                if (findP == 2)
                    return false;
            }
            else
            {
                if (findP)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    bool check_dist = true;

    for (int i = 0; i < places.size(); i++)
    {
        for (int j = 0; j < 5 && check_dist; j++)
        {
            for (int k = 0; k < 5 && check_dist; k++)
            {
                if (places[i][j][k] != 'X')
                {
                    check_dist = check(j, k, places[i]);
                }
            }
        }
        if (check_dist)
        {
            answer.push_back(1);
        }
        else
        {
            answer.push_back(0);
        }

        check_dist = true;
    }

    return answer;
}