#include <stdio.h>
int sum(int,int);
int main(void)
{
    int total;
    total = sum(5,6);
    printf("The total is: %d",total);
    return 0;
  
}
int sum(int a,int b)
{
    return a+b;
}
