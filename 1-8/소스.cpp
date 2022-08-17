#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;

	int count1 = 0, count2 = 0;

	getline(cin, a);

	for (int i = 0; i < a.size(); i++)
	{
		if (a[0] == ')')
		{
			count1 = 999;
			break;
		}
		if (a[a.size()-1] == '(')
		{
			count2 = 999;
			break;
		}
		if (a[i] == '(')
			count1++;
		else if(a[i] == ')')
			count2++;
	}

	if (count1 == count2)
		cout << "YES";
	else
		cout << "NO";

}