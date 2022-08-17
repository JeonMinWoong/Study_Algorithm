#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int Count(int s, vector<int> value)
{
	int i, cnt = 1, pos = value[0];
	for (i = 1; i < n; i++)
	{
		if (value[i] - pos >= s)
		{
			cnt++;
			pos = value[i];
		}
	}
	return cnt;
}


int main()
{
    int c,lt = 1, rt,mid,res = 0;

    cin >> n >> c;
	
	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	rt = a[n-1];
	while (lt <= rt)
	{
		mid = (lt + rt) / 2;
		if (Count(mid, a) >= c) {
			res = mid;
			lt = mid + 1;
		}
		else rt = mid - 1;
	}

	cout << res;
}

