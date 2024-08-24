//Write a program to detect the largest number out of five number and display it.
#include<stdio.h> 

int main() 
{ 
 int a,b,c,d,e; 

 printf("ENTER THE FIVE NUMBERS:-\n"); 
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e); 

 if(a>b && a>c &&  a>d && a>e) 
  printf("%d is largest", a); 

 else 
  if(b>c && b>d && b>e) 
   printf("%d is largest", b); 

 else 
  if(c>d && c>e) 
   printf("%d is largest", c); 

 else 
  if(d>e) 
   printf("%d  is largest", d); 

 else 
  printf("%d is largest", e); 

 return 0; 
} 