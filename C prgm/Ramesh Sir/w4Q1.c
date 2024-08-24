//Write a program using nested for loops. Print values and message when any  loop ends.
#include <stdio.h>

int main()
{
    int i, j;

    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            printf("%d\t", j);
        }

        printf("Loop %d ended.\n",i);

    }

    return 0;
}