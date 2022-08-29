#include <iostream>
#include <vector>

using namespace std;

int answer = 0;
vector<int> check;

void DFS(int x, int value,vector<vector<int>> _dungeons)
{
    if (x > answer)
    {
        answer = x;
    }
    else
    {
        for (int i = 0; i < check.size(); i++)
        {
            if (check[i] == 1 || value < _dungeons[i][0])
                continue;
        }

        check[x] = 1;
        DFS(x + 1, value, _dungeons);
        check[x] = 0;
    }
}

int main()
{
    int k;
    vector<vector<int>> dungeons;
    for (int i = 0; i < dungeons.size(); i++)
    {
        check.push_back(0);
    }

    DFS(0, k, dungeons);
}
