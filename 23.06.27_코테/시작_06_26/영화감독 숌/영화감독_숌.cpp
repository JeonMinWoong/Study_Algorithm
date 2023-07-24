#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0;
    int baseInt = 666;
    string baseValue = "666";
    cin >> n;
    while(true)
    {
        if(std::to_string(baseInt).find(baseValue) != string::npos)
        {
            cnt++;
            if(n == cnt)
            {
                break;
            }
        }
        baseInt++;
    }

    cout << std::to_string(baseInt) << "\n";
    
    return 0;
}