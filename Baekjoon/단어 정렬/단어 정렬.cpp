#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

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
	sort(v.begin(), v.end(), Compare);

	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
}