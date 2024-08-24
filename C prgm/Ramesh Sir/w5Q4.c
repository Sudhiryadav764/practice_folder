//Write a program to display the contents of two arrays. The 1st array should contain the string and 2nd numerical numbers.
#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];
   int num[100];
   int i;

   printf("Enter a string: ");
   gets(str);

   printf("Enter %d numbers: ", strlen(str));
   for(i=0; i < strlen(str); i++)
   {
      scanf("%d", &num[i]);
   }

   printf("\nOutput:\n ");
     for(i=0; i < strlen(str); i++)
    printf("%c\n", str[i]);
    for(i=0; i < strlen(str); i++)  
    printf("%d\n", num[i]);

   return 0;
}