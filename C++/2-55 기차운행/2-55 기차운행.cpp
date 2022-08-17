#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	int n, m, count = 1;
	stack<int> s;
	scanf_s("%d", &n);
	vector<char> str;
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &m);
		s.push(m);
		str.push_back('P');
		while (1)
		{
			if (s.empty()) break;
			if (count == s.top()) 
			{
				s.pop();
				count++;
				str.push_back('O');
			}
			else break;
		}
	}
	if (!s.empty()) printf("impossible\n");
	else
	{
		for (int i = 0; i < str.size(); i++)
		{
			printf("%c ", str[i]);
		}
	}

	return 0;
}