#include <iostream>

using namespace std;

int main()
{
    int n, dy[51],dx[51];

	cin >> n;

	dy[1] = 1;
	dy[2] = 0;
	for (int i = 3; i <= n+1; i++)
	{
		if (i == 4)
			dy[i] = 0;
		else
			dy[i] = dy[i - 2] + dy[i - 1];
	}

	cout << dy[n+1];
}