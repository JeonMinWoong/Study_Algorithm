#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int *player = new int[n];
	int* playerAnser = new int[n];
	int count = 0;
	
	

	for (int i = 0; i < n; i++)
	{
		cin >> player[i] >> playerAnser[i];
	}

	for (int i = 0; i < n; i++)
	{
		int sum = 0;

		for (int j = 1; j <= player[i]; j++)
		{
			sum += j;
		}
		if (sum == playerAnser[i])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;;
		sum = 0;
	}

	return 0;
}