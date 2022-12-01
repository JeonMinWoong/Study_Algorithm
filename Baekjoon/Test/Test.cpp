#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> quest) 
{
    int answer = 0,sum = 0;

    sort(quest.begin(), quest.end());

    int questSize = quest.size();

    for (int i = 0; i < questSize; i++)
    {
        if (quest[i][0] <= sum)
        {
            sum += quest[i][1];
            answer++;
        }
    }

    return answer;
}