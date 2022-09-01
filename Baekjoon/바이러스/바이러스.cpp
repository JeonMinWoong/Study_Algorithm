#include <iostream>
#include <vector>

using namespace std;

vector<int> v[101];
bool ch[1001];
int res = 0;
void DFS(int x)
{
    ch[x] = true;

    //cout << x << " ";

    for (int i = 0; i < v[x].size(); i++)
    {
        int next = v[x][i];
        if (ch[next] == false)
        {
            res++;
            DFS(next);
        }
    }
}

int main()
{
    int n,m,a,b;
    cin >> n;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    DFS(1);

    cout << res << endl;
}