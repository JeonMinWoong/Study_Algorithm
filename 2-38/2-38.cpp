#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, ins[100],count,tmp = 0;

	scanf("%d", &n);

	vector<int> value(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		for (int j = 0; j < n; j++)
		{
			if (tmp == 0 && value[j] == 0)
			{
				value[j] = i + 1;
				break;
			}
			else if (value[j] == 0)
				tmp--;

		}
		
	}

	for (auto x : value) cout << x << " ";
	return 0;
}