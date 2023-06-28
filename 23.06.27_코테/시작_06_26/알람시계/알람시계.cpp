#include <iostream>
using namespace std;

int h;
int m;
int sub = 45;
const int TIME_VALUE = 60;
int main(int argc, char* argv[])
{
    cin >> h >> m;
    int minute = h * TIME_VALUE;
    int totalMinute = minute + m - sub;
    int time = totalMinute / TIME_VALUE;
    int remainMinute = totalMinute- time * TIME_VALUE;

    if(remainMinute < 0)
    {
        time = 23;
        remainMinute = TIME_VALUE + remainMinute;
    }
    cout << time << " " << remainMinute;
    return 0;
}
