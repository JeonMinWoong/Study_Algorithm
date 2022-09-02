#include <iostream>
#include <vector>

using namespace std;

vector<int> v[1001];
int ch[1001];


void DFS(int x)
{
    ch[x] = true;

    //cout << x << " ";

    for (int i = 0; i < v[x].size(); i++)
    {
        int next = v[x][i];
        if (ch[next] == false)
        {
            DFS(next);
        }
    }
}

int main()
{
    int n, m, a, b, cnt = 0;
    
    cin >> n >> m;

    

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    // 모든 연결 체크 하기
    for (int i = 1; i <= n; i++)
    {
        if (ch[i] == false)
        {
            cnt++;
            DFS(i);
        }
    }

    cout << cnt << endl;

}