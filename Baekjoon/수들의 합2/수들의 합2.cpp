#include <iostream>

using namespace std;

int a[10001] = { 0 };

int main()
{
    int n,m,answer = 0;

    int start = 0, end = 0, sum = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    while (end <= n)
    {
        if (sum < m)
        {
            sum += a[end++];
        }
        else if (sum >= m)
        {
            sum -= a[start++];
        }
        if(sum == m)
        {
            answer++;
        }
    }

    cout << answer << endl;
}