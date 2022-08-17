#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	string s1;
	string s2;
	string s3;

	int count = 0;
	bool isEnd = false;

	cin >> s1;
	cin >> s2;

	for (int i = 0; i < s1.length(); i++)
	{
		for (int j = 0; j < s2.length(); j++)
		{
			if (s1[i] == s2[j])
			{
				count++;
				s2 = s2.erase(j,1);
			}
			//cout << s1[i] << " "<<i << " " << s2[j]<< " "  << j << " " << count << endl;

			/*if (count == s2.length())
			{
				isEnd = true;
				break;
			}*/
		}

		//if (isEnd)
		//	break;
	}

	//cout << s1.length();

	if (count == s1.length())
		cout << "YES";
	else
		cout << "NO";
}