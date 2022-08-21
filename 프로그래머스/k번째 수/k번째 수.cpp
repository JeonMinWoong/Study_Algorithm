#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> array;
    vector<vector<int>> commands;
    vector<int> answer;
    vector<int> box;

    for (int i = 0; i < commands.size(); i++)
    {
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
        {
            box.push_back(array[j]);
        }
        sort(box.begin(), box.end());
        int k = commands[i][2] - 1;
        answer.push_back(box[k]);
        box.clear();
    }
}