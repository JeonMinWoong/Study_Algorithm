#include <iostream>

using namespace std;

int main()
{
	int value[11] = { 0,1,2,4 };
    int t, n;

    cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 4; j <= n; j++)
		{
			value[j] = value[j - 3] + value[j - 2] + value[j - 1];
		}

		cout << value[n] << "\n";
	}
}