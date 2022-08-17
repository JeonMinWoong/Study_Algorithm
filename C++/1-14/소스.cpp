#include <iostream>
#include <string>

using namespace std;

int reverse(int x)
{
	string s = to_string(x);
	reverse(s.begin(), s.end());
	return atoi(s.c_str());   // 문자열을 정수로 변환하기 atoi(문자열.c_str())
}

bool IsPrlme(int x)
{
	int count = 0;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
			count++;
	}

	if (count == 2)
		return true;
	else
		return false;
}

int main()
{
	int n ;
	int count[100];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> count[i];
	}

	for (int i = 0; i < n; i++)
	{
		count[i] = reverse(count[i]);

		if (IsPrlme(count[i]))
			cout << count[i] << " ";
	}

	return 0;
}