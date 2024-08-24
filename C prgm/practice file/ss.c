//not divisible by 3,5 &7 number
#include<stdio.h>
int main()
{
    int i,c;
    for(i=1;i<=100;i++){
        if((i%3!=0)&&(i%5!=0)&&(i%7!=0))
        printf("%d",i);
        printf("\n");
        c++;
       
    }

    
    return 0;
}