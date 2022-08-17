
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, tmp , j;
	
	bool flag = false;

    cin >> n;
	
	vector<int> ch(n + 1);
	for (int i = 2; i <= n; i++)
	{
		tmp = i;
		j = 2;
		while (1)
		{
			if (tmp % j == 0)
			{
				tmp = tmp / j;
				ch[j]++;
			}
			else
			{
				j++;
			}
			if (tmp == 1)
				break;
		}
	}

	cout << n << "! = ";
	for (int i = 2; i <= n; i++)
	{
		if (ch[i] != 0)
			cout << ch[i] << " ";
	}

	return 0;

}
