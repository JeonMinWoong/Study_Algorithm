// 4-84 휴가(DFS).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n,res = -2147000000;
vector<int> t,p;

void DFS(int x, int sum)
{
	if (x == n)
	 {
		if (sum > res)
		{
			res = sum;
		}
	}
	else
	{
		if (x + t[x] <= n + 1) DFS(x + t[x], sum + p[x]);
		DFS(x + 1, sum);
	}
}

int main()
{
	int a,b;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &a, &b);
	    t.push_back(a);
		p.push_back(b);
	}

	DFS(0,0);

	printf("%d ", res);
}