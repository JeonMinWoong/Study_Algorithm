#include <iostream>

using namespace std;

int cnt = 0;
int X(int x)
{
    if (x < 100)
    {
        return x;
    }
    else
    {
        cnt = 99;
        for (int i = 100; i <= x; i++)
        {
            int a = i / 100; // 백
            int b = (i / 10) % 10; // 십
            int c = i % 10; //일

            if ((a - b) == (b - c))
                cnt++;
        }
    }

    return cnt;
}

int main()
{
    int n;

    cin >> n;
    
    cout << X(n);
}