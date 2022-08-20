// 5-94.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,res = 0;

    cin >> n;

	vector<int> arr(n + 1), dy(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	dy[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		int max = 0;
		for (int j = i-1; j >= 1; j--)
		{
			if (arr[j] < arr[i] && dy[j] > max)
				max = dy[j];
		}
		dy[i] = max + 1;
		if (dy[i] > res)
			res = dy[i];
	}
	cout << res;
}