#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, b;
    int workTime = 1e9, ground = -1, minG = 257, maxG = -1;
    
    cin >> n >> m >> b;
    
    vector<vector<int>> v(n, vector<int>(m, 0));
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> v[i][j];
            if(v[i][j] <= minG) minG = v[i][j];
            if(v[i][j] >= maxG) maxG = v[i][j];
        }
    }

    for (int curHigh = minG; curHigh <= maxG; ++curHigh)
    {
        int checkTime = 0;
        int addBlock = 0;
        int subBlock = 0;
        for (int i = 0; i < v.size(); ++i)
        {
            for (int j = 0; j < v[i].size(); ++j)
            {
                int curBlock = curHigh - v[i][j];
                if(curBlock < 0) subBlock += abs(curBlock);
                else if(curBlock > 0) addBlock += curBlock;
            }
        }
        if(addBlock <= subBlock + b)
        {
            checkTime = addBlock + subBlock * 2;
            if(checkTime <= workTime)
            {
                workTime = checkTime;
                ground = curHigh;
            }
        }
    }

    cout << workTime << " " << ground;
    
    return 0;
}