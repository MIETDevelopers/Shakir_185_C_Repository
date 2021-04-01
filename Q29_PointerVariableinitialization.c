// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: C Program to initialise pointer variable.
#include <stdio.h>
int main()
{
   //Variable declaration
   int num = 10;

   //Pointer declaration
   int *p;

   //Assigning address of num to the pointer p
   p = &num;

   printf("Address of variable num is: %p", p);
   return 0;
}