#include <iostream>

int a[51][51];

int main()
{
    int xMax, yMax , x,y,max = -2147000000,posY,posX,count;

    scanf_s("%d %d", &yMax,&xMax);

	for (int i = 0; i < yMax; i++)
	{
		for (int j = 0; j < xMax; j++)
		{
			scanf_s("%d", &a[i][j]);

		}
	}

	scanf_s("%d %d", &y, &x);

	for (int i = 0; i < yMax-y+1; i++)
	{
		for (int j = 0; j < xMax-x+1; j++)
		{
			count = 0;
			for (int k = i; k < i+y; k++)
			{
				for (int l = j; l < j+x; l++)
				{
					count += a[k][l];
				}
			}
			if (max < count)
				max = count;
		}
	}

	printf("%d", max);
}
