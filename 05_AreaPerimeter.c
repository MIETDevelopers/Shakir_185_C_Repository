// Author: Shakir Hussain Itoo 
// Creation Date:  Mar 2021
// Purpose: Program to calculate the area and perimeter of a circle and square respectively.
#include<stdio.h> // The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
int main()  // This is the start of main body of the program.
{       
	float radius, areaofcircle, side, areaofsquare, circumfrence, perimeterofsquare;  // variable decleration
	printf("\nEnter the radius of circle : "); // Radius of circle
    scanf("%f", &radius);
    areaofsquare = 3.14 * radius * radius;    // Here formula of area of circle is used. 
    circumfrence = 2 *(3.14*radius);          // Formula for circumference of a circle.
    printf("\nEnter the side of square");
    scanf("%f", &side);
    areaofsquare = side * side                 // area of square formula
    perimeterofsquare = 4*side                 // Formula
printf("\n Area of circle : %f, areaofcircle");			   // Printing Statement
printf("\ncircumference of circle is : %f, circumfrence");
printf("Area of square :%f\n",areaofsquare); 
printf("perimeter of square :%f\n", perimeterofsquare );  
	return 0;
}
