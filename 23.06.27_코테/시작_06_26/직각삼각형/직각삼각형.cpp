#include <complex>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int first, second, third;
    string answer = "";

    while (true)
    {
        cin >> first >> second >> third;
        if (first == 0 && second == 0 && third == 0) break;

        if (pow(first, 2) + pow(second, 2) == pow(third, 2))
        {
            cout << "right" << "\n";
        }
        else if (pow(first, 2) + pow(third, 2) == pow(second, 2))
        {
            cout << "right" << "\n";
        }
        else if (pow(second, 2) + pow(third, 2) == pow(first, 2))
        {
            cout << "right" << "\n";
        }
        else
        {
            cout << "wrong" << "\n";
        }
    }

    return 0;
}
