#include <iostream>

using namespace std;

int main()
{
    int n,a, sum =0;

    cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%1d", &a);
		sum += a;
	}

	cout << sum << endl;
}