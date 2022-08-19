#include <iostream>

int n, r,ch[15], v[15],res[15], count = 0;

void DFS(int z)
{
	if (z == r)
	{
		for (int i = 0; i < z; i++)
		{
			printf("%d",res[i]);
		}
		count++;
		puts("");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (ch[i] == 0)
			{
				res[z] = v[i];
				ch[i] = 1;
				DFS(z + 1);
				ch[i] = 0;
			}
		}
	}
}

int main()
{
    scanf_s("%d %d", &n, &r);

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &v[i]);
	}
	DFS(0);

	printf("%d", count);
}
