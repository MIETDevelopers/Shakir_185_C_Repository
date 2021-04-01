// Author: Shakir Hussain Itoo#include<stdio.h>  
// Creation Date: Mar 2021
// Purpose: C program to demonstrate 1D and 2D arrays passed as a argument to function.
#include <stdio.h> 
int main(){ //Main function
    //Nested for loop to take inputs for second array
    int arr1[2][2], arr2[2][2];
    int arr3[2][2];
    int i, j;
    printf("Enter elements for first array:\n");
    //Nested for loop to take inputs for first array
    for(i=0; i<2; ++i)
    {
        for(j=0; j<2; ++j)
        {
            printf("Enter A[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr1[i][j]);
            printf("\n");
        }
    }
    printf("\nEnter elements for second array:\n");
    //Nested for loop to take inputs for second array
    for(i=0; i<2; ++i)
    {
        for(j=0; j<2; ++j)
        {
            printf("Enter B[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr2[i][j]);
            printf("\n");
        }
    } 
    //Adding corresponding elements of two arrays
    for(i=0; i<2; ++i)
    {
        for(j=0; j<2; ++j)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    //Nested for loop to display the sum
    printf("\nSum:\n");
    for(i=0; i<2; ++i)
    {
        for(j=0; j<2; ++j)
        {
            printf("%d\t", arr3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
    }
    return 0; //Return function
}