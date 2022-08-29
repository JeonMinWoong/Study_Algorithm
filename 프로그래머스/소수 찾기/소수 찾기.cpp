#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;



bool isPrimel(int n)
{
    if (n == 0 || n == 1) return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    unordered_set<int> set;

    sort(numbers.begin(), numbers.end());

    do {
        for (int i = 1; i < numbers.size() + 1; i++)
        {
            int x = stoi(numbers.substr(0, i));
            if (isPrimel(x)) set.insert(x);
        }
    } while (next_permutation(numbers.begin(), numbers.end()));

    return set.size();
}