#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int fn, a[101],length, acount = 0;
	int sn, b[101], bcount = 0;
	int value[301], p1 = 0, p2 = 0, p3 = 0;
	

	cin >> fn;
	for (int j = 0; j < fn; j++)
	{
		cin >> a[j];
	}

	cin >> sn;
	for (int j = 0; j < sn; j++)
	{
		cin >> b[j];
	}

	while (p1 < fn && p2 < sn)
	{
		if (a[p1] < b[p2])
			value[p3++] = a[p1++];
		else
			value[p3++] = b[p2++];
	}
	while (p1 < fn) value[p3++] = a[p1++];
	while (p2 < sn) value[p3++] = b[p2++];


	//length = fn + sn;
	//vector<int> value(length);

	//for (int i = 0; i < value.size(); i++)
	//{
	//	if (a[acount] <= b[bcount] && acount < fn)
	//	{
	//		value[i] = a[acount];
	//		acount++;
	//		continue;
	//	}
	//	else if(a[acount] > b[bcount] && bcount < sn)
	//	{
	//		value[i] = b[bcount];
	//		bcount++;
	//		continue;
	//	}
	//	else if(bcount == sn && acount != fn)
	//	{
	//		value[i] = a[acount];
	//		acount++;
	//		continue;
	//	}
	//	else if (bcount != sn && acount == fn)
	//	{
	//		value[i] = b[bcount];
	//		bcount++;
	//		continue;
	//	}
	//}

	for (int i =0; i < p3; i++)
	{
		cout << value[i] << "\t";
	}
}
