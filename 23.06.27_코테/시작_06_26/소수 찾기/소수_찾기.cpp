#include <iostream>
using namespace std;

int main()
{
    int n;
    int value = 0;
    int answer = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> value;
        bool isDecimal = false;
        for (int j = 2; j < value; ++j)
        {
            if(value % j == 0)
            {
                isDecimal = true;
            }
        }
        if(!isDecimal && value != 1)
        {
            answer++;
        }
    }

    cout << answer << endl;
    
    return 0;
}