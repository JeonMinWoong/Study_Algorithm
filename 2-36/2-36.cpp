#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
	int a[100], n,tmp,i, j;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 1; i < n; i++)
	{
		tmp = a[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > tmp) a[j + 1] = a[j];
			else break;
		}
		a[j+1] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

