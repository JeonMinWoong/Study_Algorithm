#include <iostream>
#include <string>
using namespace std;

int n = 0;
int value[1000000];
int main()
{
    cin >> n;
    int min = INT32_MAX;
    int max = INT32_MIN;
    for (int i = 0; i < n; ++i)
    {
        cin >> value[i];
        if(value[i] > max)
        {
            max = value[i];
        }

        if(value[i] < min)
        {
            min = value[i];
        }
    }

    cout << min << " " << max;
}