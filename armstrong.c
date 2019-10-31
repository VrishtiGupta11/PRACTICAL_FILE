/*PROGRAM TO FIND WHETHER A NUMBER IS AN ARMSTRONG NUMBER OR NOT*/


#include<stdio.h>

int main()
{                               
int a,r,sum = 0,temp;
printf("enter non negative integral number : ");
scanf("%d",&a);
temp = a;
while (temp>0)
{
r = temp%10;
sum = sum + (r*r*r);
temp = temp/10;
}
if(a == sum)
{
printf("%d is an armstrong number",a);
}
else
{
printf("%d is not an armstrong number\n",a);
}
return 0;
}                                                                                  


/*code written by VRISHTI GUPTA*/                                                                                   
