#include <iostream>
using namespace std;

const int MUL_5 = 5;
const int MUL_25 = 25;
const int MUL_125 = 125;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << n / MUL_5 + n / MUL_25 + n / MUL_125 << endl;
    
    return 0;
}