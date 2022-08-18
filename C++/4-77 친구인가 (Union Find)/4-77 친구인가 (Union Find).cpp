#include <iostream>

int unf[1001];

int Find(int v)
{
	if (v == unf[v]) return v;
	else return unf[v] = Find(unf[v]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if (a != b) unf[a] = b;
}

int main()
{
    int n, m, a, b;

	scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		unf[i] = i;
	}

	for (int i = 1; i <= m; i++)
	{
		scanf_s("%d %d", &a, &b);
		Union(a, b);
	}
	
	scanf_s("%d %d", &a, &b);

	a = Find(a);
	b = Find(b);
	if (a == b) printf("YES");
	else printf("NO");
	return 0;

}