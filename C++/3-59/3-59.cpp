// 3-59.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
int n,a[11];

void DFS(int x)
{
	if (x == n + 1) 
	{
		for (int i = 1; i <= n; i++)
		{
			if (a[i] == 1) printf("%d", i);
		}
		puts("");
	}
	else
	{
		a[x] = 1;
		DFS(x + 1);
		a[x] = 0;
		DFS(x + 1);
	}
}

int main()
{
	scanf_s("%d", &n);
	DFS(1);
}
