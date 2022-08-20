// 5-97 (Top-Down.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int a[51][51],dy[51][51];

int DFS(int x, int y)
{
	if (dy[x][y] > 0) return dy[x][y];
	if (x == 0 && y == 0) return a[0][0];
	else
	{
		if (y == 0) return dy[x][y] = DFS(x - 1, y) + a[x][y];
		else if (x == 0) return dy[x][y] = DFS(x, y - 1) + a[x][y];
		else
		{
			return dy[x][y] = min(DFS(x - 1, y), DFS(x, y - 1)) + a[x][y];
		}
	}
}

int main()
{
    int n;

    cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << DFS(n - 1, n - 1);
}