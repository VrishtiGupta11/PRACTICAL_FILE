## GURU NANAK DEV ENGINEERING COLLEGE, LUDHIANA
# **PROGRAMMIMG FOR PROBLEM SOLVING ESC-18105**
# NAME- VRISHTI GUPTA
# ROLL NO- 1915086
# BRANCH- COMPUTER SCIENCE & ENGINEERING
# SECTION- CS-B

# CODE
#### 1.WRITE A PROGRAM FOR ADDITION OF TWO NUMBERS.
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter any two integral numbers : ");
scanf("%d %d",&a,&b);
c = a + b;
printf("the sum of two numbers is %d\n",c);
return 0;
}

#### OUTPUT:
enter any two integral numbers : 100
120
the sum of two numbers is 220

#### 2.WRITE A PROGRAM TO FIND THE AVERAGE OF n NUMBERS.
#include<stdio.h>
int main()
{
int n,i;
printf("enter the size of the array : ");
scanf("%d",&n);
float a[n];
printf("enter the numbers for which you want the average : ");
float sum = 0;
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
sum = sum + a[i];
}
float avg = sum/n;
printf("average of the numbers is %.2f\n",avg);
return 0;
}

#### OUTPUT:
enter the size of the array : 5
enter the numbers for which you want the average : 1
2
3
4
5
average of the numbers is 3.00

#### 3.WRITE A PROGRAM TO PRINT WEEKDAYS USING SWITCH STATEMENT.
#include<stdio.h>
int main()
{
int week_no;
printf("enter week number : ");
scanf("%d",&week_no);
switch(week_no)
{
case 1: printf("monday\n");
break;
case 2: printf("tuesday\n");
break;
case 3: printf("wednesday\n");
break;
case 4: printf("thursday\n");
break;
case 5: printf("friday\n");
break;
case 6: printf("saturday\n");
break;
case 7: printf("sunday\n");     
break;
default: printf("INVALID INPUT! PLEASE ENTER WEEK NUMBER BETWEEN 1-7\n");
}                                                                                 
return 0;
}

#### OUTPUT:
enter week number : 7
sunday

#### 4.WRITE A PROGRAM TO FIND WHETHER A NUMBER IS EVEN OR ODD.
#include <stdio.h>
int main()
{
int a;
printf("enter any number : ");
scanf("%d",&a);
if(a%2 == 0)
{
printf("the number is even");
}
else
{                               
printf("the number is odd");
}
return(0);
}

#### OUTPUT:
enter any number : 23
the number is odd

#### 5.WRITE A PROGRAM TO PRINT THE TABLE USING FOR LOOP.
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
#### OUTPUT:
enter a number for multiplication table: 2
        TABLE of 2
        ==========
2 X 1 = 2       2 X 11 = 22
2 X 2 = 4       2 X 12 = 24
2 X 3 = 6       2 X 13 = 26
2 X 4 = 8       2 X 14 = 28
2 X 5 = 10      2 X 15 = 30
2 X 6 = 12      2 X 16 = 32
2 X 7 = 14      2 X 17 = 34
2 X 8 = 16      2 X 18 = 36
2 X 9 = 18      2 X 19 = 38
2 X 10 = 20     2 X 20 = 40

#### 6.WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS AN ARMSTRONG NUMBER OR NOT.
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
printf("%d is an armstrong number\n",a);
}
else
{
printf("%d is not an armstrong number\n",a);
}
return 0;
}

#### OUTPUT:
enter non negative integral number : 153
153 is an armstrong number

#### 7.WRITE A PROGRAM TO PRINT CALCULATOR USING PUTS.
#include <stdio.h>
int main()
{
puts(" _______________ ");
puts("|_______________|");
puts("| 1 | 2 | 3 |   |");
puts("|___|___|___|   |");
puts("| 4 | 5 | 6 | + |");
puts("|___|___|___|___|");
puts("| 7 | 8 | 9 | - |");
puts("|___|___|___|___|");
puts("|    0      | * |");
puts("|___________|___|");
}

#### OUTPUT:
_______________ 
|_______________|
| 1 | 2 | 3 |   |
|___|___|___|   |
| 4 | 5 | 6 | + |
|___|___|___|___|
| 7 | 8 | 9 | - |
|___|___|___|___|
|    0      | * |
|___________|___|

