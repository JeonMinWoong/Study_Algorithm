#include <iostream>

int a[701][701],dy[701][701];

int main()
{
	int xMax, yMax, x, y, max = -2147000000, value;

	scanf_s("%d %d", &yMax, &xMax);

	for (int i = 1; i <= yMax; i++)
	{
		for (int j = 1; j <= xMax; j++)
		{
			scanf_s("%d", &a[i][j]);
			dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + a[i][j];
		}
	}

	scanf_s("%d %d", &y, &x);

	for (int i = y; i <= yMax; i++)
	{
		for (int j = x; j <= xMax; j++)
		{
			value = dy[i][j] - dy[i - y][j] - dy[i][j - x] + dy[i - y][j - x];
			if (max < value)
				max = value;
		}
	}

	printf("%d", max);
}
