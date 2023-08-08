#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, cnt;
    map<string, int> m;
    vector<string> v;
    string name, kind;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        for (int j = 0; j < n; ++j)
        {
            cin >> name >> kind;
            if(m.find(kind) == m.end())
            {
                m.insert({kind, 1});   
            }
            else
                m[kind]++;
        }
        cnt = 1;
        for (auto it : m)
        {
            cnt *= (it.second + 1);
        }
        cout << --cnt << "\n";
        m.clear();
    }
    
    
    return 0;
}