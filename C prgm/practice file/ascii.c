#include<stdio.h>
int main ()
{
    int i,j;
    printf(" print 1 to 100 using ascii value from 48 to 57 ");
    for(i=1;i<=100;i++){
        for(j=48;j<=57;j++){
            printf("%c",j);
            // printf("\n");

        }

    }
    return 0;
}