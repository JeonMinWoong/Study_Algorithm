#include <iostream>
#include <vector>
#define MAX 100001

using namespace std;

vector<int> v[MAX];
int ch[MAX];
int arr[MAX];
int n;

void DFS(int x)
{
	// 확인
	ch[x] = true;

	for (int i = 0; i < v[x].size(); i++)
	{
		// 갈 곳 체크
		int next = v[x][i];
		if (!ch[next])
		{
			//부모노드 넣기 next -> x 부모 노드이다. v[2] = 4 , v[3] = 6, v[4] = 1, v[5] = 3, v[6] = 1, v[7] = 4;
			arr[next] = x;
			DFS(next);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	int a, b;

    cin >> n;

	for (int i = 0; i < n-1; i++)
	{
		cin >> a >> b;
		// 간선 연결
		v[a].push_back(b);
		v[b].push_back(a);
	}

	// 2차원 배열이 아니기 때문에
	DFS(1);

	for (int i = 2; i <= n; i++)
	{
		cout << arr[i] << "\n";
	}
}