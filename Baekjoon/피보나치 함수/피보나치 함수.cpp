#include <iostream>


using namespace std;

int zeroCnt, oneCnt;

int main()
{
	int zero[41] = { 1,0 };
	int one[41] = { 0,1 };
    int n,a;

    cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		for (int j = 2; j <= a; j++)
		{
			zero[j] = zero[j - 1] + zero[j - 2];
			one[j] = one[j - 1] + one[j - 2];
		}
		cout << zero[a] << " " << one[a] << "\n";
	}
}