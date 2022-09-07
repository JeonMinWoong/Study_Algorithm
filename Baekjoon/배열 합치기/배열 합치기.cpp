#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[1000000];
int b[1000000];
vector<int> v;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n, m;
	int aStart = 0, bStart = 0;


	cin >> n >> m;


	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		v.push_back(a[i]);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		v.push_back(b[i]);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	//while (aStart + bStart < n + m)
	//{
	//	if (aStart == n)
	//		cout << b[bStart++] << " ";
	//	else if(bStart == m)
	//		cout << a[aStart++] << " ";
	//	else
	//	{
	//		if (a[aStart] <= b[bStart])
	//			cout << a[aStart++] << " ";
	//		else
	//			cout << b[bStart++] << " ";
	//	}
	//}
}