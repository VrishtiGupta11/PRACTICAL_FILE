# GURU NANAK DEV ENGINEERING COLLEGE, LUDHIANA
## **PROGRAMMIMG FOR PROBLEM SOLVING ESC-18105**
## NAME- VRISHTI GUPTA
## ROLL NO- 1915086
## BRANCH- COMPUTER SCIENCE & ENGINEERING
## SECTION- CSE-B

## CODE
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

			int n,i,a[n],search,mid,first,last;  
			printf("enter number of elements to be entered : ");  
			scanf("%d",&n);  
			printf("enter the elements in ascending order : ");  
			for(i=0;i<n;i++)  
		{  
		scanf("%d",&a[i]);  
		}  
		printf("enter the element to be searched : ");  
		scanf("%d",&search);  
			first = 0;  
			last = n-1;  
			mid = (first + last)/2;  

			while(a[mid] != search)  
			{  
			if(a[mid] > search)  
			last = mid -1;  

			else  
			first = mid + 1;  

			mid = (first + last)/2;  
			}  
			if(a[mid] == search)  
			printf("search is successful at position %d\n",mid);  

			return 0;  
		}  

#### OUTPUT:  
enter number of elements to be entered : 5  
enter the elements in ascending order : 1  
2  
3  
4  
5  
enter the element to be searched : 4  
search is successful at position 3  
  
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

			int y,x,r;  
			printf("enter the value of y : ");  
			scanf("%d",&y);  
			printf("enter the value of x : ");  
			scanf("%d",&x);  
			r = y%x;  
			while(r != 0)  
			{  
			y = x;  
			x = r;  
			r = y%x;  
			}  
			if(r == 0)  
			printf("gcd is %d\n",x);  
			return 0;  
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
		#include<stdio.h>  
		int main()  
		{

			int n,i,search;  
			printf("enter the size of the array : ");  
			scanf("%d",&n);  

			int a[n];  
			printf("enter the elements of the array : ");  
			for(i=0;i<n;i++)  
			scanf("%d",&a[i]);  

			printf("enter the number to search : ");  
			scanf("%d",&search);  

			for(i=0;i<n;i++)  
			{  
			if(a[i]==search)  
			{  
			printf("search is successful...item found at position %d\n",i+1);  
			break;  
			}                                 
			}  
			if(i==n)  
			printf("search is unsuccessful\n");  

		return 0;  
	}    

#### OUTPUT:  
enter the size of the array : 5  
enter the elements of the array : 22  
44  
33  
11  
55  
enter the number to search : 11  
search is successful...item found at position 4  
  
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
		#include<stdio.h>  
		void swap(int a,int b)  
		{

			int temp;  
			printf("\ninside the function value of a = %d and value of b = %d before swap\n",a,b);    
			temp = a;  
			a = b;  
			b = temp;  
			printf("value of a = %d and value of b = %d",a,b);  
		}  
		int main()  
		{

			int x,y;  
		printf("enter value for x : ");  
		scanf("%d",&x);  
		printf("enter value for y : ");  
		scanf("%d",&y);  
		printf("\nbefore calling swap function\n");  
		printf("value of x = %d, value of y = %d",x,y);  
		swap(x,y);  
		printf("\n after returning from swap function");  
		printf("\n value of x = %d and value of y = %d",x,y);  
		return 0;  
	}  

#### OUTPUT:    
enter value for x : 10  
enter value for y : 12  

before calling swap function  
value of x = 10, value of y = 12  
inside the function value of a = 10 and value of b = 12 before swap  
value of a = 12 and value of b = 10  
 after returning from swap function  
 value of x = 10 and value of y = 12  

#### 23.WRITE A PROGRAM TO SWAP TWO NUMBERS USING CALL BY REFERENCE METHOD.  
		#include<stdio.h>  
		void swap(int*a,int*b)  
		{

			int temp;  
			printf("\ninside the function value of *a = %d and value of *b = %d before swap\n",*a,*b);    
			temp = *a;  
			*a = *b;  
			*b = temp;  
			printf("after swap value of *a = %d and value of *b = %d",*a,*b);  
		}  
		int main()  
		{

			int x,y;  
			printf("enter value for x : ");  
		scanf("%d",&x);  
		printf("enter value for y : ");  
		scanf("%d",&y);  
		printf("\nbefore calling swap function\n");  
		printf("value of x = %d, value of y = %d",x,y);  
		swap(&x,&y);  
		printf("\n after returning from swap function");  
		printf("\n value of x = %d and value of y = %d",x,y);  
		return 0;  
	}  

#### OUTPUT:  
enter value for x : 10  
enter value for y : 12  

before calling swap function  
value of x = 10, value of y = 12  
inside the function value of *a = 10 and value of *b = 12 before swap  
after swap value of *a = 12 and value of *b = 10  
 after returning from swap function  
 value of x = 12 and value of y = 10  

#### 24.WRITE A PROGRAM TO ENTER THE DETAILS OF EMPLOYEES USING STRUCTURE.  
		#include<stdio.h>  
		struct employee  
		{

			char name[20];  
			int age;  
			char department[20];  
			float salary;  
		};  

		int main()  
		{

			struct employee aemployee;  
			printf("enter employee's name : ");  
			scanf("%s",&aemployee.name);  
			printf("enter employee's age : ");  
		scanf("%d",&aemployee.age);  
		printf("enter employee's department : ");  
		scanf("%s",&aemployee.department);  
		printf("enter employee's salary : ");  
		scanf("%f",&aemployee.salary);  
		printf("name is %s\n",aemployee.name);  
		printf("age is %d\n",aemployee.age);  
		printf("department is %s\n",aemployee.department);  
		printf("salary is %f\n",aemployee.salary);  
		return 0;                          
	}  
                                                               

#### OUTPUT:  
enter employee's name : ram  
enter employee's age : 21  
enter employee's department : cse  
enter employee's salary : 100000  
name is ram  
age is 21  

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


#### 1.Write a program to calculate the sum of the five digits on n.  
		#include <stdio.h>  
		#include <string.h>  
		#include <math.h>  
		#include <stdlib.h>  

		int main(){  

		    int n;  
	    scanf("%d", &n);  
	    //Complete the code to calculate the sum of the five digits on n.  
	    int sum = 0;  
		    int temp = n;  
		    while(temp>0)  
		    {  
			int r = temp%10;  
			sum = sum + r;  
			temp = temp/10;  
		    }  
		    printf("%d",sum);  
		    return 0;  
		}  


#### 2.Write a program to print the pattern from 1 to n.
 4 4 4 4 4 4 4  
 4 3 3 3 3 3 4   
 4 3 2 2 2 3 4   
 4 3 2 1 2 3 4   
 4 3 2 2 2 3 4   
 4 3 3 3 3 3 4   
 4 4 4 4 4 4 4   
 
	#include <stdio.h>  
	#include <string.h>  
		#include <math.h>  
		#include <stdlib.h>  

		int main()  
		{

		    int n,i,j,m,l;
		    scanf("%d", &n);
		    l= 2*n - 1;
			// Complete the code to print the pattern.
		    for(i=0; i<l;i++ )  
		    {
			for(j=0;j<l;j++)
			{
			    m = (i<j)?i:j;
			    m = m<l-i-1 ? m : l-i-1;
			    m = m<l-j-1 ? m : l-j-1;
			    printf("%d ",n-m);
			}
			printf("\n");

		    }
		    return 0;
		}  


#### 3.In this challenge, you have to create an array of size n dynamically, input the elements of the array, sum them and print the sum of the elements in a new line.

	#include <stdio.h>  
	#include <string.h>  
	#include <math.h>  
		#include <stdlib.h>  

		int main() {

		    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
		    int n, *ptr,sum=0;
		    scanf("%d",&n);
		    ptr = malloc(n*sizeof(int));
		    for(int i = 0;i<n;i++)
		    {
			scanf("%d",&ptr[i]);
			sum = sum+ptr[i];
		    }
		    printf("%d",sum);
		    free(ptr);
		    return 0;
		}

#### 4.Given an array, of size n, reverse it.

		#include <stdio.h>  
		#include <stdlib.h>  

	int main()
	{

	    int num, *arr, i,temp;
	    scanf("%d", &num);
	    arr = (int*) malloc(num * sizeof(int));
		    for(i = 0; i < num; i++)
		    {
			scanf("%d", arr + i);
		    }


		    /* Write the logic to reverse the array. */
		    for(i=0;i<num/2;i++)
		    {
			temp = *(arr + i);
			*(arr + i) = *(arr + num - i - 1);
			*(arr + num - i - 1) = temp;
		    }

		    for(i = 0; i < num; i++)
			printf("%d ", *(arr + i));
		    return 0;
		}


#### 5.Given a sentence,s , print each word of the sentence in a new line.  

		#include <stdio.h>  
		#include <string.h>  
		#include <math.h>  
		#include <stdlib.h>  

		int main() {

		    char *s;
		    s = malloc(1024 * sizeof(char));
		    scanf("%[^\n]", s);
		    s = realloc(s, strlen(s) + 1);
		    //Write your logic to print the tokens of the sentence here.
		    int i=0;
		    while(s[i] != '\0')
		    {
		if(s[i] == ' ')
		    printf("\n");
		else
		    printf("%c",s[i]);
		i++;
	    }
	    return 0;
		}



#### 6.There is a series,S , where the next term is the sum of pervious three terms. Given the first three terms of the series,a ,b , and c respectively, you have to output the nth term of the series using recursion.  

		#include <stdio.h>  
		#include <string.h>  
		#include <math.h>  
		#include <stdlib.h>  
		//Complete the following function.  

		int find_nth_term(int n, int a, int b, int c) {  

			  if(n==1)  
			  {  
			      return a;  
			  }  
			  else if(n==2)  
			  {  
			      return b;  
			  }  
			  else if(n==3)  
			  {  
			      return c;  
			  }  
			  else  
			  {  
			      return(find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + find_nth_term(n-3,a,b,c));  
			  }  

	}  

	int main() {

	    int n, a, b, c;

	    scanf("%d %d %d %d", &n, &a, &b, &c);
	    int ans = find_nth_term(n, a, b, c);

		    printf("%d", ans); 
		    return 0;
		}


#### 7.Given a string,s , consisting of alphabets and digits, find the frequency of each digit in the given string.Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

#### input: a11472o5t6

		#include <stdio.h>  
		#include <string.h>  
		#include <math.h>  
		#include <stdlib.h>  

		int main() {

		    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
		    char num[1001];
		    char freq[10];
		    int i,len;
		    scanf("%s",num);
		    len = strlen(num);
		    for(i=0;i<10;i++)
		    {
			freq[i] = 0;
		    }
		    for(i=0;i<len;i++)
		    {
			int digit = num[i] - '0';
			if(digit>=0 && digit<=9)
			{
			    freq[digit]++;
			}
		    }
		    for(i=0;i<10;i++)
		    {
			printf("%d ",freq[i]);
		    }
	    return 0;
	}

#### output : 0 2 1 0 1 1 1 1 0 0 


#### 8.You are given an array of integers,marks , denoting the marks scored by students in a class.

The alternating elements marks0, marks2, marks4 and so on denote the marks of boys.
Similarly,marks1 ,marks3 , marks5 and so on denote the marks of girls.

	#include <stdio.h>  
	#include <string.h>  
	#include <math.h>  
	#include <stdlib.h>  

	//Complete the following function.  

	int marks_summation(int* marks, int number_of_students, char gender)     
	{

		//Write your code here.  
		int i,m=0;  
		for(i=(gender == 'g')?1:0;i<number_of_students;i=i+2)  
		{  
		m = m + *(marks + i);  
		}  
		return m; 
				  }  

	int main()   
	{  

	    int number_of_students;  
	    char gender;  
	    int sum;  

	    scanf("%d", &number_of_students);
	    int *marks = (int *) malloc(number_of_students * sizeof (int));

	    for (int student = 0; student < number_of_students; student++) {
		scanf("%d", (marks + student));
	    }

	    scanf(" %c", &gender);
	    sum = marks_summation(marks, number_of_students, gender);
	    printf("%d", sum);
	    free(marks);

	    return 0;
	}


#### 9. You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is characterized by its length, width and height.  

The height of the tunnel 41 feet and the width can be assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's   height. Find the volume of each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.  

#### Input Format  

The first line contains a single integer n, denoting the number of boxes.  
 lines follow with three integers on each separated by single spaces lengthi , widthi and heighti which are length, width and height in feet of the i-th box.  
 
#### Output Format  
  
For every box from the input which has a height lesser than 41 feet, print its volume in a separate line.  

#### Sample Input 0  
  
4  
5 5 5  
1 2 40  
10 5 41  
7 2 42  
#### Sample Output 0  
  
125  
80  
  
	#include <stdio.h>  
	#include <stdlib.h>  
	#define MAX_HEIGHT 41  

	struct box  
	{  

		/**
		* Define three fields of type int: length, width and height
		*/
	    int length,width,height;
	};

	typedef struct box box;  

	int get_volume(box b)   
	{

		/**
		* Return the volume of the box
		*/
	    return (b.length*b.width*b.height);
	}

	int is_lower_than_max_height(box b) 
	{

		/**
		* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
		*/
	    if(b.height<MAX_HEIGHT)
		return 1;
	    else 
		return 0;
	}

	int main()  
	{  

		int n;
		scanf("%d", &n);
		box *boxes = malloc(n * sizeof(box));
		for (int i = 0; i < n; i++) {
			scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
		}
		for (int i = 0; i < n; i++) {
			if (is_lower_than_max_height(boxes[i])) {
				printf("%d\n", get_volume(boxes[i]));
			}
		}
		return 0;
	}
