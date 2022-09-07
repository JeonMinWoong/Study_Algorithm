#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string n;
	long long sum = 0;
    cin >> n;
	sort(n.begin(), n.end(), greater<int>());

	if (n.find('0') == string::npos)
		cout << -1;
	else
	{
		for (int i = 0; i < n.length(); i++)
		{
			sum += n[i] - '0';
		}

		if (sum % 3 == 0)
			cout << n;
		else
			cout << "-1";
	}
}