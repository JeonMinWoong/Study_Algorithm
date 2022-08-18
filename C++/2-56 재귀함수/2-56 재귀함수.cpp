#include <iostream>

void Re(int count)
{
    if (count == 0) return;
    else
    {
        Re(count - 1);
        printf("%d ", count);
    }
}


int main()
{
    int count = 0;
    int n;

    scanf_s("%d", &n);

    Re(n);
}
