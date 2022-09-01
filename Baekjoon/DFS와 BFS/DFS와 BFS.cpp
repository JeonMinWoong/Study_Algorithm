#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> v[1001];
vector<int> res_B;
int ch[1001];
int n;
void reset() {
    for (int i = 0; i <= n; i++) {
        ch[i] = false;
    }
}

// 큐 넓이
void BFS(int c)
{
    queue<int> q;

    q.push(c);
    ch[c] = true;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for (auto i = 0; i < v[cur].size(); i++)
        {
            int next = v[cur][i];
            if (ch[next] == false)
            {
                ch[next] = true;
                q.push(next);
            }
        }

    }
}

// 스택 & 재귀 깊이
void DFS(int c)
{
    // 방문 체크
    ch[c] = true;
    cout << c << " ";

    // 간선에 연결된 숫자로 돌기
    for (auto i = 0; i < v[c].size(); i++)
    {
        // 간선
        int next = v[c][i];
        if (ch[next] == false)
            DFS(next);
    }
}

int main()
{
    int m,c,a,b;
    cin >> n >> m >> c;
    

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        //간선 만들기
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    DFS(c);
    puts("");
    reset();
    BFS(c);
}