// 4-86 피자 배달 거리(DFS).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m,res = 2147000000,ch[51],sum,dis;

vector<pair<int, int> > hs;
vector<pair<int, int> > pz;

void DFS(int x, int y)
{
	if (x == m)
	{
		sum = 0;
		for (int i = 0; i < hs.size(); i++)
		{
			int x1 = hs[i].first;
			int y1 = hs[i].second;
			dis = 2147000000;
			for (int j = 0; j < m; j++)
			{
				int x2 = pz[ch[j]].first;
				int y2 = pz[ch[j]].second;
				dis = min(dis, abs(x1 - x2) + abs(y1 - y2));
			}
			sum = sum + dis;
		}
		if (sum < res)
			res = sum;
	}
	else
	{
		for (int i = y; i < pz.size(); i++)
		{
			ch[x] = i;
			DFS(x + 1, i + 1);
		}
	}
}

int main()
{
	int a;

	scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf_s("%d", &a);
			if (a == 1) 
				hs.push_back(make_pair(i, j));
			else if (a == 2) 
				pz.push_back(make_pair(i, j));
		}
	}
	DFS(0, 0);
	printf("%d", res);
}  
