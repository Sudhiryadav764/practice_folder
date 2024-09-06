//program to create an array of structure object
#include<stdio.h>

struct person
{
    int id;
    char name[30];
    int age;
};

int main(){
    struct person p[5]; // Declare the array of structures
    int i;

    // Input information
    for(i = 0; i < 5; i++){
        printf("Enter id, name & age respectively for person %d: ", i + 1);
        scanf("%d %s %d", &p[i].id, p[i].name, &p[i].age);
    }

    // Display information
    printf("Displaying information:\n");
    for(i = 0; i < 5; i++){
        printf("id = %d\t name = %s\t age = %d\n", p[i].id, p[i].name, p[i].age);
    }

    return 0;
}
