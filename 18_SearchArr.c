// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: C program to search an elements using linear search.
// The #include is a command which tells the compiler to include the contents of standard input and output header file in the program.
// The stdio.h file contains functions such as scanf() and printf() to take input and display output respectively.
// The execution of a Cprogram starts from the main() function.
int main()  
{
    int a[20],i,x,n; //  Variable Declration 
    printf("How many elements?"); // Taking input 
    scanf("%d",&n);
     
    printf("Enter array elements:n"); // Taking input 
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("nEnter element to search:"); // asking user to enter element to search 
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d",i); // If true Print the Output 
    else
        printf("Element not found"); // If False Print "Element not found"
  
    return 0;
} // End Of body 
