#include <iostream>
#include <string>
using namespace std;


int main(int argc, char* argv[])
{
    string st;  
    char cap[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char min[27] = {"abcdefghijklmnopqrstuvwxyz"};
    int count[27] = {0,};
    cin >> st;

    char save;
    int maxCnt = -1;
    for (int cnt = 0; cnt < st.size(); cnt++)
    {
        for (int minValue = 0; minValue <= size(cap); minValue++)
        {
            if(st[cnt] == cap[minValue] || st[cnt] == min[minValue])
            {
                count[minValue]++;
            }

            if(maxCnt < count[minValue] && count[minValue] != 0)
            {
                save = cap[minValue];
                maxCnt = count[minValue];
            }
        }
    }

    int maxCount = 0;
    for (int countCheck = 0; countCheck <= size(count); countCheck++)
    {
        if(maxCnt == count[countCheck])
        {
            maxCount++;
        }
    }

    if(maxCount >= 2)
    {
        save = '?';
    }

    cout << save << endl;  
}
