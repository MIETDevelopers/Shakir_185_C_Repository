// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: // C program to print print factorial using recursion.
// The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
// The execution of a Cprogram starts from the main() function.
#include<stdio.h>
	long int multiplyNumbers(int n);
	int main() {
    	int n;
    	printf("Enter a positive integer: ");
    	scanf("%d",&n);
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    	return 0;
	}

	long int multiplyNumbers(int n) {
    	if (n>=1)
        	return n*multiplyNumbers(n-1);
    	else
        	return 1;
}	