#include <iostream>
#include <string>

using namespace std;

int main()
{
	string n;

	cin >> n;

	int a = 0, max = 0, res = 0, count = 0, count2 = 0;


	for (int i = 0; i <= 9; i++)
	{
		for (int k = 0; k < n.size(); k++)
		{
			if (n[k] - 48 == i)
			{
				count++;
			}
		}

		if (count > count2)
		{
			count2 = count;
			res = i;
		}
		else if (count == count2)
		{
			if (res < i)
			{
				res = i;
			}
		}
		count = 0;
	}

	cout << res;

	
	

}