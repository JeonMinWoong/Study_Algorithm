#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <iostream>
#include <vector>
using namespace std;

#define n 4
#define r 4
int answer = 0;
int dpArr[r] = { 0, };
vector<int> dpValue;
void DFS(int depth) {

    if (depth == r) {
        int count = 0;
        int index = 0;
        for (int i = 0; i < r; i++)
        {
            if (dpArr[i] > n)
                break;

            count += dpArr[i];
            index = i;
            if (count == n)
                break;
        }
        if (count == n)
        {
            answer++;
            dpArr[index] = 9999999;
            if (dpValue[0] >= n)
            {

            }
        }
        return;
    }
    else
    {
        for (int i = 1; i <= r; i++) {
            if (dpArr[i] <= n)
            {
                dpArr[depth] = dpValue[i-1];
            }
            if (dpArr[depth] <= n)
            {
                DFS(depth + 1);
            }
        }
    }
}

int main(void) {
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        dpValue.push_back(a);
    }

    DFS(0);
    cout << "정답" << answer;
    return 0;
}