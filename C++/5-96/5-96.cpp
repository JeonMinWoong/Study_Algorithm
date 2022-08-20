#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Box
{
	int x, y, z;
	Box(int _x, int _y, int _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}
	bool operator<(const Box& a)const
	{
		return x > a.x;
	}
};

int main()
{
    int n,a,b,c,res = 0,max_h =0;

	cin >> n;

	vector<Box> box;
	vector<int> dy(n, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		box.push_back(Box(a, b, c));
	}
	sort(box.begin(), box.end());
	dy[0] = box[0].y;
	res = dy[0];
	// 다이나믹
	for (int i = 1; i < n; i++)
	{
		max_h = 0;
		for (int j = i-1; j >= 0; j--)
		{
			if (box[j].z > box[i].z && dy[j] > max_h)
				max_h = dy[j];
		}
		dy[i] = max_h + box[i].y;
		res = max(res, dy[i]);
	}

	cout << res;
}