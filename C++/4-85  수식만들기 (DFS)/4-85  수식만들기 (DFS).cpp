#include <iostream>

int n,v[11],ch[4],d[4],min = 2147000000,max=-2147000000;

void DFS(int x,int res)
{
	if (x == n)
	{
		if (res < min)
			min = res;
		if (res > max)
			max = res;
	}
	else
	{
		if (d[0] > 0)
		{
			d[0]--;
			DFS(x + 1, res + v[x]);
			d[0]++;
		}
		if (d[1] > 0)
		{
			d[1]--;
			DFS(x + 1, res - v[x]);
			d[1]++;
		}
		if (d[2] > 0)
		{
			d[2]--;
			DFS(x + 1, res * v[x]);
			d[2]++;
		}
		if (d[3] > 0)
		{
			d[3]--;
			DFS(x + 1, res / v[x]);
			d[3]++;
		}
	}
}

int main()
{
	int a;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &v[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &d[i]);
	}

	DFS(1,v[0]);

	printf("%d\n%d", max, min);
}