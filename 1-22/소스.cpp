#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	

	cin >> n >> k;
	
	vector<int> temp(n);

	int max = -222222;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> temp[i];
	}

	for (int i = 0; i < k; i++)
	{
		sum += temp[i];
		
	}
	max = sum;

	for (int j = k; j < n; j++)
	{
		sum = sum + (temp[j] - temp[j - k]);
		if (sum > max)
			max = sum;
	}
	cout << max;
	return 0;
}