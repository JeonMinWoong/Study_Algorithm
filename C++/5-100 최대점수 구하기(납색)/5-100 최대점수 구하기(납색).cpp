#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m,s,t,max_s = 0,res = 0;

    cin >> n >> m;
    
    vector<int> dy(m + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        for (int j = m; j >= t; j--)
        {
            dy[j] = max(dy[j], dy[j-t] + s);
        }
    }
    cout << dy[m];
}