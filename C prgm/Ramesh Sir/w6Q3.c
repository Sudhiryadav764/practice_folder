//Write a program to display two – dimensional array elements together with their address
#include <stdio.h> 
int main() 
{ 
    int i, j; 
    int a[2][2] = { {1, 2}, {3, 4} }; 

    for (i = 0; i < 2; i++) { 
        for (j = 0; j < 2; j++) { 
            printf("Address of a[%d][%d] is %p\n", i, j, &a[i][j]); 
            printf("Value of a[%d][%d] is %d\n", i, j, a[i][j]); 
        } 
    } 

    return 0; 
}