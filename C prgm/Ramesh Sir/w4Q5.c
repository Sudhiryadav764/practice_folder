//Write a program to verify the truth table of AND Gate. Assume AND Get has two input bit A and B and output bit C.
#include <stdio.h>

int main()
{
   int a, b, c;

   printf("Enter the value of a and b\n");
   scanf("%d%d", &a, &b);

   c = a & b;

   printf("Value of c=%d\n", c);

   return 0;
}