/*PROGRAM FOR TABLE OF ANY NUMBER*/


#include<stdio.h>
int main()
{
int i,n;
printf("enter a number for multiplication table: ");
scanf("%d",&n);
printf("        TABLE of %d     \n",n);
printf("        ==========      \n");
for(i = 1;i <=10;i = i+1)
{       
printf("%d X %d = %d    %d X %d = %d\n",n,i,n*i,n,10 + i,n*(10 + i));

}
return 0;
}


/*code written by VRISHTI GUPTA*/
