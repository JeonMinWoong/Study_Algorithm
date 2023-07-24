#include <iostream>
using namespace std;

int Check(int x, int y, int** board)
{
    int firstBlackCnt = 0;
    int secondWhiteCnt = 0;

    for (int i = x; i < x + 8; ++i)
    {
        for (int j = y; j < y + 8; ++j)
        {
            if((i + j) % 2 == board[i][j]) firstBlackCnt++;
            else if((i + j + 1) % 2 == board[i][j]) secondWhiteCnt++;
        }
    }

    return min(firstBlackCnt, secondWhiteCnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    int** a = new int*[n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new int[m]{0};
    }
    
    char input;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> input;
            if (input == 'B')
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    
    int minValue = INT16_MAX, checkValue = 0;
    for (int i = 0; i <= n - 8; ++i)
    {
        for (int j = 0;  j <= m - 8; ++j)
        {
            checkValue = Check(i, j, a);
            if(minValue > checkValue)
                minValue = checkValue;
        }
    }

    cout << minValue;
    return 0;
}
