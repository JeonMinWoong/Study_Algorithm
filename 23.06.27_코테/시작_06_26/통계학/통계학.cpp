#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, input, firstValue = 0, secondValue = 0, thirdValue = 0, fourValue = 0;
    vector<int> v;
    int cnt[8001] = {0,};
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        v.push_back(input);
        firstValue += input;
        cnt[input + 4000]++;
    }

    sort(v.begin(), v.end());
    
    int result = 0, count = 0;
    int max = *max_element(cnt, cnt + 8001);
    
    for (int i = 0; i < 8001;i++){
        if(cnt[i] == max){
            count++;
            result = i - 4000;
        }
        if(count == 2){
            break;
        }
    }

    firstValue = round((double)firstValue / n);
    secondValue = v[(n-1)/2];
    thirdValue = result;
    fourValue = v[n - 1] - v[0];

    cout << firstValue << endl;
    cout << secondValue << endl;
    cout << thirdValue << endl;
    cout << fourValue << endl;
    
    return 0;
}