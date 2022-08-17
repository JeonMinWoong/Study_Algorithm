// 1-31.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;

//#pragma region MyRegion
//
//
//
//int main()
//{
//	int C = 12;
//	int H = 1;
//	int res = 0;
//
//	string str;
//	string value;
//
//	cin >> str;
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		
//		if (str[i] == 'C')
//		{
//			for (int j = 1; j < str.size()-1; j++)
//			{
//				if (str[i + j] != 'H')
//				{
//					value += str[i + j];
//				}
//				else
//				{
//					break;
//				}
//			}
//			if (value != "")
//				res = C * stoi(value);
//			else
//				res = C;
//
//		}
//		value = "";
//		if (str[i] == 'H')
//		{
//			for (int j = 1; j < str.size()-i; j++)
//			{
//				if (str[i + j] != ' ')
//				{
//					value += str[i + j];
//				}
//				else
//				{
//					break;
//				}
//			}
//			if (value != "")
//				res += H * stoi(value);
//			else
//				res += 1;
//		}
//		
//	}
//
//	cout << res;
//}
//#pragma endregion

int main()
{
	char a[10];
	int c = 0, h = 0, pos,i = 0;

	cin >> a;
	if (a[1] == 'H') 
	{
		c = 1;
		pos = 1;
	}
	else
	{
		for (i = 1; a[i] != 'H' ; i++)
		{
			c = c * 10 + (a[i] - 48);
		}
		pos = i;
	}
	if (a[pos + 1] == '\0') h = 1;
	else
	{
		for (i = pos + 1; a[i] != '\0'; i++)
		{
			h = h * 10 + (a[i] - 48);
		}
	}
	cout << c * 12 + h;
}
