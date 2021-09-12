#include <stdio.h>
void main ()
{

    int a,b,c,d,e;
    float f;

    printf("Entre the first number : \n",a);
    scanf("%d",&a);

    printf("Entre the second number : \n",b);
    scanf("%d",&b);
    c=a+b;
    printf("result of addition = %d\n",c);
    d=a-b;
    printf("result of subtraction = %d\n",d);
    e=a*b;
    printf("result of multiply :%d\n",e);
    f=(a/b);
    printf("result of division : %0.2f \n",f);
    return 0;
}