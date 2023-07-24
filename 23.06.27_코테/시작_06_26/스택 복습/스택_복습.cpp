#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> v;

void Push(int value)
{
    v.push_back(value);
}

void Pop()
{
    if(v.size() <= 0)
    {
        cout << "-1" << "\n";
    }
    else
    {
        cout << v.back() << "\n";
        v.pop_back();
    }
}

void Size()
{
    cout << v.size() << "\n";
}

void Empty()
{
    if(v.size() <= 0)
    {
        cout << "1" << "\n";
    }
    else
    {
        cout << "0" << "\n";
    }
}

void Top()
{
    if(v.size() <= 0)
    {
        cout << "-1" << "\n";
    }
    else
    {
        cout << v.back() << "\n";
    }
}

void CheckCommand(string s)
{
    if(s.find("push") != string::npos)
    {
        string intStr = "";
        for (int i = 0; i < s.length(); ++i)
        {
            if(s[i] >= 48 && s[i] <= 57)
                intStr += s[i];
        }
        Push(stoi(intStr));
    }
    else if(s == "pop")
    {
        Pop();
    }
    else if(s == "size")
    {
        Size();
    }
    else if(s == "empty")
    {
        Empty();
    }
    else if(s == "top")
    {
        Top();
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n;

    for (int i = 0; i <= n; ++i)
    {
        getline(cin,s, '\n');
        CheckCommand(s);
    }
    
    return 0;
}