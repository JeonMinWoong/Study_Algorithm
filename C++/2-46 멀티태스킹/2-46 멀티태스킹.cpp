
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,re,count = 0,res = 0,sec = 0;

    cin >> n;

	vector<int> a(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		res += a[i];
	}

	cin >> re;

	if (re >= res)
	{
		cout << "-1";
		return 0;
	}

	while (1)
	{
		count++;
		if (count > n) count = 1;
		if (a[count] == 0)
			continue;
		a[count]--;
		sec++;
		if (sec == re) break;
	}

	while (true)
	{
		count++;
		if (count > n) count = 1;
		if (a[count] != 0) break;
	}

	cout << count;
}
