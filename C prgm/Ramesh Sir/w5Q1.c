// Write a program to print bytes reserved for various types of data and space required for storing them in memory using arrays.
#include <stdio.h> 
int main() 
{ 

    // Declaring array of integers 
    int arr[10]; 

    // Declaring array of character 
    char ch[10]; 

    // Size of an integer variable is 4 bytes 
    printf("Size of an integer: %d\n", sizeof(int)); 

    // Size of an array of 10 integers is 40 bytes(10*4) 
    printf("Size of an array of 10 integers: %d\n", 
                          sizeof(arr)); 

    // Size of a character variable is 1 byte 
    printf("Size of a character: %d\n", sizeof(char)); 

    // Size of an array of 10 characters is 10 bytes(10*1) 
    printf("Size of an array of 10 characters: %d\n", 
                          sizeof(ch)); 

    return 0; 
}