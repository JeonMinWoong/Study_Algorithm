#include <iostream>
using namespace std;

int n, m;
int main()
{
    cin >> n >> m;
    int maxValue = n > m ? n : m;
    int minValue = n > m ? m : n;
    int answerFirst = 0;
    int answerSecond = 0;
    
    for (int i = 1; i <= maxValue; i++)
    {
        if(n % i == 0 && m % i == 0)
        {
            if(n == m)
            {
                answerFirst = n;
                break;
            }
            answerFirst = i;
        }
    }
    
    int index = 1;
    for (int i = maxValue; i <= INT32_MAX; i = maxValue * index)
    {
        if(minValue == 0)
        {
            break;
        }
        if(i % minValue == 0)
        {
            answerSecond = i;
            break;
        }
        index++;
    }
    
    cout << answerFirst << endl;
    cout << answerSecond << endl;
    
    return 0;
}