#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n ,m = 1,i,count = 0,value;

    cin >> n;
	value = n;
	n--;
	while (n > 0)
	{
		m++;
		n = n - m;

		if (n % m == 0)
		{
			for (i = 1; i < m; i++)
			{
				printf("%d + ", (n / m) + i);
			}
			printf("%d = %d\n", (n / m) + i, value);
			count++;
		}
	}
	cout << "\n" << count;
}