#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, a, start = 0, end = 0,min_sum =INT32_MAX;
	vector<int> v;
	int res[2];
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	end = v.size()-1;
	while (start < end)
	{
		int sum = v[start] + v[end];

		if (min_sum > abs(sum))
		{
			min_sum = abs(sum);
			res[0] = v[start] ;
			res[1] = v[end];
		
			if (sum == 0)
				break;
		}

		if (sum < 0)
			start++;
		else
			end--;
	}
	cout << res[0] << " " << res[1] << endl;
}