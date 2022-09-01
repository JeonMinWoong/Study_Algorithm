#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Com(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}

int main()
{
    int n,a,b;
    int startTine = 0,answer = 0;
    vector<pair<int,int>> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), Com);

    for (int i = 0; i < n; i++)
    {
        if (v[i].first >= startTine)
        {
            answer++;
            startTine = v[i].second;
        }
    }
    cout << answer << endl;
}