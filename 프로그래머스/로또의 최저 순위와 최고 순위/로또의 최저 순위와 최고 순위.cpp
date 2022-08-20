#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> lottos(6), win_nums(6);

    for (int i = 0; i < 6; i++)
    {
        cin >> lottos[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        cin >> win_nums[i];
    }

    int cnt = 7, max_L = 0;
    vector<int> answer;

    for (int i = 0; i < lottos.size(); i++)
    {
        if (lottos[i] == 0)
        {
            max_L++;
            continue;
        }
        for (int j = 0; j < win_nums.size(); j++)
        {
            if (lottos[i] == win_nums[j])
            {
                cnt--;
                win_nums.erase(win_nums.begin() + j);
                break;
            }
        }
        
    }

    int value = cnt > 6 ? 6 : cnt;

    answer.push_back((value - max_L) == 0 ? 1 : value - max_L);
    answer.push_back(value);
    
    for (int i = 0; i < 2; i++)
    {
        cout << answer[i] << " ";
    }
}

