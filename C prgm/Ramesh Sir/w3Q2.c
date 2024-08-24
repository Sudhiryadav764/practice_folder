//Write a program to find the perfect square from 1 to 500.
# include <stdio.h>
# include <math.h> 
int main() 
{ 
	 int m,a, n; 
	 float p ; 
printf("enter number ");
    scanf("%d",&a);

	for(n=1;n<=a;n++)
	{
		p = sqrt(n) ; 
 		m = p ; 
 		if (p == m) 
  			printf("%d ", n) ; 

	}

 	return 0;
} 