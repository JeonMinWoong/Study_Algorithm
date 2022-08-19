#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int ch[30];
struct Data
{
	int e;
	int val;
	Data(int a, int b)
	{
		e = a;
		val = b;
	}
	bool operator<(const Data& b)const {
		return val > b.val;
	}
};

int main()
{
    int n, m,a,b,c,res = 0;

	priority_queue<Data> q;
	vector<pair<int, int>> map[30];

    scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}
	q.push(Data(1, 0));
	while (!q.empty())
	{
		Data tmp = q.top();
		q.pop();
		int v = tmp.e;
		int cost = tmp.val;
		if (ch[v] == 0)
		{
			res += cost; 
			ch[v] = 1;
			for (int i = 0; i < map[v].size(); i++)
			{
				q.push(Data(map[v][i].first, map[v][i].second));
			}
		}
	}
	printf("%d\n", res);
	return 0;
}