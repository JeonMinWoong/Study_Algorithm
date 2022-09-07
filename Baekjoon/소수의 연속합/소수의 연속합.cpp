#include <iostream>
#include <vector>

using namespace std;

int a[4000001];
vector<int> v;
int main()
{
    int n;
	int start = 0, end = 0, sum = 0, answer = 0;
    cin >> n;

	for (int i = 2; i <= n; i++)
	{
		a[i] = i;
	}
	for (int i = 2; i <= n; i++)
	{
		if (a[i] == 0) continue;
		for (int j = 2 * i; j <= n; j += i)
		{
			a[j] = 0;
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (a[i] != 0)
			v.push_back(a[i]);
	}

	while (start <= end)
	{
		if (sum >= n)
		{
			sum -= v[start++];
		}
		else if (end == v.size())
			break;
		else
		{
			sum += v[end++];
		}

		if (sum == n)
			answer++;
	}

	cout << answer << endl;
}