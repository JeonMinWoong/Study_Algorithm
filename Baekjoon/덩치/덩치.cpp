// 덩치.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,a,b;
    vector<pair<int, int>> v;
    vector<int> answer;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    for (int i = 0; i < v.size(); i++)
    {
        int num = 1;
        for (int j = 0; j < v.size(); j++)
        {
            if (i == j) continue;
            if (v[i].first < v[j].first && v[i].second < v[j].second)
                num++;
        }
        answer.push_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }
}