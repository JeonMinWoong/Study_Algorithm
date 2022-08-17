#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int a[1001];

int Count(int s)
{
    int i, cnt = 1, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (sum + a[i] > s) {
            cnt++;
            sum = a[i];
        }
        else sum = sum + a[i];
    }
    return cnt;
}

int main()
{
    int m,lt = 0 , rt =0 , mid = 0,res = 0,max = -2147000000;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        rt = rt + a[i];
        if (a[i] > max) max = a[i];
    }

    while (lt <= rt)
    {
        mid = (lt + rt) / 2;
        if (mid>=max && Count(mid) <= m) {
            res = mid;
            rt = mid - 1;
        }
        else lt = mid + 1;
    }
    cout << res;

    return 0;
}
