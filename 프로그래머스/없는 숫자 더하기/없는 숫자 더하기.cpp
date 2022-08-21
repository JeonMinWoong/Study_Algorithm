#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;
    int answer = 0;
    vector<int> ch(10);

    for (int i = 0; i < numbers.size(); i++)
    {
        ch[numbers[i]] = 1;
    }

    for (int i = 0; i < ch.size(); i++)
    {
        if (ch[i] == 0)
            answer += i;
    }

}
