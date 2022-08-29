#include<string>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    string s;

    bool answer = true;
    int count = 0, value = 0;
    queue<char> q;

    if (s[0] == '(' && s[s.size() - 1] == ')')
        q.push(s[0]);
    else
        count = 2147000000;

    while (!q.empty())
    {
        if (q.front() == '(')
            count++;
        else
        {
            if (count == 0)
            {
                count--;
                break;
            }
            count--;
        }
        q.pop();
        value++;
        if (s.size() > value)
            q.push(s[value]);
    }

    if (count != 0)
        answer = false;

}