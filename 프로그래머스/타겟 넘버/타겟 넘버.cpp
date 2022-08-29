
#include<stdio.h>
#include<algorithm>
#include<queue>

using namespace std;

int answer = 0, cTarget = 0;
vector<int> cNumbers;

void DFS(int x, int sum)
{
    if (x == cNumbers.size())
    {
        if (sum == cTarget)
        {
            answer++;
        }
    }
    else
    {
        DFS(x + 1, sum + cNumbers[x]);
        DFS(x + 1, sum - cNumbers[x]);
    }
}

int solution(vector<int> numbers, int target) {

    cTarget = target;
    cNumbers = numbers;

    DFS(0, 0);
}