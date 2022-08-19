#include <iostream>
#include <queue>

using namespace std;

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
	int n, a[22][22],cnt = 0;
	int dx[8] = {  0, 1, 1, 1, 0,-1,-1,-1 };
	int dy[8] = { -1,-1, 0, 1, 1, 1, 0,-1 };
    scanf_s("%d", &n);
	
	queue<Loc> q;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == 1)
			{
				q.push(Loc(i, j));
				a[i][j] = 0;
				while (!q.empty())
				{
					Loc loc = q.front();
					q.pop();
					for (int k = 0; k < 8; k++)
					{
						if (a[loc.x + dx[k]][loc.y + dy[k]] == 1)
						{
							q.push(Loc(loc.x + dx[k], loc.y + dy[k]));
							a[loc.x + dx[k]][loc.y + dy[k]] = 0;
						}
					}
				}
				cnt++;
			}
		}
	}

	printf("%d", cnt);

}
