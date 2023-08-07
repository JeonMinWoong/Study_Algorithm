#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

float percentValue = 0.15f;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, index, cutLowValue, cutHighValue, answer = 0;
    float cnt = 0.0f;
    vector<int> v;
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> index;
        v.push_back(index);
    }

    sort(v.begin(), v.end());

    cutLowValue = round(v.size() * percentValue);
    cutHighValue = v.size() - cutLowValue;
    for (int i = 0; i < v.size(); ++i)
    {
        if(i < cutLowValue) continue;
        if(i >= cutHighValue) continue;

        answer += v[i];
        cnt++;
    }
    
    if(n == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << round(answer / cnt) << endl; 
    }
    
    return 0;
}