#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,lt = 0, rt,mid,key;

    cin >> n >> key;

	vector<int> value(n);

	for (int i = 0; i < n; i++)
	{
		cin >> value[i];
		value.push_back(value[i]);
	}

	sort(value.begin(), value.end());
	rt = n - 1;
	while (lt <= rt)
	{
		mid = (lt + rt) / 2;
		if (value[mid] == key)
		{
			cout << mid + 1;
			return 0;
		}
		else if (value[mid] > key) rt = mid - 1;
		else lt = mid + 1;
	}

	return 0;
}
