#include <iostream>

using namespace std;

int main()
{
	int n;

	int oids;
	int x = 111111111,y= -111111111;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> oids;
		if (x > oids)
			x = oids;
		if (y < oids)
			y = oids;
	}

	

	cout << endl;

	cout << y - x;

	return 0;
}