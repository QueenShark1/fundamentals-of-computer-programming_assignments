#include<stdio.h>
int main()
{
    int a=90,b=50;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a and b is %d, %d", a, b);
    return 0;
}