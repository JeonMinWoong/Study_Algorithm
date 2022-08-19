// 90 라이언 킹 심바 (BFS).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>

using namespace std;

struct State {
    int x, y,dis;
    State(int _x, int _y,int _dis)
    {
        x = _x;
        y = _y;
        dis = _dis;
    }
    bool operator<(const State& b)const {
        if (dis == b.dis)
        {
            if (x == b.x) return y > b.y;
            else return x > b.x;
        }
        else return dis > b.dis;
    }
};

struct Lion {
    int x, y, s ,eat;
    void sizeUp()
    {
        eat = 0;
        s++;
    }
};


int main()
{
    int n, sim[30][30],ch[30][30],dx[4] = { 0,-1,0,1 }, dy[4] = { 1,0,-1,0 },res = 0;

    scanf_s("%d", &n);
    
    priority_queue<State> q;
    Lion simba;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf_s("%d", &sim[i][j]);
            if (sim[i][j] == 9)
            {
                simba.x = i;
                simba.y = j;
                sim[i][j] = 0;
            }
        }
    }
    q.push(State(simba.x, simba.y, 0));
    simba.s = 2;
    simba.eat = 0;
    while (!q.empty())
    {
        State val = q.top();
        q.pop();
        int x = val.x;
        int y = val.y;
        int dis = val.dis;
        if (sim[x][y] != 0 && sim[x][y] < simba.s) {
            simba.x = x;
            simba.y = y;
            simba.eat++;
            if (simba.eat >= simba.s) simba.sizeUp();
            sim[x][y] = 0;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    ch[i][j] = 0;
                }
            }
            while (!q.empty()) q.pop();
            res = val.dis;
        }
        for (int k = 0; k < 4; k++)
        {
            int xx = x + dx[k];
            int yy = y + dy[k];
            if (xx < 1 || xx > n || yy<1 || yy>n || sim[xx][yy] > simba.s || ch[xx][yy] > 0) continue;
            q.push(State(xx, yy, dis + 1));
            ch[xx][yy] = 1;
        }
    }

    printf("%d", res);
}