#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, answer = 0;
    long long input, maxValue = INT16_MIN;
    vector<long long> v;
    cin >> k >> n;
    for (int i = 0; i < k; ++i)
    {
        cin >> input;
        v.push_back(input);
        if(maxValue < input) maxValue = input;
    }

    long left = 1, right = maxValue;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        int cnt = 0;
        for (int i = 0; i < k; ++i)
        {
            cnt += v[i] / mid;
        }
        
        if(cnt < n)
        {
            right = mid - 1;
        }
        else
        {
            answer = mid;
            left = mid + 1;
        }
    }

    cout << answer << endl;
    return 0;
}