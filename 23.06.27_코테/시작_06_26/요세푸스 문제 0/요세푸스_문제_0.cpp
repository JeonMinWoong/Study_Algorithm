#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, cnt = 0;
    cin >> n >> k;
    queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        q.push(i);
    }

    cout << "<";
    
    while (!q.empty())
    {
        for (int i = 0; i < k - 1; ++i)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if(q.size() > 1)
        {
            cout << ", ";
        }
        q.pop();
    }

    cout << ">";
    return 0;
}