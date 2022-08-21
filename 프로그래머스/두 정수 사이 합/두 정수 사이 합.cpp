#include <iostream>

using namespace std;

int main()
{
    int a, b, answer;
    int min_a = 0, max_a = 0;

    min_a = min(a, b);
    max_a = max(a, b);

    for (int i = min_a; i <= max_a; i++)
    {
        answer += i;
    }
}
