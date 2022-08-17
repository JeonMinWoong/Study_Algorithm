#include <iostream>
#include <sstream>
#include <string>

using namespace std;


int digit_sum(int x)  // 125
{
	int tmp, sum = 0;

	while (x > 0)       // 125  , 12    , 1
	{
		tmp = x % 10;   // 5    , 2      ,  1
		sum += tmp;     // 0 + 5 , 7     ,  8
		x = x / 10;     // 125 / 10 = 12; , 1  , 0
	} 

	return sum;
}

int main()
{
	int a;

	cin >> a;

	int num;
	int sum = 0;
	int max = 0;
	int res = 0;

	for (int i = 0; i < a; i++)
	{
		cin >> num;
		sum = digit_sum(num);
		
		if (max < sum)
		{
			max = sum;
			res = num;
		}
		else if (max == sum)
		{
			if (num > res)
				res = num;
		}
	}

	cout << res;

	return 0;
}