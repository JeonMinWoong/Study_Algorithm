// 알파벳.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

char a[21][21];
int alpha[26] = { 0 };

int dy[] = { 0,1,0,-1 };
int dx[] = { 1,0,-1,0 };

int r, c;
int max_val = 0;
void DFS(int x, int y,int val)
{
	// 재귀를 하여 반복해서 val의 값을 가장 높은 것으로 확인한다.
	max_val = max(max_val, val);

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= c || ny < 0 || ny >= r) continue;
		//다음으로 갈 곳이 같은 알파벳이면 alpha[(int)A - 65] = 1 이 되어 안되고, alpha[1] 이런 식으로 확인한다.
		if (!alpha[((int)a[ny][nx])-65])
		{
			//ny 가 y축 이므로 앞에 오고 alpha[(int)B - 65] 이면 alpha[1] = 0 이 1이 된다.
			alpha[((int)a[ny][nx]) - 65]++;

			//방문을 했으므로 val 값을 1 증가시킨다.
			DFS(nx, ny,val + 1);

			//다시 돌아와 다른 경우도 살펴 봐야기 때문에 alpha[1] 의 값을 0으로 만들어 준다.
			alpha[((int)a[ny][nx]) - 65]--;
		}
	}
}

int main()
{
	cin >> r >> c;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			// 문자 입력 받기
			cin >> a[i][j];
		}
	}

	// 좌측 상단부터 시작이니 좌측 상단 체크 (int)A - 65 = 65 - 65 = 0 이 된다. alpha[0]을 1로 만들기
	alpha[((int)a[0][0]) - 65]++;

	// 좌측 상단 부터 시작하고 알파벳 한개를 밟았으니 value는 1부터 시작한다.
	DFS(0, 0, 1);

	cout << max_val << endl;
}