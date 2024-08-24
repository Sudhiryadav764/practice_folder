//print number from 1 to 100 which not divisible by 3,5 and 7

#include<stdio.h>

int main()
{
    int i;
    printf("print number not divisible by 3,5,and 7:");

    for(i=1;i<=100;i++){
        if((i%3!=0)&&(i%5!=0)&&(i%7!=0)){
        
        }
        printf("\t\tNumber is-> %d",i);
    }
    printf("\n");
    return 0;
}