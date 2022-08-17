#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
	int count = 0;
	int hValue = 0;
	cin >> n;

	vector<int> value(n);

	for (int i = 0; i < n; i++)
	{
		cin >> value[i];
	}

	sort(value.rbegin(),value.rend());

	for (int i = 1; i < value.size(); i++)
	{
		if (value[i-1] != value[i])
		{
			count++;

			if (count == 2)
			{
				cout << value[i] << "\n";
				break;
			}
		}
	}

	//for (int i = 0; i < value.size(); i++)
	//{
	//	cout << value[i] << "\t";
	//}
}