#include <iostream>
#include <string>
using namespace std;

int caseCnt = 0;
char findChar = ' ';
int main()
{
    cin >> caseCnt;
    cin.ignore();
    for (int index = 0; index < caseCnt; index++)
    {
        
        string s;
        string value;
        getline(cin, s);
        int indexEmpty = s.find(findChar);
        int cnt = stoi(s.substr(0, indexEmpty));
        value = s.substr(indexEmpty + 1, s.length());
        for(int valueIndex = 0; valueIndex < size(value); valueIndex++)
        {
            for(int loopCnt = 0; loopCnt < cnt; loopCnt++)
            {
                cout << value[valueIndex];
            }
        }
        cout << endl;
    }
}