#include <iostream>
using namespace std;

int n[9] = {0,};
int main(int argc, char* argv[])
{
    int maxValue = -2147483647;
    int saveIndex = 0;
    for (int index = 0; index <= size(n) - 1; index++)
    {
        cin >> n[index];
        if(maxValue < n[index])
        {
            maxValue = n[index];
            saveIndex = index + 1;
        }
    }
    
    cout << maxValue << endl;
    cout << saveIndex << endl;
    return 0;
}
