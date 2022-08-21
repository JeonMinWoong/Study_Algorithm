#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
    vector<string> id_list;
    vector<string> report;
    vector<int> answer;
    map<string, int> cnt;
    map<string, set<string>> log;

    for (string s : report)
    {
        int blank = s.find(" ");
        string from = s.substr(0, blank);
        string to = s.substr(blank);

        if (log[from].find(to) == log[from].end())
        {
            log[from].insert(to);
            cnt[to]++;
        }
    }

    for (string id : id_list)
    {
        int answerCnt = 0;
        for (string str : log[id])
        {
            if (cnt[str] >= 2) answerCnt++;
        }
        answer.push_back(answerCnt);
    }

    for (int i = 0; i < id_list.size(); i++)
    {
       cout << answer[i] << " ";
    } 
}