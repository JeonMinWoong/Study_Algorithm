#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, value;
    
    cin >> n;

    int a[10001] = {0,};
    for (int i = 0; i < n; ++i)
    {
        cin >> value;
        a[value]++;
    }
    
    for (int i = 0; i < 10001; ++i)
    {
        for (int j = 0; j < a[i]; ++j)
        {
            if(a[i] == 0) continue;
            cout << i << "\n";   
        }
    }
}