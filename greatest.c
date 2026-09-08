#include<stdio.h>
int main()
{
  int num1,num2,num3;
printf("enter three numbers:");
scanf("%if%if%if",&num1,&num2,&num3);
  if(num1>=num2&& num1>=num3)
  { 
    printf("the gratest number is num1");
   }  
  else if(num2>=num1&&num2>=num3)
  {
   printf("the greatest number is num2");
  }
  else
  {
  printf("the greatest number is num3");
  } 
 return 0;
}