#include<stdio.h>
#include<string.h>
// creat struct variable
struct student
{
    int roll;
    int marks;
    char name[20];
}std;

int main(){


    //assign value to name of student

    strcpy(std.name,"Sudhir yadav");

    //assign value
    std.roll=226017;
        std.marks=463;

        //print value

        printf("student's roll is:: %d\n",std.roll);
         printf("student's marks is:: %d\n",std.marks);
          printf("student's name is:: %s\n",std.name);
          return 0;
        


}