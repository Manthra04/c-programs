#include <stdio.h>
int square(int);
int main(void)
{
    int total;
    total = square(5);
    printf("The square is: %d",total);
    return 0;
  
}
int square(int a)
{
    return a*a;
}
