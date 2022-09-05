#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[1001][3] = { 0 };
    int n;
	int cost[3];
    cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> cost[0] >> cost[1] >> cost[2];
		a[i][0] = min(a[i - 1][1], a[i - 1][2]) + cost[0];
		a[i][1] = min(a[i - 1][0], a[i - 1][2]) + cost[1];
		a[i][2] = min(a[i - 1][0], a[i - 1][1]) + cost[2];
	}

	cout << min(a[n][0], min(a[n][1], a[n][2])) << "\n";
}