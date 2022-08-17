#include <iostream>

using namespace std;



int main()
{
	int n = 10, aPoint = 0, bPoint = 0;

	string win[10];

	int a[10] = { 0 };
	int b[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > b[i])
		{
			aPoint += 3;
			win[i] = "A";
		}
		else if (a[i] < b[i])
		{
			bPoint += 3;
			win[i] = "B";
		}
		else if (a[i] == b[i])
		{
			aPoint += 1;
			bPoint += 1;
		}
	}

	cout << aPoint << " " << bPoint << endl;
	if (aPoint > bPoint)
		cout << "A";
	else if (aPoint < bPoint)
		cout << "B";
	else
	{
		for (int i = n; i > 0; i--)
		{
			if (win[i] == "A")
			{
				cout << "A";
				break;
			}
			else if (win[i] == "B")
			{
				cout << "B";
				break;
			}

			if (i == 1)
			{
				if (win[0] == "")
				{
					cout << "D";
					break;
				}
			}
		}
	}

	return 0;
}