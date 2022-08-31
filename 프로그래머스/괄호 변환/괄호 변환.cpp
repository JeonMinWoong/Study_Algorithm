#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool Check(string u)
{
    int ckCnt = 0;
    for (int i = 0; i < u.size(); i++)
    {
        if (u[i] == '(')
            ckCnt++;
        else
            ckCnt--;

        if (ckCnt < 0)
            return false;
    }

    return true;
}

string solution(string p) {
    string answer = "";
    string u, v;
    int rCnt = 0, lCnt = 0;

    if (p.empty())
        return "";

    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == '(')
            lCnt++;
        else
            rCnt++;

        if (rCnt == lCnt)
        {
            u = p.substr(0, i + 1);
            v = p.substr(i + 1);
            break;
        }
    }

    printf("u : %s v : %s\n", u.c_str(), v.c_str());

    if (Check(u))
    {
        v = solution(v);
        return answer = u + v;
    }
    else
    {
        string dumy = "(";
        v = solution(v);
        dumy += v + ")";
        u.erase(0, 1);
        u.erase(u.size() - 1, 1);

        for (int i = 0; i < u.size(); i++)
        {
            if (u[i] == '(')
                dumy += ')';
            else
                dumy += '(';
        }
        answer = dumy;
    }

    return answer;
}