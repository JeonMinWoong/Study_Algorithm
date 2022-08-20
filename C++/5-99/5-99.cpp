#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m, min_g = 0;
    
    cin >> n;

    vector<int> coin(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    
    cin >> m;

    vector<int> dy(m+1,1000);

    dy[0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = coin[i]; j <= m; j++)
        {
            dy[j] = min(dy[j], dy[j - coin[i]] + 1);
        }

    }

    for (int i = 0; i <= m; i++)
    {
        cout << dy[i] << " ";
    }
    cout << "\n";

    cout << dy[m];
}
