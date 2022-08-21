#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Answer(int number,int count)
{
    int x;
    if (number == 0)
    {
        x = count % 5;
        return x + 1;
    }
    else if (number == 1)
    {
        x = count % 8;
        if (x == 0) return 2;
        else if (x == 1) return 1;
        else if (x == 2) return 2;
        else if (x == 3) return 3;
        else if (x == 4) return 2;
        else if (x == 5) return 4;
        else if (x == 6) return 2;
        else if (x == 7) return 5;
    }
    else
    {
        x = count % 10;
        if (x == 0 || x == 1) return 3;
        else if (x == 2 || x == 3) return 1;
        else if (x == 4 || x == 5) return 2;
        else if (x == 6 || x == 7) return 4;
        else if (x == 8 || x == 9) return 5;
    }
}

int main()
{
    vector<int> answers;
    vector<int> answer;
    vector<vector<int>> sim(3, vector<int>(answers.size(), 0));
    vector<int> res(3);

    int cnt = 0, max_a = 0;
    while (cnt < answers.size())
    {
        sim[0][cnt] = Answer(0, cnt);
        sim[1][cnt] = Answer(1, cnt);;
        sim[2][cnt] = Answer(2, cnt);;
        cnt++;
    }

    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == sim[0][i])
            res[0]++;
        if (answers[i] == sim[1][i])
            res[1]++;
        if (answers[i] == sim[2][i])
            res[2]++;
    }

    max_a = *max_element(res.begin(), res.end());
    for (int i = 0; i < 3; i++)
    {
        if (max_a == res[i])
            answer.push_back(i + 1);
    }

}