#include <iostream>
#include <queue>

using namespace std;

struct Data
{
	int money, when;

	Data(int x, int y)
	{
		money = x;
		when = y;
	}

	bool operator<(Data& a) {
		return when > a.when;
	}
};

int main()
{
    int n,m,d,j,res = 0,max = -2147000000;

    scanf_s("%d", &n);
	priority_queue<int> pQ;
	vector<Data> T;
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d %d", &m, &d);
		T.push_back(Data(m, d));
		if (d > max)
			max = d;
	}
	sort(T.begin(), T.end());
	for (int i = 0; i < T.size(); i++)
	{
		printf("%d %d\t", T[i].when, T[i].money);
	}
	
	cout << "\n";


	j = 0;
	for (int i = max; i >= 1; i--)
	{
		for (; j < n; j++)
		{
			if (T[j].when < i) break;
			pQ.push(T[j].money);
		}
		if (!pQ.empty())
		{
			res += pQ.top();
			pQ.pop();
		}
	}
	printf("%d", res);
}