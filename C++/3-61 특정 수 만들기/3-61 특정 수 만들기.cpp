#include <iostream>


int n, m, a[11],cnt = 0,path[11];

void DFS(int x, int sum)
{
	if (x == n+1)
	{
		if (sum == m)
		{
			for (int i = 1; i < x; i++)
			{
				printf("%d ", path[i]);
			}
			puts("");
			cnt++;
		}
	}
	else
	{
		path[x] = a[x];
		DFS(x + 1,sum + a[x]);
		path[x] = -a[x];
		DFS(x + 1, sum - a[x]);
		path[x] = 0;
		DFS(x + 1, sum);
	}
}

int main()
{

    scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	DFS(1, 0);

	if (cnt == 0) printf("-1");
	else printf("%d", cnt);
}