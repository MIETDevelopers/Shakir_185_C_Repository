// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: // C program to swap two numbers using call by reference.
// The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
// The execution of a Cprogram starts from the main() function.
#include <stdio.h>
 
void swap(int*, int*);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
   // Here swapping occurs.
   temp = *b;
   *b = *a;
   *a = temp;   
}