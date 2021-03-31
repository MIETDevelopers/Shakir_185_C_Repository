// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: C Program to calculate the sum of digits of a number using while loop.
#include<stdio.h>  // The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
// The execution of a Cprogram starts from the main() function.
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    // Loop started 
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    // Loop ended 
printf("Sum is=%d",sum);   // Printing Sum of Digits 
return 0;  
}   