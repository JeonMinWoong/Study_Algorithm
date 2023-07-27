#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 1;
    vector<char> v;
    stack<int> s;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int value;
        cin >> value;
        while (cnt <= value)
        {
            v.push_back('+');
            s.push(cnt);
            cnt++;
        }

        if(value == s.top())
        {
            v.push_back('-');
            s.pop();
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << "\n";
    }
    return 0;
}