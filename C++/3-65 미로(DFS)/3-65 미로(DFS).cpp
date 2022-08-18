#include <iostream>

int a[7][7], ch[7][7], dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 },cnt;

void DFS(int x, int y)
{
	int xA, yA;
	if (x == 6 && y == 6)
		cnt++;
	else
	{
		for (int i = 0; i < 4; i++)
		{
			xA = x + dx[i];
			yA = y + dy[i];
			if (xA < 0 || xA>6 || yA < 0 || yA > 6) continue;
			if (a[xA][yA] == 0 && ch[xA][yA] == 0)
			{
				ch[xA][yA] = 1;
				DFS(xA, yA);
				ch[xA][yA] = 0;
			}
		}
	}
}

int main()
{


	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	ch[0][0] = 1;
	DFS(0, 0);
	printf("%d", cnt);
}