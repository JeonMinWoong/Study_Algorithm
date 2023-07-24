#include <algorithm>
#include <iostream>
using namespace std;

bool binary_search(int* a, int len, int findValue)
{
    int low = 0, high = len - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if(findValue == a[mid]) return true;

        if(findValue < a[mid]) high = mid - 1;

        if(findValue > a[mid]) low = mid + 1;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n;
    int* a = new int[n];
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a+n);
    
    cin >> m;
    int* b = new int[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
        if(binary_search(a, n, b[i]))
            cout << "1" << "\n";
        else
            cout << "0" << "\n";
    }
    
    return 0;
}