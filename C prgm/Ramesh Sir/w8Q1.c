//Write a program to display the values of variables and its location using pointer.
#include<stdio.h> 
int main() 
{ 
   int var = 10; 
   int *ptr; 
   ptr = &var; 
   printf("Value at ptr = %d\n", *ptr); 
   printf("Address of var = %d\n", &var); 
   printf("Address stored in ptr = %d\n", ptr); 
   return 0; 
}