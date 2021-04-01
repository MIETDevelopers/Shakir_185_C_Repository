// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: // C program to swap two numbers using call by value.
// The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
// The execution of a Cprogram starts from the main() function.         
#include<stdio.h>
void swap(int, int);
int main(){
    int a, b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);//Taking input from user.
    swap(a,b);
}
//Here swapping exists.
void swap (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}