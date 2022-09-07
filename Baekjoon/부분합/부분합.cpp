#include <iostream>

using namespace std;

int a[100001] = { 0 };

int main()
{
    int n, s ,answer = INT32_MAX;
    int start = 0, end = 0, sum = 0;

    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

        
    while (start <= end)
    {
        if (sum >= s)
        {
            answer = min(answer, end - start);
            //cout << end << " " << start << endl;
            sum -= a[start++];
        }
        else if (end == n)
            break;
        else
        {
            sum += a[end++];
        }
    }

    if (answer == INT32_MAX) 
        cout << "0" << endl;
    else
        cout << answer << endl;

    return 0;
}