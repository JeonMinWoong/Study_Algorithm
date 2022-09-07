// N-Queen.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int n,answer =0;
int ch[15];

bool check(int _x)
{
    // [i]는 행 i는 열 , 열 과 행 대각선을 모두 체크
    for (int i = 0; i < _x; i++)
    {
        // ch[0] = 0 == ch[0] = 0 || 0 - 0 = _x = 0 = - 0
        if (ch[i] == ch[_x] || abs(ch[_x] - ch[i]) == _x - i)
        {
            //cout << ch[i] << " " << ch[_x] << " " << ch[_x] - ch[i] << " " << _x - i << "\n";
            return false;
        }
    }
    return true;
}

void DFS(int x)
{
    if (x == n)
    {
        answer++;
    }
    else
    {
        // x 는 행 i 는 열
        for (int i = 0; i < n; i++)
        {
            // 행과 열 저장 (0,0) 은 ch[0] = 0 이런식으로 저장
            ch[x] = i;
            // 그후 겹치는지 체크
            if (check(x))
                DFS(x + 1);
        }
    }

}

int main()
{
    cin >> n;

    DFS(0);

    cout << answer << endl;
}