// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Program to demonstrate the function implimentation which returns a structure. 
#include <stdio.h>

struct a {
   int i;
};

struct a f(struct a x)
{
   struct a r = x;
   return r;
}

int main(void)
{
   struct a x = { 12 };
   struct a y = f(x);
   printf("%d\n", y.i);
   return 0;
}