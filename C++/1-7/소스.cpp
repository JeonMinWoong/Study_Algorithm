#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

	string a;

	getline(cin, a);

	for (int i = 0; i <= a.size(); i++)
	{
		if (a[i] != ' ')
			a[i] = tolower(a[i]);
	}
	int arr = count(a.begin(), a.end(), ' ');
	remove(a.begin(), a.end(), ' ');

	a = a.substr(0, a.length() - arr);

	cout << a;

	return 0;
}