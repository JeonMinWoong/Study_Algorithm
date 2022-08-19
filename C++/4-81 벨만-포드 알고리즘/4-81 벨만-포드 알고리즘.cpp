// 4-81 벨만-포드 알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Edge
{
	int v1;
	int v2;
	int val;
	Edge(int a, int b,int c)
	{
		v1 = a;
		v2 = b;
		val = c;
	}
	bool operator<(const Edge& x)const
	{
		return val > x.val;
	}
};

int main()
{
	vector<Edge> ed;
    int n, m, a, b, c,dist[201],s,f;
	scanf_s("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d %d %d",&a,&b,&c);
		ed.push_back(Edge(a, b, c));
	}
	for (int i = 1; i <= n; i++)
	{
		dist[i] = 2147000000;
	}
	scanf_s("%d %d",&s,&f);
	dist[s] = 0;
	for (int i = 1; i < n; i++)
	{
		//간선의 개수
		for (int j = 0; j < ed.size(); j++)
		{
			int u = ed[j].v1;
			int v = ed[j].v2;
			int w = ed[j].val;
			if (dist[u] != 2147000000 && dist[u] + w < dist[v]) {
				dist[v] = dist[u] + w;
			}
		}
	}
	for (int j = 0; j < ed.size(); j++)
	{
		int u = ed[j].v1;
		int v = ed[j].v2;
		int w = ed[j].val;
		if (dist[u] != 2147000000 && dist[u] + w < dist[v]) {
			printf("-1\n");
			exit(0);
		}
	}
	printf("%d", dist[f]);
}

