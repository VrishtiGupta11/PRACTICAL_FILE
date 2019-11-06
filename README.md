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
2 X 1 = 2    &nbsp;   2 X 11 = 22  
2 X 2 = 4    &nbsp;   2 X 12 = 24  
2 X 3 = 6    &nbsp;   2 X 13 = 26  
2 X 4 = 8    &nbsp;   2 X 14 = 28  
2 X 5 = 10   &nbsp;   2 X 15 = 30  
2 X 6 = 12   &nbsp;   2 X 16 = 32  
2 X 7 = 14   &nbsp;   2 X 17 = 34  
2 X 8 = 16   &nbsp;   2 X 18 = 36  
2 X 9 = 18   &nbsp;   2 X 19 = 38  
2 X 10 = 20  &nbsp;   2 X 20 = 40  

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

#### 8.WRITE A PROGRAM FOR BUBBLE SORTING.  
#include<stdio.h>  
int main()  
{  
int n,i,k,temp;  
printf("enter the size of the array : ");  
scanf("%d",&n);  
int a[n];  
printf("enter the elements of the array : ");  
for (i = 0;i<n;i++)  
{  
scanf("%d",&a[i]);  
}  
for(k=0;k<n-1;k++)  
{  
for(i=0;i<n-1-k;i++)  
{  
if(a[i] > a[i+1])//greater sign for ascending order....         
{  
temp = a[i];  
a[i] = a[i+1];  
a[i+1] = temp;  
}  
}  
}  
printf("\narray elements after sorting\n");  
for(i = 0;i<n;i++)  
{  
printf("%d\n",a[i]);  
}  
return 0;  
}  

#### OUTPUT:  
enter the size of the array : 5  
enter the elements of the array : 22  
56  
13  
33  
87  

array elements after sorting  
13  
22  
33  
56  
87  

#### 9. WRITE A PROGRAM FOR BINARY SEARCH.  
#include<stdio.h>
int main()
{
int a[25],i,m,n,first=0,last,mid;

printf("Enter the size of the array : ");
scanf("%d",&m);
printf("Enter %d elements in ascending order: ");
for(i=0 ; i<m ; i++)
scanf("%d",&a[i]);

printf("Enter value to find: ");
scanf("%d",&n);

last=n-1;    //To initialise to last index position
mid=(first+last)/2;
while(first<=last)
{
if(a[mid]<n)
first=mid+1;
else if(a[mid]==n)
{
printf("%d found at position #%d.\n");    //mid+1 done to display location & not index position
break;
}
else
last=mid-1;

mid=(first+last)/2;
}

if(first>last)
printf("%d not found in the entered array!\n",n);    //Test expression turned false, which means desired element wasn't found

return 0;
}

#### 10.WRITE A PROGRAM TO FIND THE FACTORIAL OF THE NUMBER.
#include<stdio.h>
int main()
{
int i,a,factorial = 1;
printf("enter a positive number for which you want factorial : ");
scanf("%d",&a);
for(i=a;i>=1;i--)
{
factorial = factorial * i;
}
printf("factorial of %d is %d\n",a,factorial);
return 0;
}

#### OUTPUT:
enter a positive number for which you want factorial : 4
factorial of 4 is 24

#### 11.WRITE A PROGRAM FOR FIZZ-BUZZ.
#include <stdio.h>
int main()
{
int a;
printf("enter any number : ");
scanf("%d",&a);
if (a%15 == 0)
{
printf("fizz_buzz\n");
}
else
if (a%3 == 0)
{
printf("fizz\n");
}
else 
if (a%5 == 0)
{
printf("buzz\n");
}                               
else 
{
printf("%d\n",a);
}
return(0);
} 
#### OUTPUT:
enter any number : 45
fizz_buzz  

#### 12.WRITE A PROGRAM TO FIND THE SUM OF FIRST 100 NUMBERS.
#include <stdio.h>
int main()
{
int i,sum = 0;
for(i = 0;i <= 100;i = i+1)
{
sum = sum + i;
}
printf("sum of 1 to 100 numbers is %d\n",sum);
return 0;
}  

#### OUTPUT:\
sum of 1 to 100 numbers is 5050

#### 13.WRITE A PROGRAM TO FIND THE GREATER OF TWO NUMBERS.
#include <stdio.h>
int main()
{
float a,b;
printf("enter any two numbers : ");
scanf("%f %f",&a,&b);
if(a>b)
{
printf("%f is greater",a);
}
else 
{
printf("%.2f is greater\n",b);
}
return(0);
}

#### OUTPUT:
enter any two numbers : 12.5
33
33.00 is greater
