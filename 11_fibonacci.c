// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: C Program to display fibonacci series.
#include<stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm; // Variable Declration 
    printf("Enter the number of terms: "); // Taking Input from user
    scanf("%d", &n);
    printf("Fibonacci Series: "); 

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2; // Logic
        t1 = t2; // Logic 
        t2 = nextTerm; // Logic
    }

    return 0;
}