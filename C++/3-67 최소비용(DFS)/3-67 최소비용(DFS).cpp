#include <iostream>
#include <vector>

using namespace std;

int line[21][21], ch[21],n, m,cost = 2147000000;

vector<int> value(50);

void DFS(int x,int sum)
{
    if (x == n-1)
    {
        if (sum < cost)
            cost = sum;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (line[x][i] > 0 && ch[i] == 0)
            {
                ch[i] = 1;
                DFS(i,sum + line[x][i]);
                ch[i] = 0;
            }
        }
    }
}

int main()
{
    int a,b,c;

    scanf_s("%d%d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        scanf_s("%d %d %d", &a, &b,&c);
        line[a - 1][b - 1] = c;
    }
    
    ch[0] = 1;
    DFS(0,0);

    printf("%d ", cost);

   /* for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", line[i][j]);
        }
        puts("");
    }*/
}
