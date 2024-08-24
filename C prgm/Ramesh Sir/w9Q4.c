//Write a program in c language to declare pointer to structure and display the contents of the structure.

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
int main() 
{ 
    struct student 
    { 
        char name[50]; 
        int roll; 
        float marks; 
    }; 
    struct student *s; 
    s = (struct student*)malloc(sizeof(struct student)); 
    s->roll = 101; 
    s->marks = 90.5; 
    strcpy(s->name, "Sonoo Jaiswal"); 
    printf("Roll number: %d\n", s->roll); 
    printf("Marks: %f\n", s->marks); 
    printf("Name: %s\n", s->name); 
    free(s); 
    return 0; 
}