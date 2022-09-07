#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(pair<int,string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
    int n,a;
	string s;
	cin >> n;
	vector<pair<int, string>> v;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> s;
		v.push_back(make_pair(a, s));
	}
	stable_sort(v.begin(), v.end(),Compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
}