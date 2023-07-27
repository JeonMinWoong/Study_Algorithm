#include <iostream>
using namespace std;

int factorial(int num)
{
    if(num <= 1) return 1;
    return num * factorial(num -1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    cout << factorial(n) / (factorial(n - k) * factorial(k)) << "\n";
    
    return 0;
}