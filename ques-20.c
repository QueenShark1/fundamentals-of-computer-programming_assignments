#include <stdio.h>

//marksheet

int main()
{
  int e_d,physic,bee,civil,fcp;
  float total,percentage;
  
  printf("enter your e_d marks\n");
  scanf("%d",&e_d);
  
  printf("enter your physic marks\n");
  scanf("%d",&physic);
  
  printf("enter your bee marks\n");
  scanf("%d",&bee);
  
  printf("enter your civil marks\n");
  scanf("%d",&civil);
  
  printf("enter your fcp marks\n");
  scanf("%d",&fcp);
  
  
  total=(e_d+physic+bee+civil+fcp);
  
  percentage=(total/500)*100;
  
  printf(" your percentage is : %f",percentage);
  return 0;
}