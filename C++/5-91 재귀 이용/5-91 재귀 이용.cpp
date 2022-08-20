#include <iostream>

using namespace std;

int ch[50];

int DFS(int n)
{
    if (ch[n] > 0) return ch[n];

    if (n == 1 || n == 2) return n;
    else
    {
        return ch[n] = DFS(n - 1) + DFS(n - 2);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << DFS(n);
}