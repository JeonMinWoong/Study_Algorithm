#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t,n,a,b,answer = 0;
	vector<pair<int, int>> v;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		sort(v.begin(), v.end());
		
		int max_val = v[0].second;
		int ch = 1;
		answer = 1;
		while (true)
		{
			if (ch == v.size())
				break;
			if (max_val > v[ch].second)
			{
				max_val = v[ch].second;
				answer++;
			}
			ch++;
		}
		cout << answer << endl;
		v.clear();
	}
}