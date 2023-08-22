#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> v(n+1, 0);
    for (int i = 1; i <= n; ++i)
    {
        int value;
        cin >> value;
        v[i] = v[i - 1] + value;
    }

    for (int i = 0; i < m; ++i)
    {
        int index, jndex;
        cin >> index >> jndex;
        cout << v[jndex] - v[index-1] << "\n";
    }
    
    return 0;
}