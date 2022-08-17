// 1-19.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	int n, back = 0, count =0;

	cin >> n;

	int* m = new int[n];

	for (int k = 0; k < n; k++)
	{
		cin >> m[k];
	}

	for (int i = 0; i < n; i++)
	{
		bool isBack = true;

		if (i == n-1)
			break;

		for (int j = i+1; j < n; j++)
		{
			if (m[i] <= m[j])
			{
				isBack = false;
				break;
			}
		}

		if (isBack)
		{
			count++;
		}
	}

	cout << count;
}

