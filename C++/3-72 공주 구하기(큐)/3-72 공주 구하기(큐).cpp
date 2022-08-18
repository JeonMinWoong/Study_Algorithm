// 3-72 공주 구하기(큐).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, k;
    queue<int> q;

    scanf_s("%d %d", &n, &k);
    
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    

    while (!q.empty())
    {
        for (int i = 1; i < k; i++)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
        if (q.size() == 1)
        {
            printf("%d", q.front());
            q.pop();
        }
    }
    
}
