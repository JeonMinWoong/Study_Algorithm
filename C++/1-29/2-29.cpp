// 2-29.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n, count = 0;

	string str;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		str = to_string(i);

		for (int j = 0;j < str.size(); j++)
		{
			if (str[j] == '3')
				count++;
		}
	}

	int tmp, i, digit , cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		tmp = i;
		while (tmp > 0)
		{
			digit = tmp % 10;
			if (digit == 3) cnt++;
			tmp = tmp / 10;
		}
	}

	cout << cnt;
}
