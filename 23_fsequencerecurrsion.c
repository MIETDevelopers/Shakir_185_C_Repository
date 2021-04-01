// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: // C program to print fibonacci sequence using recursion.
#include<stdio.h>  // The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
// The execution of a Cprogram starts from the main() function.
int main(){    
	int n1=0,n2=1,n3,i,number;    
	printf("Enter the number of elements: ");    
	scanf("%d",&number);    
	printf(" %d %d",n1,n2);//Printing 0 and 1.   
	for(i=2;i<number;++i)//Loop starts from 2 because 0 and 1 are already printed.   
		{	//This will give output.
			n3=n1+n2;    
  			printf(" %d",n3);    
  			n1=n2;    
  			n2=n3;    
 		}  
	return 0;  
}