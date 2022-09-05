#include <iostream>

using namespace std;

int main()
{
	int a[1001] = { 0,1,2,3 };
	int n,value = 10007;

	cin >> n;

	for (int i = 3; i <= n; i++)
	{
		a[i] = (a[i - 2] + a[i - 1]) % value;
	}

	cout << a[n] << "\n";
}