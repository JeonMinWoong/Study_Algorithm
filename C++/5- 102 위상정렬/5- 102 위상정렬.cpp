// 5- 102 위상정렬.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n, m,a,b;

    cin >> n >> m;

	vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
	vector<int> degree(n + 1);
	queue<int> Q;

	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		graph[a][b] = 1;
		degree[b]++;
	}
	for (int i = 1; i <= n; i++)
	{
		if (degree[i] == 0) Q.push(i);
	}
	while (!Q.empty())
	{
		int now = Q.front();
		Q.pop();
		cout << now << " ";
		for (int i = 1; i <= n; i++)
		{
			if (graph[now][i] == 1) {
				degree[i]--;
				if (degree[i] == 0)
					Q.push(i);
			}
		}
	}
}