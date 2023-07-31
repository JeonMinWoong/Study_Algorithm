#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    bool* a = new bool[n+1];
    for (int i = 2; i <= n; ++i)
    {
        a[i] = true;
    }

    for (int i = 2; i * i <= n; ++i)
    {
        if(a[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                a[j] = false;
            }
        }
    }

    for (int i = m; i <= n; ++i)
    {
        if(a[i])
        {
            cout << i << "\n";
        }
    }
    
    return 0;
}