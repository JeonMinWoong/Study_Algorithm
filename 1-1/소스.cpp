#include <iostream>

using namespace std;

int main()
{
	int a ,b, sum = 0;

	cin >> a >> b;


	for (int i = 1; i <= a; i++)
	{
		if (i % b == 0)
		{
			sum += i;
		}
	}
	
	cout << sum << endl;

	return 0;
}