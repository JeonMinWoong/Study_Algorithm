#include <iostream>

using namespace std;

int main()
{
	int n, m, value = 0, max = 0, count = -1;
    cin >> n >> m;

	for (int i = 1; i <= n ; i++)
	{
		cin >> value;

		if (value > m)
		{
			count++;
		}
		else
		{
			count = 0;
		}
		if (max < count)
			max = count;
	}

	if (max == 0)
		cout << "-1";
	else
		cout << max;

}
