#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n,a;
	//오름 차순
	priority_queue<int,vector<int>, greater<int>> pq;
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		pq.push(a);
	}

	int res = 0;

	while (pq.size() > 1)
	{
		int a_val = pq.top();
		pq.pop();
		int b_val = pq.top();
		pq.pop();
		res += a_val + b_val;
		pq.push(a_val + b_val);
	}



	cout << res << endl;
}