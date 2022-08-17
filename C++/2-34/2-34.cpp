#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<int> value(n);

	for (int i = 0; i < n; i++)
	{
		cin >> value[i];
	}

	sort(value.begin(), value.end());

	for (int i = 0; i < value.size(); i++)
	{
		cout << value[i] << "\t";
	}
}