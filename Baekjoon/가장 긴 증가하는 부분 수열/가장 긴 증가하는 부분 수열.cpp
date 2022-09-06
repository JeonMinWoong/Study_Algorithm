#include <iostream>
using namespace std;

int main()
{
	int a[1001] = { 0 };
	int dp[1001];
	int n,answer = 0;
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
		answer = max(answer, dp[i]);
	}

	cout << answer << endl;
}
