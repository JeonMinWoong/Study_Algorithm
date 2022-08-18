#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, ch[21], dis[21];
vector<int> map[21];

int main()
{
    int m,a,b,x;

    scanf_s("%d %d", &n, &m);
	queue<int> Q;
	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d %d", &a, &b);
		map[a].push_back(b);
	}
	Q.push(1);
	ch[1] = 1;
	while (!Q.empty())
	{
		// 참조
		x = Q.front();
		Q.pop();
		for (int i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]] == 0)
			{
				ch[map[x][i]] = 1;
				Q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1; // 해당하는 간선의 값 증가
			}
		}
	}
	for (int i = 2; i <= n; i++)
	{
		printf("%d : %d\n", i, dis[i]);
	}

	return 0;
}