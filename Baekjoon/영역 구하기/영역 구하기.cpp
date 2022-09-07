#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int box[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int m, n, k;

int bfs(int y, int x)
{
	int cnt = 0;
	queue<pair<int,int>> q;
	q.push(make_pair(y, x));
	box[y][x] = 1;
	while (!q.empty())
	{
		cnt++;
		int _x = q.front().second;
		int _y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int n_x = _x + dx[i];
			int n_y = _y + dy[i];
			if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= m) continue;
			if (box[n_y][n_x] == 1) continue;
			q.push(make_pair(n_y, n_x));
			box[n_y][n_x] = 1;
		}
	}
	return cnt;
}

int main()
{
	cin >> m >> n >> k;

	priority_queue<int, vector<int>, greater<>> pq;

	for (int c = 0; c < k; c++)
	{
		int x, y, xx, yy;
		cin >> x >> y >> xx >> yy;

		for (int i = x; i < xx; i++)
		{
			for (int j = y; j < yy; j++)
			{
				box[j][i] = 1;
			}
		}
	}
	int boxCnt = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!box[i][j])
			{
				boxCnt++;
				pq.push(bfs(i, j));
			}
		}
	}
	cout << boxCnt << "\n";

	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
}