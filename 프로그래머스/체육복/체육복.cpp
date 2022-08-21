// 체육복.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> lost, reserve;
    int n, answer = 0, max_r = 0;
    int answer = 0, cnt = 0, cnt_re = 0;
    int dy[3] = { -1,0,1 };
    vector<int> res(n, 1);

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    for (int i = 0; i < res.size(); i++)
    {
        if (i == lost[cnt] - 1)
        {
            res[i] = 0;
            cnt++;
        }
        if (i == reserve[cnt_re] - 1)
        {
            if (res[i] == 0)
                res[i] = 1;
            else
                res[i] = 2;
            cnt_re++;
        }
    }
    for (int i = 0; i < reserve.size(); i++)
    {
        for (int k = 0; k < lost.size(); k++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (lost[k] == reserve[i] + dy[j])
                {
                    if (res[lost[k] - 1] == 0 && res[reserve[i] - 1] == 2)
                    {
                        res[lost[k] - 1] = 1;
                        res[reserve[i] - 1] = 1;
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        printf("%d ", res[i]);
        if (res[i] >= 1)
            answer++;
    }
}