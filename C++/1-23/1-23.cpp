// 1-23.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, count = 1, max = 0;
	
	cin >> n;
	
	vector<int> a(n);



	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n-1; i++)
	{
		if (a[i] <= a[i + 1])
		{
			count++;
			if (max < count)
			{
				max = count;
			}
			continue;
		}
		count = 1;
	}
	cout << max;
}

