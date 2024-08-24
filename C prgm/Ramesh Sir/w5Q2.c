//Write a program to add even and odd number from 1 to 10. Store them and display their results in two separate arrays
#include<stdio.h>
int main()
{
int i,n,a[10],b[10],c=0,d=0;
for(i=0;i<10;i++)
{
if(i%2==0)
{
a[c]=i;
c++;
}
else
{
b[d]=i;
d++;
}
}
printf("Even number:-\n");
for(i=0;i<c;i++)
{
printf("%d\n",a[i]);
}
printf("Odd number:-\n");
for(i=0;i<d;i++)
{
printf("%d\n",b[i]);
}
return 0;
}