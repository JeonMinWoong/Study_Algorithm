#include <iostream>
#include <queue>

using namespace std;

int main()
{
    vector<int> scoville;
    priority_queue<int,less<int>> pq;
    int answer = 0,K = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < scoville.size(); i++)
    {
        pq.push(scoville[i]);
    }

    while (pq.size() > 1 && pq.top() < K)
    {
        int valA = pq.top();
        pq.pop();
        int valB = pq.top();
        pq.pop();
        pq.push(valA + valB * 2);
        answer++;
    }

    if (pq.top() < K) return -1;
}