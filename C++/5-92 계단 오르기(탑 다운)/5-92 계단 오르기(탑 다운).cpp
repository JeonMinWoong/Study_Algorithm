// 5-92 계단 오르기(탑 다운).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int dy[50];

int DFS(int n)
{
	if (dy[n] > 0) return dy[n];

	if (n == 1 || n == 2) return n;
	else
	{
		return dy[n] = DFS(n - 1) + DFS(n - 2);
	}
}

int main()
{
    int n;

    cin >> n;

	dy[1] = 1;
	dy[2] = 2;
	cout << DFS(n);
}