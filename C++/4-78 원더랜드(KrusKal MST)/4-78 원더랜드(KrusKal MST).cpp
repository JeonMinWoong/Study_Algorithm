#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int unf[1001];

struct Edge
{
	int v1;
	int v2;
	int value;
	Edge(int _a, int _b, int _c)
	{
		v1 = _a;
		v2 = _b;
		value = _c;
	}
	bool operator<(Edge &b)
	{
		return value < b.value;
	}
};

int Find(int v)
{
	if (v == unf[v]) return v;
	else return unf[v] = Find(unf[v]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x != y) unf[x] = y;
}

int main()
{
    int v, e,a,b,c,res =0;
	vector<Edge> ld;
    scanf_s("%d %d", &v, &e);

	for (int i = 1; i <= v; i++)
	{
		unf[i] = i;
	}

	for (int i = 1; i <= e; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);
		ld.push_back(Edge(a, b, c));
	}
	sort(ld.begin(), ld.end());
	for (int i = 0; i < e; i++)
	{
		int fa = Find(ld[i].v1);
		int fb = Find(ld[i].v2);
		if (fa != fb)
		{
			res += ld[i].value;
			Union(ld[i].v1, ld[i].v2);
		}
	}
	printf("%d", res);
	
	return 0;

}
