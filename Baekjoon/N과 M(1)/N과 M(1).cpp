#include <iostream>

using namespace std;

int n, m;
int a[9];
int ch[9];
void DFS(int x)
{
	// 길이가 넘지 않았나?
	if (x == m)
	{
		// 길이 출력부
		for (int i = 0; i < m; i++)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}
	// 실제 숫자 저장부 1부터 n까지 나와야 함으로
	for (int i = 1; i <= n; i++)
	{
		// 같은 숫자 안나오게 확인
		if (ch[i] == 0)
		{
			// 체크
			ch[i] = 1;
			// 실제 숫자 넣기
			a[x] = i;
			// 길이 증가
			DFS(x + 1);
			// 다시 돌아오고 나서 작업할 수 있게
			ch[i] = 0;
		}
	}

}

int main()
{
	cin >> n >> m;

	DFS(0);
}