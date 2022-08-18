#include <iostream>

void Re(int x)
{
    if (x == 0) return;
    else
    {
        Re(x / 2);
        printf("%d", x % 2);
        
    }
}


int main()
{
    int n;

    scanf_s("%d", &n);
    Re(n);
}
