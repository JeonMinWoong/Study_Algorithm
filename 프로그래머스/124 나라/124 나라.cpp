#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int value = n;
    int remain = -1;
    while (value != 0)
    {
        remain = value % 3;
        value = value / 3;
        if (remain == 0)
        {
            answer = "4" + answer;
            value--;
        }
        else if (remain == 1)
        {
            answer = "1" + answer;
        }
        else
        {
            answer = "2" + answer;
        }
    }


    return answer;
}