#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;
    cin.ignore();
    vector<int> v;
    string s, input;
    for (int i = 0; i < m; ++i)
    {
        getline(cin,s);
        int index = s.find(' ');
        if(index > 0)
        {
            input = s.substr(0, index);
            int value = stol(s.substr(index, s.size()));
            if(input == "add")
            {
                if(find(v.begin(),v.end(), value) == v.end())
                {
                    v.push_back(value);
                }
            }
            else if(input == "remove")
            {
                v.erase(remove(v.begin(), v.end(), value), v.end());
            }
            else if(input == "check")
            {
                if(find(v.begin(),v.end(), value) != v.end())
                {
                    cout << "1\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
            else if(input == "toggle")
            {
                if(find(v.begin(),v.end(), value) != v.end())
                {
                    v.erase(remove(v.begin(), v.end(), value), v.end());
                }
                else
                {
                    v.push_back(value);
                }
            }
        }
        else
        {
            if(s == "all")
            {
                v.clear();
                for (int i = 1; i <= 20; ++i)
                {
                    v.push_back(i);
                }
            }
            else if(s == "empty")
            {
                v.clear();
            }
        }
    }
    
    return 0;
}