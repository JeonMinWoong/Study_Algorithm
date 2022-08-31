#include <string>
#include <vector>

using namespace std;
int v[60001];
int solution(int n) {
    int answer = 0;


    v[1] = 1;
    v[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        v[i] = (v[i - 1] + v[i - 2]) % 1000000007;
    }

    return answer = v[n];
}