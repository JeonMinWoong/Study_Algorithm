#include <stdio.h>
#include <iostream>
#include <vector>
#define x first
#define y second

using namespace std;

vector<pair<int,int> > map[30];

int ch[30], n, cost = 2147000000;

void DFS(int v, int sum)
{

	if (v == n)
	{
		if (sum < cost)
			cost = sum;
	}
	else
	{
		for (int i = 0; i < map[v].size(); i++) 
		{
			if (ch[map[v][i].x] == 0) {
				ch[map[v][i].x] = 1;
				DFS(map[v][i].x, sum + map[v][i].y);
				ch[map[v][i].x] = 0;
			}
		}
	}
}

int main()
{
    int m,a,b,c;

    scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
	}
	ch[1] = 1;
	DFS(1, 0);

	printf("%d", cost);
}