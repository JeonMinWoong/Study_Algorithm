#include <iostream>
#include <stack>

using namespace std;

int main()
{
	char ch[30];
	stack<int> s;
	bool isFlag = false;
    scanf_s("%s", &ch,sizeof(ch));

	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == '(')
			s.push(ch[i]);
		else
		{
			if (s.empty())
			{
				printf("NO");
				isFlag = true;
				break;
			}
			else
			{
				s.pop();
			}
		}
	}
	if (s.empty() && !isFlag)
		printf("YES");
	else if(!isFlag)
		printf("NO");

	return 0;
}
