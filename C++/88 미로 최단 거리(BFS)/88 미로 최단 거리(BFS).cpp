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
	int a[10][10], ch[10][10] = { 0 }, dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
	queue<Loc> q;
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	q.push(Loc(1, 1));
	a[1][1] = 1;
	while (!q.empty())
	{
		Loc LQ = q.front();
		q.pop();
		for (int j = 0; j < 4; j++)
		{
			int xx = LQ.x + dx[j];
			int yy = LQ.y + dy[j];
			if (a[xx][yy] == 0 && xx >= 1 && xx <= 7 && yy >= 1 && yy <= 7)
			{
				q.push(Loc(xx, yy));
				a[xx][yy] = 1;
				ch[xx][yy] = ch[LQ.x][LQ.y] + 1;
			}
		}
	}

	printf("%d", ch[7][7]);
}
