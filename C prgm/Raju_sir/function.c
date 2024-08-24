/* write a program to passed values to user define 
functions called and displayed values return by the 
called functions */
#include<stdio.h>
 
 int main()
 {
    int date(int,int,int);
    int d,m,y,t;
  
    printf("Enter dd/mm/yy ");
    scanf("%d%d%d",&d,&m,&y);
    t = date(d,m,y);
    printf("\n Tommorow = %d%d%d",t,m,y);
    return 0;

 }
 date(int x,int y,int z)
{
    printf("\nToday = %d%d%d",x,y,z);
    return (++x);
}