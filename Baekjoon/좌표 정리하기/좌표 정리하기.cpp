﻿#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,a,b;
	vector<pair<int,int>> v;

    cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
	
}