//program to create an array of structure object
#include<stdio.h>

struct person
{
    int id;
    char name[30];
    int age;
}person p[5];
int main()
int i;
for(i=0;i<=5;i++){
    printf("Enter id,name & age respectively");
    scanf("%d%d%d",&(p=1)->id,&(p+1)->name,&(p+1)->age);

}
printf("Displaying information");
for(i=0;i<=5;i++){
    printf("id=%d\t name=%s \t age=%d \n",(p=1)->id,(p+1)->name,(p+1)->age);

    return 0;
}