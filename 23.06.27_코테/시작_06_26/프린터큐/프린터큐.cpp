#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char* argv[])
{
    int tCase;
    int cnt;
    int n, m, impt;
    cin >> tCase;
    for (int i = 0; i < tCase; i++)
    {
        cnt = 0;
        cin >> n >> m;
        priority_queue<int> pq;
        queue<pair<int, int>> q;
        for (int j = 0; j < n; j++)
        {
            cin >> impt;
            q.push({j, impt});
            pq.push(impt);
        }
        while(!q.empty())
        {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if(pq.top() == value)
            {
                pq.pop();
                ++cnt;
                if(index == m)
                {
                    cout << cnt << endl;
                    break;
                }
            }
            else q.push({index, value});
        }
    }
    
    
    return 0;
}
