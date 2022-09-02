#include <iostream>
#include <queue>

using namespace std;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main()
{
    int n, m;
	int a[101][101];
	queue<pair<int,int>> q;
	int ch[101][101] = { 0 };
	int val[101][101] = { 1 };
    cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf_s("%1d", &a[i][j]);
	}

	// 처음 발판 확인
	ch[0][0] = 1;
	q.push(make_pair(0,0));

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

			if (!ch[nx][ny] && a[nx][ny] == 1)
			{
				// 최대 값 더하기
				val[nx][ny] = val[x][y] + 1;
				// 체크
				ch[nx][ny] = 1;
				q.push(make_pair(nx, ny));
			}
		}
	}

	// 최대 발판 체크
	cout << val[n-1][m-1] << endl;
	
}