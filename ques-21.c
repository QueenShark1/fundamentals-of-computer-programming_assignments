#include <stdio.h>

//Check number is prime or not

int main()
{
    int a,b;

    printf("enter your number between 0 to 10 \n");
    scanf("%d",&a);

    b==(a=='2'||a=='3'||a=='5'||a=='7');

    if(b)
    {

        printf("your number is prime number");

    }
    else
    {
        printf("your number is not prime number");
    }
    return 0;
}