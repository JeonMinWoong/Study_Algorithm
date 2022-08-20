#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, a, b;

    cin >> n >> m;

	vector<int> dy(m + 1, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		for (int j = a; j <= m; j++)
		{
			dy[j] = max(dy[j], dy[j - a] + b);
		}
	}
	cout << dy[m];
}