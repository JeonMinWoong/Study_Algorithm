#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,answer = 0,cnt =0,min_v = 2147000000,value = 0;
    vector<int> v1,v2;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    sort(v1.begin(), v1.end(),greater<>());
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v2.push_back(a);
    }

    while (cnt < n)
    {
        min_v = 2147000000;
        for (int i = 0; i < v2.size(); i++)
        {
            if (v1[cnt] * v2[i] <= min_v)
            {
                min_v = v1[cnt] * v2[i];
                value = i;
            }
        }
        v2.erase(v2.begin() + value);
        answer += min_v;
        cnt++;
    }
    cout << answer << endl;
}