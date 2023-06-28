
#include <iostream>
#include <string>
using namespace std;
int n;
int main(int argc, char* argv[])
{
    cin >> n;
    int value;
    int total = 0;
    float max = INT32_MIN;
    float average = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> value;
        total += value;
        if(max < value)
        {
            max = value;
        }
    }

    average = (total / max) * 100.0f / n;
    cout << std::to_string(average) << endl;
    return 0;
}
