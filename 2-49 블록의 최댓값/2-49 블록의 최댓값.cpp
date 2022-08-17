// 2-49 블록의 최댓값.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
int a[11][11];

int main()
{
	int n,count = 0,flag =0;

	scanf_s("%d", &n);
	int x[2][11];


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &x[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = x[0][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(a[i][j] > x[1][n - i - 1])
			{
				a[i][j] = x[1][n - i - 1];
			}
			count += a[i][j];
		}
	}

	printf("%d", count);
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}*/
}