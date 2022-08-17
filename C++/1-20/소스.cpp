#include <iostream>

using namespace std;

int main()
{
	// 1 .가위 2. 바위 3. 보

	int n;
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] == b[i])
		{
			cout << "D" << endl;
		}
		else if (a[i] == 1 && b[i] == 2)
		{
			cout << "B" << endl;
		}
		else if (a[i] == 2 && b[i] == 3)
		{
			cout << "B" << endl;
		}
		else if (a[i] == 3 && b[i] == 1)
		{
			cout << "B" << endl;

		}
		else
		{
			cout << "A" << endl;
		}
	}

	return 0;
}