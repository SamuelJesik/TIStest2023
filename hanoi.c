#include <stdio.h>

void hanoi(int n, int a, int b,in)
{
  if (n == 1) 
    printf("presun kamen 1 na %d do %d\n", a, b);
  else
  {
    hanoi(n - 1, a, 3 - a);
    printf("presun kamen %d na %d do %d\n", n, a, b);
    hanoi(n-1 , 3 - a - b, b);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}
