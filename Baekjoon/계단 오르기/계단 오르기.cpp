// 계단 오르기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	int a[301] = { 0 };
	int dp[301] = { 0 };
	int n,answer = 0,cnt = 0;

    cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	dp[0] = 0;
	dp[1] = a[1];
	dp[2] = a[1] + a[2];
	dp[3] = max(a[1] + a[3], a[2] + a[3]);
	//dp[4] = max(dp[4-3] + a[4-1] + a[4], dp[4-2] + a[4]);
	for (int i = 4; i <= n; i++)
	{
		dp[i] = max(dp[i - 3] + a[i - 1] + a[i], dp[i - 2] + a[i]);
	}
	cout << dp[n] << endl;
}