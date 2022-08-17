// 1-30.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
    int n, lt = 1, cur, rt, k = 1, res = 0;

    cin >> n;

	for (int i = 1; i <= n; i++)
	{
		while (lt != 0)
		{
			lt = n / (k * 10);
			cur = (n / k) % 10;
			rt = n % k;
			if (cur > 3)
			{
				res = res + (lt + 1) * k;
			}
			else if (cur < 3)
			{
				res = res + (lt * k);
			}
			else
			{
				res = res + (lt * k) + (rt + 1);
			}
			k = k * 10;
		}
	}

	cout << res;

}
