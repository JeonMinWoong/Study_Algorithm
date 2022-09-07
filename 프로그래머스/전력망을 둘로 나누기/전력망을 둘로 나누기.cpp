#include <string>
#include <vector>
#include <memory.h>


using namespace std;
vector<int> v[101];
vector<pair<int, int>> pa;
bool ch[101];
int lineCnt = 0;
int value[2];

void DFS(int x, pair<int, int> _pa)
{
    ch[x] = true;
    value[lineCnt]++;
    for (int i = 0; i < v[x].size(); i++)
    {
        int next = v[x][i];
        if ((x == _pa.first && next == _pa.second) || next == _pa.first && x == _pa.second)
            continue;
        if (ch[next])
            continue;
        DFS(next, _pa);
    }
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 2147000000;

    for (int i = 0; i < wires.size(); i++)
    {
        v[wires[i][0]].push_back(wires[i][1]);
        v[wires[i][1]].push_back(wires[i][0]);
        pa.push_back({ wires[i][0],wires[i][1] });
    }

    for (int i = 0; i < pa.size(); i++)
    {
        int from = pa[i].first;
        int to = pa[i].second;
        for (int j = 1; j <= wires.size(); j++)
        {
            if (ch[j])
                continue;
            DFS(j, { from,to });
            lineCnt++;
        }

        if (lineCnt == 2)
            answer = min(answer, abs(value[0] - value[1]));

        value[0] = 0, value[1] = 0;
        lineCnt = 0;
        memset(ch, false, sizeof(ch));
    }

    return answer;
}