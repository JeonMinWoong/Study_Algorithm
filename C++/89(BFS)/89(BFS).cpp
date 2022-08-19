// 89(BFS).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>

using namespace std;

int a[101][101], dis[101][101];
struct Loc {
	int x;
	int y;
	Loc(int a, int b)
	{
		x = a;
		y = b;
	}
};


int main()
{
	int n, m, dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 },res = -2147000000;

	queue<Loc> q;

    scanf_s("%d %d", &m ,&n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf_s("%d", &a[i][j]);
			if (a[i][j] == 1)
				q.push(Loc(i, j));
		}
	}

	while (!q.empty())
	{
		Loc val = q.front();
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int x = val.x + dx[k];
			int y = val.y + dy[k];
			if (a[x][y] == 0)
			{
				if (x >= 1 && x <= n && y >= 1 && y <= m)
				{
					q.push(Loc(x, y));
					a[x][y] = 1;
					dis[x][y] = dis[val.x][val.y] + 1;
				}
			}
		}
	}
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i][j] == 0) f = 0;
		}
	}
	if (f == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (res < dis[i][j])
					res = dis[i][j];
			}
		}
	    printf("%d", res);
	}
	else
		printf("-1");

	

}
