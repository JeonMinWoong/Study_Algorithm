#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, cnt = 0;
    string s;
    set<string> hs, answer;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        hs.insert(s);
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> s;
        if(hs.find(s) != hs.end())
        {
            answer.insert(s);
            cnt++;
        }
    }
    cout << cnt << "\n";
    for(auto it : answer)
    {
        cout << it << "\n";
    }
    
    return 0;
}