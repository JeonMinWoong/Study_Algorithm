// 분해합.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		int sum = i;
		int val = i;

		while (val)
		{
			sum += val % 10;
			val /= 10;
		}
		if (sum == n)
		{
			cout << i;
			return 0;
		}
	}

	cout << "0";
}