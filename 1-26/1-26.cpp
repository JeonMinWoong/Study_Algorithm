// 1-26.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n, max = 0;
	cin >> n;

	vector<int> a(n);
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	max = a[0];

	for (int i = 0; i < n; i++)
	{
		v[i] = 0;
		
		for (int j = i; j >= 0; j--)
		{
			if (a[i] <= a[j])
			{
				if (max < a[i])
				{
					max = a[i];
					v[i] = 1;
					break;
				}
				
				v[i]++;
			}
		}
		cout << v[i] << " ";
	}
}
