#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k,a,answer = 0;
    int max_k = 0;
    vector<int> v;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        while (k - v[i] >= 0)
        {
            k -= v[i];
            answer++;
        }
    }
    cout << answer << endl;
}