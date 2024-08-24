//Write a program to send values to user – defined function and receive and display the return values.
#include <stdio.h> 

int sum(int a, int b) 
{ 
    return a + b; 
} 

int main() 
{ 
    int num1 = 5, num2 = 15, sum_of_numbers; 
    sum_of_numbers = sum(num1, num2); 
    printf("Sum of %d and %d is %d", num1, num2, sum_of_numbers); 
    return 0; 
}