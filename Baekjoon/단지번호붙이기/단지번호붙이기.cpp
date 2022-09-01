#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[26][26];
bool ch[26][26];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int n, cnt = 0;

void DFS(int x, int y)
{
    ch[x][y] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        // 상하좌우 확인
        int n_x = x + dx[i];
        int n_y = y + dy[i];
        // 초과 하는 부분 넘어가기
        if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= n)
            continue;
        //방문 체크 및 단지 체크
        if (ch[n_x][n_y] == false && a[n_x][n_y] == 1)
            DFS(n_x, n_y);
    }
}

int main()
{
    vector<int> answer;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        //입력되는 문자열을 한개씩 읽기
        for (int j = 0; j < n; j++)
            scanf_s("%1d", &a[i][j]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (a[i][j] == 1 && !ch[i][j]) // 1인지 방문했는지 확인
            {
                // 단지 구성 개수 
                cnt = 0;
                DFS(i, j);
                answer.push_back(cnt);
            }
    }
    sort(answer.begin(), answer.end());
    cout << answer.size() << endl;
    for (auto val : answer)
    {
        cout << val << endl;
    }
}