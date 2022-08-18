// 3-60 합이 같은 부분 집합.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int n, a[11], count = 0;
bool flag = false;
void DFS(int x,int sum)
{
	if (sum > (count / 2)) return;

	if (flag) return;

	if (x == n + 1)
	{
		if (sum == count - sum)
		{
			flag = true;
		}
	}
	else
	{
		DFS(x + 1 ,sum + a[x]);
		DFS(x + 1, sum);
	}
}

int main()
{
    scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
		count += a[i];
	}
	DFS(1,0);

	if (flag)
		printf("YES");
	else
		printf("NO");

	return 0;
}