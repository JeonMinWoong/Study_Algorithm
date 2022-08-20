#include <iostream>

using namespace std;

int main()
{
    int n,a[101],dy[101],res = 0;

    cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	dy[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		int max = 0;
		for (int j = i - 1; j >= 1; j--)
		{
			if (a[j] < a[i] && dy[j] > max)
			{
				max = dy[j];
				cout << j << " : " << dy[j] << " ";
			}
		}
		dy[i] = max + 1;
		if (dy[i] > res)
			res = dy[i];
	}
	cout << res;
}