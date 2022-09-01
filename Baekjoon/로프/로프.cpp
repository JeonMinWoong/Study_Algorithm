#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,sum = 0,w = 0;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        sum = max(sum, (n - i) * v[i]);
    }
    cout << sum << endl;
}   