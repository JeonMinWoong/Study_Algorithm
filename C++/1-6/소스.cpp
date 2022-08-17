#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string a;
	cin >> a;

	//int *b = new int[a.size()];
	string b;

	int x;
	int count = 0;

	for (int i = 0; i < a.size(); i++)
	{
		if (isdigit(a[i]) == 0)
		{
			continue;
		}
		else
		{
			b += a[i];
		}
	}

	stringstream L(b.substr());

	L >> x;

	cout << x << endl;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
			count++;
	}

	cout << count;

}