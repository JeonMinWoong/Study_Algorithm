#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k, pos = 0,cnt=0,bp =0;

	cin >> n >> k;

	vector<int> a(n + 1);

	while (1)
	{
		pos++;
		if (pos > n) pos = 1;
		if (a[pos] == 0)
		{
			cnt++;
			if (cnt == k)
			{
				a[pos] = 1;
				cnt = 0;
				bp++;
			}
		}
		if (bp == n - 1) break;
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 0)
			cout << i;
	}
	
}
