#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, answer;
    cin >> n >> answer;
    map<string, int> mNameKey;
    map<int, string> mNumberKey;
    string s;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        mNameKey.insert({s, i+1});
        mNumberKey.insert({i+1, s});
    }

    for (int i = 0; i < answer; ++i)
    {
        cin >> s;
        if(isdigit(s[0]))
        {
            cout << mNumberKey[stoi(s)] << "\n";
        }
        else
        {
            cout << mNameKey[s] << "\n";
        }
    }
    
    return 0;
}