#include <iostream>
#include <vector>
#include <map>
using namespace std;
//int a[60][60];
int x[4] = { -1 , 0 , 1 , 0 };
int y[4] = { 0 , 1 , 0 , -1 };

int main()
{
    int n,count = 0,flag = 0;

    scanf_s("%d",&n);

	vector<vector<int>> a(n + 2, vector<int>(n + 2,0));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			flag = 0;
			for (int k = 0; k < 4; k++)
			{
				if (a[i][j] <= a[i + x[k]][j + y[k]])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				count++;
		}
	}

	printf("%d", count);
}