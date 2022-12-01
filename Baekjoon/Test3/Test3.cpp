#include <string>
#include <vector>
#include <iostream>

using namespace std;

constexpr double BallDiameter = 2;

int main() {
    int answer = -2;
    vector<vector<double>> objectBallPosList(3);
    vector<double> hitVector(2);
    double x_pos = 0;
    double y_pos = 0;
    bool isEnter = false;
    int ballListSize = objectBallPosList.size();

    int n;
    double a;
    cin >> n;

    double maxX = 0,maxY = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a;
            objectBallPosList[i].push_back(a);
            if (i == 0)
                maxX = max(maxX, a);
            else
                maxY = max(maxY, a);
        }
    }

    hitVector[0] = 1;
    hitVector[1] = 1;

    while (true)
    {
        for (int i = 0; i < ballListSize; i++)
        {
            float deltaX = x_pos - objectBallPosList[i][0];
            float deltaY = y_pos - objectBallPosList[i][1];
            float value = sqrt(abs(deltaX) + abs(deltaY));
            if (value <= 2)
            {
                answer = i;
                break;
            }
        }

        x_pos += hitVector[0];
        y_pos += hitVector[1];
        if (x_pos > maxX || y_pos > maxY)
            break;
        if (answer > -2)
            break;
    }

    cout << answer << endl;
    return answer;
}
