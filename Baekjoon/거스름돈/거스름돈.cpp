#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, pay = 1000,answer = 0;
    vector<int> v = { 500,100,50,10,5,1 };
    cin >> n;
    
    for (int i = 0; i < v.size(); i++)
    {
        while (pay - n >= v[i])
        {
            pay -= v[i];
            answer++;
        }
    }
    cout << answer << endl;
}