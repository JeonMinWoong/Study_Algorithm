#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,p,answer = 0,cnt =0;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        v.push_back(p);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        while (cnt <= i)
        {
            answer += v[cnt];
            cnt++;
        }
    }

    cout << answer << endl;
}