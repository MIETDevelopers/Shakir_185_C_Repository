// Author: Shakir Hussain Itoo 
// Creation Date: 27 Jan 2021
// Purpose: Program to calculate the area of a circle.
#include<stdio.h> // The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
int main()  
{       
	float radius, area;  // variable decleration
	printf("radius= ");  
    scanf("%f", &radius);
    area = 3.1415*radius*radius;
    printf("Area of circle = %.2f\n, area"); // printing upto two decimal places
	return 0;
}