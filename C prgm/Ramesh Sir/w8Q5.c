//Write a program to display the sum of square and cubes of array elements using pointers.
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, sum1 = 0, sum2 = 0;
    int *p, *q;
    p = &a[0];
    q = &a[0];
    for (i = 0; i < 10; i++)
    {
        sum1 = sum1 + (*p * *p);
        sum2 = sum2 + (*q * *q * *q);
        p++;
        q++;
    }
    printf("Sum of squares of array elements: %d\n", sum1);
    printf("Sum of cubes of array elements: %d", sum2);
    return 0;
}