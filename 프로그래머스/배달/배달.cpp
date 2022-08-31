#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;
    vector<pair<int, int>> v[55];
    priority_queue<pair<int, int>> pq;
    vector<int> dist(N + 1, 2147000000);

    for (int i = 0; i < road.size(); i++)
    {
        int n1 = road[i][0];
        int n2 = road[i][1];
        int value = road[i][2];

        v[n1].push_back(make_pair(n2, value));
        v[n2].push_back(make_pair(n1, value));
    }

    pq.push(make_pair(1, 0));

    dist[1] = 0;

    while (!pq.empty())
    {
        int now = pq.top().first;
        int cost = pq.top().second;
        pq.pop();

        for (int i = 0; i < v[now].size(); i++)
        {
            int next = v[now][i].first;
            int val = v[now][i].second;
            if (dist[next] > cost + val)
            {
                dist[next] = cost + val;
                pq.push(make_pair(next, dist[next]));
            }
        }
    }


    for (int i = 1; i <= N; i++)
    {
        if (dist[i] <= K)
            answer++;
    }


    return answer;
}