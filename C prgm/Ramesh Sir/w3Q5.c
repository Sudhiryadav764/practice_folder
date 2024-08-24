//Write a program to display numbers 1 to 100 using ASCII value from 48 to 57. Use the nested loop.
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=100;i++)
{
for(j=48;j<57;j++)
{
printf("%c",j);
}
}
return 0;
}