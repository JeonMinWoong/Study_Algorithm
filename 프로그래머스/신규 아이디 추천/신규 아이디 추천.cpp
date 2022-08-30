#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string new_id) {
    string answer = "";
    string dumy;
    int maxNumCnt = 7, curNumCnt = 0;

    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    for (int i = 0; i < new_id.size(); i++)
    {
        if (new_id[i] == '_' || new_id[i] == '.' || new_id[i] == '-' || (new_id[i] >= 97 && new_id[i] <= 122)
            || (new_id[i] >= 48 && new_id[i] <= 57))
            dumy += new_id[i];
    }
    new_id = dumy;
    for (int i = 1; i < new_id.size(); i++)
    {
        if (new_id[i] == '.' && new_id[i - 1] == '.')
        {
            new_id.erase(new_id.begin() + i);
            continue;
        }
    }
    if (new_id.front() == '.')
        new_id.erase(new_id.begin());
    if (new_id.back() == '.')
        new_id.erase(new_id.end() - 1);
    if (new_id.empty())
        new_id = "a";
    if (new_id.size() >= 16)
        while (new_id.size() > 15)
        {
            new_id.erase(new_id.begin() + 15);
        }
    if (new_id.back() == '.')
    {
        new_id.erase(new_id.end() - 1);
    }
    if (new_id.size() <= 2)
    {
        while (new_id.size() == 3)
        {
            new_id += new_id.back();
        }
    }

    return answer = new_id;
}