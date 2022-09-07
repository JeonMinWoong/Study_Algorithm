#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	string s;
	vector<string> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		v.push_back(s);
	}

	for (int i = 0; i < v.size(); i++)
	{
		int cnt = 0;
		for (int j = 0; j < v[i].size(); j++)
		{
			if (v[i][j] == '(')
				cnt++;
			else
				cnt--;

			if (cnt < 0)
			{
				cout << "NO" << "\n";
				break;
			}
		}
		if (cnt == 0)
			cout << "YES" << "\n";
		else if(cnt > 0)
			cout << "NO" << "\n";
	}
}