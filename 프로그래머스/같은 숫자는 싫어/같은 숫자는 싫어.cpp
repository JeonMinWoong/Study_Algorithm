#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    vector<int> ch;

    for (int i = 1; i < arr.size()+1; i++)
    {
        ch[i] = arr[i - 1];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != ch[i])
            answer.push_back(arr[i]);
    }

    return answer;
}

int main()
{
    int num = 0;
    vector<int> arr;
    vector<int> answer;

    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != answer[num])
        {
            answer.push_back(arr[i]);
            num++;
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

}