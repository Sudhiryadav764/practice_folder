#include<stdio.h>

int main()

{
    int a,b,sum=0;

    printf("Enter the first number :");
    scanf("%d",&a);
    
    printf("Enter the second number :");
    scanf("%d",&b);
    
    printf("%d+%d=",a,b);
    sum=a+b;
    printf("%d",sum);

return 0;
}