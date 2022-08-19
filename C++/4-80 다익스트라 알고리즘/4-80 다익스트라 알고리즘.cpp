#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Edge
{
	int v;
	int val;
	Edge(int a, int b)
	{
		v = a;
		val = b;
	}
	bool operator<(const Edge& x)const
	{
		return val > x.val;
	}
};

int main()
{
    int n, m,a,b,c,ch[21];
	priority_queue<Edge> q;

	vector<pair<int, int> > map[30];
	scanf_s("%d %d", &n, &m);

	vector<int> dist(n + 1, 2147000000);

	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
	}
	q.push(Edge(1, 0));
	dist[1] = 0;
	while (!q.empty())
	{
		int now = q.top().v;
		int cost = q.top().val;
		q.pop();
		if (cost > dist[now]) continue;
		for (int i = 0; i < map[now].size(); i++)
		{
			int next = map[now][i].first;
			int nextDist = cost + map[now][i].second;
			if (dist[next] > nextDist)
			{
				dist[next] = nextDist;
				q.push(Edge(next, nextDist));
			}
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (dist[i] != 2147000000)
			printf("%d : %d\n", i, dist[i]);
		else
			printf("%d : impossible", i);
	}
}
