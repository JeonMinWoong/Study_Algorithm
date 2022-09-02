#include <iostream>

using namespace std;

char a[101][101];

int ch[101][101];

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

int n;

void DFS(int x, int y)
{
	ch[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		if (ch[nx][ny] == 0 && a[x][y] == a[nx][ny])
		{
			DFS(nx, ny);
		}
	}
}

int main()
{
    int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >>  a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ch[i][j] == 0)
			{
				DFS(i, j);
				cnt++;
			}
		}
	}
	
	cout << cnt << " ";
	memset(ch, 0, sizeof(ch));
	cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 'G')
				a[i][j] = 'R';
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ch[i][j] == 0)
			{
				DFS(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}