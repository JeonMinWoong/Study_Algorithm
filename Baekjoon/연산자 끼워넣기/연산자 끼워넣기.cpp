#include <iostream>

using namespace std;

int n,min_val = INT32_MAX,max_val = INT32_MIN;

int a[12];
int b[4];

void DFS(int res, int id)
{
	// n까지 체크
	if (id == n)
	{
		// 크면 맥스
		if (max_val < res)
			max_val = res;
		// 작으면 민
		if (min_val > res)
			min_val = res;
		return;
	}
	else
	{
		// 연산자의 개수 만큼
		for (int i = 0; i < 4; i++)
		{
			// 카운터 있는지 확인
			if (b[i] > 0)
			{
				// 중복 실행 안되게 감소 시키고
				b[i]--;

				// 더하기 전달받은 결과 값에 a[id] 다음 값을 더하고, id를 더하여 그 후의 값도 체크
				if (i == 0)
					DFS(res + a[id], id + 1);
				// 빼기
				else if (i == 1)
					DFS(res - a[id], id + 1);
				// 곱하기
				else if (i == 2)
					DFS(res * a[id], id + 1);
				// 나누기
				else
					DFS(res / a[id], id + 1);
				// 다른 경우 확인하기 위해 플러스
				b[i]++;
			}
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		// 숫자 저장
		cin >> a[i];
	}

	for (int i = 0; i < 4; i++)
	{
		// 연산자 저장
		cin >> b[i];
	}

	// a[0]는 시작 점, 1 = 추가할 대상 index
	DFS(a[0], 1);

	cout << max_val << "\n";
	cout << min_val << "\n";
}