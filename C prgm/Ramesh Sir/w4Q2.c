//Write a program to accept a number and find sum of its individual digits repeatedly till the result is a single digit.
#include <stdio.h> 

int sumOfDigits(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 9 == 0) ? 9 : (n % 9); 
} 

int main() 
{ 
    int n;
    printf("Enter a number :: ");
    scanf("%d",&n);
    printf("The sum is %d ", sumOfDigits(n)); 
    return 0; 
}