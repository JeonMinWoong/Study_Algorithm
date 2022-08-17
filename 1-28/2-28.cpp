
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, tmp, j, cnt1 = 0 , cnt2 =0	;

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
				if (j == 2) cnt1++;
				else if (j == 5) cnt2++;
				tmp = tmp / j;
			}
			else
			{
				j++;
			}
			if (tmp == 1)
				break;
		}
	}
	if (cnt1 < cnt2) cout << cnt1;
	else cout << cnt2;

	return 0;

}
