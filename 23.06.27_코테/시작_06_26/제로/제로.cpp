#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, input, answer =0;
    vector<int> v;
    cin >> k;
    for (int i = 0; i < k; ++i)
    {
        cin >> input;
        if(input == 0)
        {
            v.pop_back();
            continue;   
        }
        else
        {
            v.push_back(input);
        }
    }

    for (int i = 0; i < v.size(); ++i)
    {
        answer += v[i];
    }

    cout << answer << endl;
    return 0;
}