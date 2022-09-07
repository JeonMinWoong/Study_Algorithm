#include <iostream>

using namespace std;

int main()
{
    long long n,cnt = 0,sum = 0,num = 1;

	cin >> n;

	while (true)
	{
		sum += num;
		cnt++;
		if (n < sum)
		{
			cnt--;
			break;
		}
		num++;
	}

	cout << cnt << endl;
}