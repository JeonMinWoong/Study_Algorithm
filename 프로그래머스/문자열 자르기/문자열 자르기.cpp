#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int s_size = s.size();

    int strCount = s_size / 2;
    if (s_size % 2 == 0)
    {
        answer = s.substr(strCount - 1, 2);
    }
    else
    {
        answer = s.substr(strCount, 1);
    }


    return answer;
}