#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string age;

	cin >> age;

	int a , b;

	const int y = 2020;

	stringstream ssInt(age.substr(0, 2));

	ssInt >> a;

	if (a < 10)
		a = a + 2000;
	else
		a = a + 1900;

	a = y - a ;


	stringstream ssSex(age.substr(7,1));

	ssSex >> b;

	if (b == 1 || b == 3)
		cout << a << " " << "M";
	else if (b == 2 || b == 4)
		cout << a << " " << "W";
	else
		cout << a;

	return 0;
}