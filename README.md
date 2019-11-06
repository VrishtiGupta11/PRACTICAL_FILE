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
printf("%d X %d = %d  &nbsp;  %d X %d = %d\n",n,i,n*i,n,10 + i,n*(10 + i));  

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
sum = sum + (r* r* r);  
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
puts("| _______________ |");  
puts("|&nbsp; 1 &nbsp;|&nbsp; 2 &nbsp;|&nbsp; 3 &nbsp;|&nbsp; &nbsp; &nbsp;|");  
puts("| ___ | ___ | ___ |&nbsp; &nbsp; &nbsp;|");  
puts("|&nbsp; 4 &nbsp;|&nbsp; 5 &nbsp;|&nbsp; 6 &nbsp;|&nbsp; + &nbsp;|");  
puts("| ___ | ___ | ___ | ___ |");  
puts("|&nbsp; 7 &nbsp;|&nbsp; 8 &nbsp;|&nbsp; 9 &nbsp;|&nbsp; - &nbsp;|");  
puts("| ___ | ___ | ___ | ___ |");  
puts("|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;  *  &nbsp;|");  
}  

#### OUTPUT:  

| _______________ |  
| _______________ |  
|&nbsp; 1 &nbsp;|&nbsp; 2 &nbsp;|&nbsp; 3 &nbsp;|&nbsp; &nbsp; &nbsp;|  
| ___ | ___ | ___ |&nbsp; &nbsp; &nbsp;|  
|&nbsp; 4 &nbsp;|&nbsp; 5 &nbsp;|&nbsp; 6 &nbsp;|&nbsp; + &nbsp;  
| ___ | ___ | ___ | ___ |  
|&nbsp; 7 &nbsp;|&nbsp; 8 &nbsp;|&nbsp; 9 &nbsp;|&nbsp; - &nbsp;  
| ___ | ___ | ___ | ___ |  
|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;  *  &nbsp;|
  

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
  
#### OUTPUT:  
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
printf("%.2f is greater",a);  
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
  
#### 14. WRITE A PROGRAM TO FIND THE GREATER OF THREE NUMBERS.  
#include<stdio.h>  
int largest(int a,int b,int c)  
{  
if(a>b && a>c)  
return(a);  
else if(b>a && b>c)  
return(b);  
else  
return(c);  
}  
int main()  
{  
int a,b,c;  
printf("enter any three numbers : ");  
scanf("%d %d %d",&a,&b,&c);  
printf("largest of three numbers is : %d",largest(a,b,c));  
return 0;  
}  
  
#### OUTPUT:  
enter any three numbers : 12  
22  
10  
largest of three numbers is : 22  
  
#### 15.WRITE A PROGRAM TO FIND GCD OF NUMBERS.  
#include<stdio.h>  
int main()  
{  
int x,y;  
printf("enter first integral number : ");  
scanf("%d",&x);  
printf("enter second integral number : ");  
scanf("%d",&y);  
if(y%x == 0)  
printf("gcd is %d\n",x);  
else  
{  
while(y%x != 0)  
{  
x = y%x;  
y = x;  
}  
printf("gcd is %d\n",x);  
}  
}  
  
#### OUTPUT:  
enter first integral number : 12  
enter second integral number : 16  
gcd is 4  
  
#### 16.WRITE A PROGRAM TO FIND WHETHER THE YEAR IS A LEAP YEAR OR NOT.  
#include <stdio.h>  
int main()  
{  
int i;  
printf("enter any year : ");  
scanf("%d",&i);  
if (i%400 == 0)  
{  
printf("%d is leap year\n",i);  
}  
else   
printf("%d is not leap year\n",i);  
return 0;  
}  
  
#### OUTPUT:  
enter any year : 2000  
2000 is leap year  
  
#### 17.WRITE A PROGRAM FOR LINEAR SEARCH.  
  

#### OUTPUT:  


#### 18.WRITE A PROGRAM FOR MATRIX ADDITION.  
#include<stdio.h>  
int main()  
{  
int a[10][10],b[10][10],c[10][10],n,m,i,j;  
printf("enter the size of the matrix : ");  
scanf("%d %d",&m,&n);  
  
printf("enter the elements of matrix A : ");  
for (i=0;i<n;i++)  
{  
for(j = 0;j<m;j++)  
{  
scanf("%d",&a[i][j]);  
}  
}  
  
printf("enter the elements of matrix B : ");  
for(i = 0;i<n;i++)  
{  
for(j=0;j<m;j++)  
{  
scanf("%d",&b[i][j]);  
}  
}  
  
for(i = 0;i<n;i++)  
{  
for(j= 0;j<m;j++)  
{  
c[i][j] = a[i][j] + b[i][j];  
printf("%d\n",c[i][j]);  
}  
}  
return 0;  
}  
  
#### OUTPUT:  
enter the size of the matrix : 3  
2  
enter the elements of matrix A : 1  
2  
3  
4  
5  
6  
enter the elements of matrix B : 1  
2                                 
3  
4  
5  
6  
    
2  

4  

6  

8  

10  

12   

#### 19.WRITE A PROGRAM TO FIND TRANSPOSE OF A MATRIX.  
#include<stdio.h>  
int main()  
{  
int a[10][10],b[10][10],n,m,i,j;  
printf("enter the size of matrix A : ");  
scanf("%d %d",&m,&n);  
printf("enter the elements of matrix A row wise\n",m*n);  
for(i = 0;i < m;i++)  
{  
for(j = 0;j<m;j++)  
{  
scanf("%d",&a[i][j]);  
}  
}  
for(i = 0;i<m;i++)  
{  
for(j= 0;j<n;j++)  
{  
b[j][i] = a[i][j];  
}  
}  
printf("\ntranspose is \n ");  
for(i=0;i<n;i++)  
{  
for(j = 0;j<m;j++)  
{  
printf("%d\n",b[i][j]);  
}  
}  
return 0;  
}  

#### OUTPUT:  
enter the size of matrix A : 3  
3  
enter the elements of matrix A row wise  
1  
2  
3  
4  
5  
6  
7  
8  
9  
  
transpose is   
 1  
4  
7  
2  
5  
8  
3  
6  
9  
  
#### 20.WRITE A PROGRAM TO FIND SUM OF DIGITS OF A NUMBER.  
#include<stdio.h>  
int main()  
{  
int num,temp;int sum=0,digit;  
printf("enter any integral number : ");  
scanf("%d",&num);  
temp = num ;  
while (temp > 0)  
{  
digit = temp % 10;  
temp = temp/10;  
sum = sum + digit;  
}  
printf("\n sum of digits of %d = %d\n",num,sum);  
return 0;  
}  
  
#### OUTPUT:  
enter any integral number : 145  
  
 sum of digits of 145 = 10  
   
#### 21.WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME NUMBER OR NOT.  
#include<stdio.h>  
int main()  
{  
int a,num,r,p_n = 0;  
printf("enter atleast two digit integral number : ");  
scanf("%d",&a);  
num = a;  
while(num > 0)  
{  
r = num%10;  
p_n = p_n*10 + r;  
num =num/10;  
}  
if(a == p_n)  
{  
printf("%d is a pallindrome number.",a);  
}  
else  
{  
printf("%d is not a pallindrome number.",a);  
}  
return 0;  
}  
  
#### OUTPUT:  
enter atleast two digit integral number : 14541  
14541 is a pallindrome number.  
  
#### 22.WRITE A PROGRAM TO SWAP TWO NUMBERS USING CALL BY VALUE METHOD.  


#### OUTPUT:  


#### 23.WRITE A PROGRAM TO SWAP TWO NUMBERS USING CALL BY REFERENCE METHOD.  


#### OUTPUT:  


#### 24.WRITE A PROGRAM TO ENTER THE DETAILS OF EMPLOYEES USING STRUCTURE.  


#### OUTPUT:  


#### 25.WRITE A PROGRAM TO FIND THE PRODUCT OF FRACTIONS USING STRUCTURES.  
#include<stdio.h>  
struct fraction  
{  
int numerator;  
int denominator;  
};  
  
int main()  
{  
struct fraction f1,f2,rf;  
printf("enter numerator of the fraction1 : ");  
scanf("%d",&f1.numerator);  
printf("enter denominator of the fraction1 : ");  
scanf("%d",&f1.denominator);  
  
printf("enter numerator of the fraction2 : ");  
scanf("%d",&f2.numerator);  
printf("enter denominator of the fraction2 : ");  
scanf("%d",&f2.denominator);  
  
rf.numerator = f1.numerator*f2.numerator;  
rf.denominator = f1.denominator*f2.denominator;  
printf("resultant fraction : %d/%d\n",rf.numerator,rf.denominator);  
return 0;  
}  
  

#### OUTPUT:  
enter numerator of the fraction1 : 4  
enter denominator of the fraction1 : 2  
enter numerator of the fraction2 : 5  
enter denominator of the fraction2 : 3  
resultant fraction : 20/6  
 _X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_ 
