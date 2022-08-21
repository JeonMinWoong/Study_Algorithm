#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int answer = 0, max_a = 0;
    vector<int> res(200001, 0);
    vector<int> nums;

    max_a = nums.size() / 2;
    res[nums[0]] = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1] && res[nums[i + 1]] == 0)
            res[nums[i + 1]] = 1;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (res[nums[i]] == 1 && answer < max_a)
        {
            res[nums[i]] = 0;
            answer++;
        }
    }
}