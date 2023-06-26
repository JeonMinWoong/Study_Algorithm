#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    string str;
    int cnt = 0;
    bool isEmpty = false;
    getline(cin, str);

    
    for (int index = 0; index < size(str); index++)
    {
        if(str[index] != ' ' && isEmpty == false)
        {
            cnt++;
            isEmpty = true;
        }
        else if(str[index] == ' ')
        {
            isEmpty = false;
        }
    }

    cout << cnt << endl;
    
    return 0;
}