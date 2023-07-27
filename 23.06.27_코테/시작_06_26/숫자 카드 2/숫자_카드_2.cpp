#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    map<int, int> map;
    cin >> n;
    int name;
    for (int i = 0; i < n; ++i)
    {
        cin >> name;
        if(map.find(name) != map.end())
        {
            map.find(name)->second++;
        }
        else
        {
            map.insert({name, 1});
        }
    }

    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> name;
        if(map.find(name) != map.end())
        {
            cout << map[name] << "\n";
        }else
        {
            cout << "0" << "\n";
        }
    }
    
    return 0;
}