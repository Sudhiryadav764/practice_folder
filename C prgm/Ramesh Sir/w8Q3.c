//Write a program to add two numbers through variables and their pointers.
#include <stdio.h> 
int main() 
{ 
    int a, b, c; 
    int *pa = &a, *pb = &b, *pc = &c; 

    printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b); 

    c = *pa + *pb; 

    printf("Sum of entered numbers = %d\n", c); 

    return 0; 
}