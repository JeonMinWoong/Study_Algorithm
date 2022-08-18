#include <iostream>

int n, m, line[21][21] = { 0 },ch[30], a, b,cnt;

void DFS(int v)
{
	if (v == n - 1) cnt++;
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (line[v][i] == 1 && ch[i] == 0)
			{
				ch[i] = 1;
				DFS(i);
				ch[i] = 0;
			}
		}
	}
}

int main()
{
	

    scanf_s("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		scanf_s("%d%d", &a, &b);
		line[a - 1][b - 1] = 1;
	}
	ch[0] = 1;
	DFS(0);

	printf("%d", cnt);
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", line[i][j]);
		}
		puts("");
	}*/
}