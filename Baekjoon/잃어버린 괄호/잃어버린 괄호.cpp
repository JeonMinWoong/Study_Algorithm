#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string n;
    int answer = 0;
    string sum = "";
    bool isFlag = false;
    cin >> n;

    for (int i = 0; i <= n.size(); i++)
    {
        if (n[i] == '-' || n[i] == '+' || i == n.size())
        {
            if (!isFlag)
            {
                answer += stoi(sum);
                sum = "";
            }
            else
            {
                answer -= stoi(sum);
                sum = "";
            }

            if (n[i] == '-') isFlag = true;
        }
        else
        {
            sum += n[i];
        }
    }

    cout << answer << endl;
}