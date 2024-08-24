/*Write a program to show the effect of increment and decrement operators
 used as prefix and suffix with the pointer variable.*/
#include <stdio.h> 
int main() 
{ 
    int var = 3; 
    int *ptr; 
    ptr = &var; 

    printf("Value at ptr = %d\n", *ptr); 
    printf("Value at ptr = %d\n", *ptr++); 
    printf("Value at ptr = %d\n", *ptr); 
    printf("Value at ptr = %d\n", ++*ptr); 
    printf("Value at ptr = %d\n", *ptr--); 
    printf("Value at ptr = %d\n", *ptr); 
    printf("Value at ptr = %d\n", --*ptr); 
    return 0; 
}