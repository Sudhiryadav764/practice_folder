//Write a program to send a value by reference to the user – defined function
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x, y;
    printf("Enter the value of x and y\n");
    scanf("%d%d", &x, &y);
    printf("Before Swapping\nx = %d\ny = %d\n", x, y);
    swap(&x, &y);
    printf("After Swapping\nx = %d\ny = %d\n", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}