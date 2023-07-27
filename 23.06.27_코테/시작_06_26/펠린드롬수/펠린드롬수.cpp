#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, rs;
    while (true)
    {
        cin >> s;
        if(s == "0")
        {
            break;
        }
        else
        {
            for (int i = s.size() - 1; i >= 0; --i)
            {
                rs += s[i];
            }

            if(s == rs)
            {
                cout << "yes" << endl;
            }else
            {
                cout << "no" << endl;
            }

            rs.clear();   
        }
    }
    
    return 0;
}