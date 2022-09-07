#include <iostream>

using namespace std;

int n, m;
int a[9];
int ch[9];

void DFS(int num, int x)
{
    if (x == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    // num 의 숫자 부터
    for (int i = num; i <= n; i++)
    {
        if (!ch[i])
        {
            ch[i] = 1;
            a[x] = i;
            // 무조건 i가 더 크다.
            DFS(i+1,x + 1);
            ch[i] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;

    DFS(1,0);
}