/*Write a program to display the stars as shown below.
	*
	* *
	* * *
	* * * *
	* * * * *
 */ 
#include<stdio.h>
int main()
{
int i,j,k;
printf("Enter number ...");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}