// 1-25.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, count = 1;
	
	cin >> n;

	vector<int> a(n);
	vector<int> s(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] < a[j])
				count++;
		}
		s[i] = count;
		count = 1;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << " ";
	}

}
