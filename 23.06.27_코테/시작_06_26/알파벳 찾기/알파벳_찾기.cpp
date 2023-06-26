#include <iostream>
using namespace std;

string s;

int cnt[27] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
char charValue[27] = {"abcdefghijklmnopqrstuvwxyz"};

int main()
{
    cin >> s;
    int curValue = 0;
    for (int index = 0; index < size(s); index++)
    {
        for (int index2 = 0; index2 < size(charValue); index2++)
        {
            if(s[index] == charValue[index2])
            {
                curValue = index;
                if(cnt[index2] == -1)
                {
                    cnt[index2] = curValue;
                }
            }
        }
    }

    for (int index = 0; index < size(cnt) - 1; index++)
    {
        cout << cnt[index] << " ";
    }

    return 0;
}