#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string answer = "";
    vector<string> participant;
    vector<string> completion;
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    completion.push_back("");

    for (int i = 0; i < participant.size(); i++)
    {
        if (participant[i].compare(completion[i]) == 0)
        {
            completion[i] = "";
            continue;
        }
        else if (participant[i].compare(completion[i]) != 0)
        {
            answer += participant[i];
            break;
        }
    }
}