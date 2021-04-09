// Author: Shakir Hussain Itoo
// Creation Date: Mar 2021
// Purpose: C program to calculate the factorial of a number.
#include <stdio.h> // The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
// The execution of a Cprogram starts from the main() function.
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    //It will scan the number entered by user.
    for(i=1;i<=number;i++){    
      fact=fact*i;   //Formula 
  }    
  printf("Factorial of %d is: %d",number,fact);    //This will give us output.
return 0;  
}