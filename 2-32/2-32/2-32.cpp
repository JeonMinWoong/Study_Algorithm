﻿// 2-32.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int count;
	

	cin >> count;

	vector<int> value(count);

	for (int i = 0; i < count; i++)
	{
		cin >> value[i];
	}

	sort(value.begin(), value.end());

	for (int i = 0; i < value.size();  i++)
	{
		cout << value[i] << " ";
	}
}
