#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    bool answer = true;
    vector<string> phone_book;

    sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size() - 1; i++)
    {
        if (phone_book[i + 1].find(phone_book[i]) != string::npos)
        {
            int index = phone_book[i + 1].find(phone_book[i]);
            if (index == 0)
            {
                answer = false;
                return answer;
            }
        }
    }
}