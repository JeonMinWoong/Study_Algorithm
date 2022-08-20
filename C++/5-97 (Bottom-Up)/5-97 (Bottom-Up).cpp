// 5-97 (Bottom-Up).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, a[51][51], ch[51][51], dx[4] = { 1,0,-1,0 };

    cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	ch[0][0] = a[0][0];

	for (int i = 0; i < n; i++)
	{
		ch[0][i] = ch[0][i - 1] + a[0][i];
		ch[i][0] = ch[i - 1][0] + a[i][0];
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			ch[i][j] = min(ch[i - 1][j], ch[i][j - 1]) + a[i][j];
		}
	}
	

	cout << ch[n - 1][n - 1];
}