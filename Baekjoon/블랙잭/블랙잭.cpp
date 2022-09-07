#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, a, sum = 0,max_val = 0;
    vector<int> v;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                sum = v[i] + v[j] + v[k];
                if (sum <= m && max_val < sum)
                {
                    max_val = sum;
                }
            }
        }
    }

    cout << max_val;
}