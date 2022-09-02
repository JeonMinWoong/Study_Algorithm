#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, k,cnt =0;
    queue<int> q;
    int ch[100001] = { 0 };
    cin >> n >> k;

    // 처음 위치 체크
    ch[n] = 1;
    q.push(n);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        //잡았을 때
        if (x == k)
        {
            // 처음 값 빼고 출력
            cout << ch[x]-1 << endl;
            return 0;
        }

        //각 조건
        int xp = x + 1;
        int xm = x - 1;
        int x2 = x * 2;

        if (xp <= 100000 && ch[xp] == 0)
        {
            q.push(xp);
            // 기존 값을 가져와서 현재 값에 넣기
            ch[xp] = ch[x] + 1;
        }

        if (xm >= 0 && ch[xm] == 0)
        {
            q.push(xm);
            // 기존 값을 가져와서 현재 값에 넣기
            ch[xm] = ch[x] + 1;
        }

        if (x2 <= 100000 && ch[x2] == 0)
        {
            q.push(x2);
            // 기존 값을 가져와서 현재 값에 넣기
            ch[x2] = ch[x] + 1;
        }
    }
}