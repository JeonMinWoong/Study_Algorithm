#include <iostream>

int n, m,line[21][21], a,b,c;

int main()
{
    scanf_s("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		scanf_s("%d%d%d", &a, &b, &c);
		line[a-1][b-1] = c;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", line[i][j]);
		}
		puts("");
	}
}