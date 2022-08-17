#include <iostream>
#include <stdlib.h>
#include <cmath>
int a[9][9];

int main()
{
    int tot = 0,value = 0,min = -2147000000,res =27147000000;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			tot += a[i][j];
		}
		tot = floor((tot / 9.0) + 0.5);
		for (int j = 0; j < 9; j++)
		{
			value = abs(tot - a[i][j]);
			if (value < res)
			{
				res = value;
				min = a[i][j];
			}
			else if (value == res)
			{
				if (a[i][j] > min) res = a[i][j];
			}
		}
		printf("%d %d\n", tot, min);
		tot = 0;
		value = 0;
		res = 27147000000;
		min = -2147000000;
	}
}