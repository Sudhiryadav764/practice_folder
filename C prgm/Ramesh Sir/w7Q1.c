//Write a program to show how similar variable names can be used in different functions.
#include<stdio.h>

void fun();
void main()
{
    int b=10,c=5;

    printf("In main() B=%d C=%d\n",b,c);
    fun();
}

void fun()
{
    int b=20,c=10;
    printf("In fun() B=%d C=%d",b,c);
}