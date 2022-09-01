#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;

    for (int h = 3;; h++)
    {
        cout << sum % h << endl;
        if ((sum % h) == 0)
        {
            int w = sum / h;
            cout << w << endl;
            if (((h - 2) * (w - 2)) == yellow)
            {
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }

    }


    return answer;
}