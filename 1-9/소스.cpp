#include <iostream>

using namespace std;

int main()
{
	int a;
	int count[50001] = { 0 };
	cin >> a;


	for (int i = 1; i <= a; i++)
	{
		for (int x = i; x <= a; x = x+i)
		{
			count[x]++;
		}
	}

	for (int i = 1; i <=a; i++)
	{
		cout << count[i] << " ";
	}

	return 0;
}