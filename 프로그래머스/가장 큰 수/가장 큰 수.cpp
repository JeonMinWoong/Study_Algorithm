#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Check(string a, string b)
{
    if (a + b > b + a) return true;
    else false;
}

int main()
{
    vector<int> numbers;
    string answer = "";
    int max_v = 0;
    vector<string> value;
    for (int i = 0; i < numbers.size(); i++)
    {
        value.push_back(to_string(numbers[i]));
    }

    sort(value.begin(), value.end(), Check);

    for (int i = 0; i < numbers.size(); i++)
    {
        printf("s", value[i].c_str());
    }
}