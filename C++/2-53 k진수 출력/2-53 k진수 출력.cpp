#include <iostream>
#include <stack>
using namespace std;
//int stack[1001], top = -1;

//void Push(int x)
//{
//    stack[++top] = x;
//}
//
//int Pop()
//{
//    return stack[top--];
//}

int main()
{
    int n, k, value = 1;//length = 0;
    stack<int> s;
    char str[20] = "0123456789ABCDEF";
    scanf_s("%d %d", &n, &k);

    while (value > 0)
    {
        // 스택 넣기
        s.push(n % k);
        n = n / k;
        value = n;
        //length++;
    }
    

    //for (int i = 0; i < length; i++)
    while (!s.empty())
    {
        // 스택값 참조
        printf("%c", str[s.top()]);
        // 스택 꺼내기
        s.pop();
    }
}