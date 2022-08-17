#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0, count = 1, d = 9 , res = 0;

	cin >> n;

	while (sum + d < n)
	{
		res = res + (count * d);
		sum = sum + d;
		count++;
		d = d * 10;
	}

	res = res+((n-sum)*count);

	cout << res;

	return 0;
}