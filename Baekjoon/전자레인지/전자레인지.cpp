#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<int> v = { 300,60,10 };
	vector<int> ch(v.size(),0);
	cin >> n;

	if (n % 10 != 0)
	{
		cout << -1;
		return 0;
	}
	for (int i = 0; i < v.size(); i++)
	{
		while (n - v[i] >= 0)
		{
			n -= v[i];

			ch[i]++;
		}
	}
	
	for (auto c : ch)
	{
		cout << c << " ";
	}
}