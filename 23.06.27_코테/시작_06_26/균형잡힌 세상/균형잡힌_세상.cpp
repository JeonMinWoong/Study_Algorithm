#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    
    while (true)
    {
        getline(cin, str);
        stack<char> a;
        if (str[0] == '.') break;

        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == '(')
                a.push('(');
            else if (str[i] == '[')
                a.push('[');
            else if (str[i] == ']')
            {
                if (!a.empty() && a.top() == '[')
                    a.pop();
                else
                {
                    printf("no\n"); break;
                }
            }

            if (str[i] == ')')
            {
                if(!a.empty() && a.top() == '(')
                    a.pop();
                else
                {
                    printf("no\n");
                    break;
                } 
            }

            if (a.empty() && i == str.length() - 2)
                printf("yes\n");
            else if (!a.empty() && i == str.length() - 2)
                printf("no\n");
        }

    }
    
    return 0;
}