#include <stdio.h>

void hanoi(int n, int a, int b,int c)
{
    if (n == 1)
        printf("presun kamen 1 z %d do %d\n", a, b);
    else
    {
        hanoi(n - 1, a,c,b);
        printf("presun kamen %d z %d do %d\n", n,a,b);
        hanoi(n - 1 ,c,b,a);
    }
}

int main()
{
    int n = 3;

    hanoi(n, 1, 3,2);
    return 0;
}

