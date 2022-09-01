#include <iostream>

using namespace std;

int main()
{
	int n,answer = 0;
	int a = 3,b = 5;

	cin >> n;

	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			answer += n / 5;
			cout << answer << endl;
			return 0;
		}
		n -= 3;
		answer++;
	}

	cout << -1 << endl;
}