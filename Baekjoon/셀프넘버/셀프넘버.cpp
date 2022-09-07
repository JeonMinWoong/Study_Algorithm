#include <iostream>

using namespace std;

int self(int x)
{
    int sum = x;
    while (x != 0)
    {
        sum += x % 10;
        x = x / 10;
    }

    return sum;
}

int main()
{
    bool a[10001] = { false };

    for (int i = 1; i <= 10000; i++)
    {
        int n = self(i);
        if (n < 10001)
        {
            a[n] = true;
        }
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (!a[i])
            cout << i << "\n";
    }
}