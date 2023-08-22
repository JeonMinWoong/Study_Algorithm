#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<int, int> m;
    vector<int> v(n, 0);
    vector<int> v2(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        v2[i] = v[i];
    }

    sort(v.begin(), v.end());
    unique(v.begin(), v.end());
    
    for (int i = 0; i < n; ++i)
    {
        if(m.find(v[i]) == m.end())
        {
            m.insert({v[i],i});
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if(m.find(v2[i]) != m.end())
        {
            cout << m[v2[i]] << " ";
        }
    }
    return 0;
}