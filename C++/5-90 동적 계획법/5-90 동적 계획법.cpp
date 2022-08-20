// 5-90 동적 계획법.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int dy[50];

using namespace std;

int main()
{
    int n;
    cin >> n;
    dy[1] = 1;
    dy[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dy[i] = dy[i - 2] + dy[i - 1];
    }

    cout << dy[n];

    return 0;
}